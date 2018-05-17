#include <iostream>
#include <vector>
using namespace std;

int isPrime(int value)
{
	if (value == 1)
		return 1;
	else if(value == 2)
		return 0;
	else {
		for(int j=2; j*j<value; j++)
			if(value%j==0)	
				return 1;
	}
	return 0;
}

int main(){
	vector<int> is_prime_number;
	vector<int> prime_number;
	int val = 0;
	for (int i=1; i<=100; i++)
	{
		val = i;
		is_prime_number.push_back(val);
	}	//일단 prime_number에 1~100까지 입력.
	 

	for (int i=0; i<100;i++)
		if(isPrime(is_prime_number[i])==0)
			prime_number.push_back(is_prime_number[i]);

	cout <<"1~100 사이의 소수 목록 \n";
	for(int i=0; i<prime_number.size();i++)
		cout << prime_number[i] << " ";	
}
