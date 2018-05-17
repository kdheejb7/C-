#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

class Sorting {
public:
	virtual void sort(vector<int> &nums) = 0;
	static void print(vector<int> &nums) {	//static�Լ� ��ü ���� �θ� �� �ִ�. 
		for (int i = 0; i<nums.size(); i++)
			cout << nums[i] << " ";
		cout << endl;
	}
};

class Counting : public Sorting {
public:
	int k = 0;

	virtual int getValue(int n, int k) {
		return n;
	}
	virtual void sort_part(vector<int> &nums, int k) {
		int max = 0;
		vector<int> temp;
		for (int i = 0; i<nums.size(); i++)
		{
			temp.push_back(nums[i]);		//nums ���纻 ����. 

			if (getValue(nums[i],k)>max)
				max = getValue(nums[i],k);
		}
		
		int *indexes = new int[max + 1];	//�׳� ���� ��. max=2�� 0 1 2 �޾ƾ� �ϴϱ� +1
		int *iindexes = new int[max + 1];	//�����ؼ� ���ϱ�. (�ε���)

		for (int i = 0; i<max + 1; i++)
			indexes[i] = 0;
		for (int i = 0; i<nums.size(); i++)
			indexes[getValue(nums[i],k)]++;			//�� ������ ���� ����
		for (int i = 0; i<max + 1; i++)
			if (i == 0)
				iindexes[i] = 0;
			else
				iindexes[i] = iindexes[i - 1] + indexes[i - 1];

		for (int i = 0; i < temp.size(); i++)
		{
			nums[iindexes[getValue(temp[i], k)]] = temp[i];	//nums�� overwrite��.
			iindexes[getValue(temp[i],k)]++;
		}
		delete[] indexes;	//allocation ���� �� ����.
		delete[] iindexes;
	}

	virtual void sort(vector<int> &nums) {
		sort_part(nums, k);
	}
};

class Radix :public Counting {
public:

	virtual int getValue(int n, int k)
	{
		return(n >> k) % 2;
	}
	virtual void sort(vector<int> &nums) {
		for (int k = 0; k < 32; k++)	//32bit
			sort(nums, k); 		//Devide&Conquer
	}
	void sort(vector<int> &nums, int k) {	//k��° bit�� ���� counting sort 
		sort_part(nums, k);
	}
};

int main()
{
	int type, max, count, d;
	vector<int> nums;
	Sorting *sort;

	cout << "Select you algorithm: 1.Counting Sort, 2.Radix Sort" << endl;
	cin >> type;
	cout << "Give the maximum integer to be sorted:" << endl;
	cin >> max;
	cout << "Give the number of integers to be sorted:" << endl;
	cin >> count;

	srand(time(NULL));

	for (int i = 0; i<count; i++)
	{
		d = rand() % max + 1;
		nums.push_back(d);
	}

	if (type == 1)
		sort = new Counting;
	else
		sort = new Radix;

	cout << "Initial Values" << endl;
	Sorting::print(nums);
	sort->sort(nums);
	cout << "Sorted Values" << endl;
	Sorting::print(nums);

	system("pause");
}

//Radix�� sort�� Counting�� sort�� ���� ����.
//2�� �ڵ����� ���� ���? ���  => ����  virtual function�� member variable�� Ȱ��. 2
