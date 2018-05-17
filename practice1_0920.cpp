#include <iostream>
#include <vector>
using namespace std;

double find_total(vector<double> distances)
{
	double sum = 0;
	for (double i : distances)
		sum += i;
	return sum;
}

double find_smallest(vector<double> distances)
{
	double small = 100000000000;
	for (int i = 0; i<distances.size(); i++)
	{
		if (distances[i] < small)
			small = distances[i];
	}
	return small;
}
double find_greatest(vector<double> distances)
{
	double great = 0;
	for (int i=0; i<distances.size(); i++)
	{
		if (distances[i] > great)
			great = distances[i];
	}
	return great;
}
double find_mean(vector<double> distances)
{
	double sum = find_total(distances);
	double mean = (double)sum / distances.size();
	return mean;
}
int main() {
	double total = 0;
	double smallest = 0;
	double greatest = 0;
	double mean = 0;

	vector <double> distances;
	cout << " �� ���� ������ �Ÿ����� �Է��ϼ��� :";
	double temp;
	while (cin >> temp)
	{
		distances.push_back(temp);
	}
	smallest = find_smallest(distances);
	greatest = find_greatest(distances);
	total = find_total(distances);
	mean = find_mean(distances);

	cout << "���� ª�� �Ÿ� : " << smallest << "km" << endl;
	cout << "���� �� �Ÿ� : " << greatest << "km" << endl;
	cout << "�Ÿ��� �� : " << total << "km" << endl;
	cout << "��� �Ÿ� : " << mean << "km" << endl;
	
	system("pause");
}
