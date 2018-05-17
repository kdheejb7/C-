//1611796 IT공학과 김도희
//짝수, 홀수 판단 프로그램  
#include <iostream>
using namespace std;

int main(){
	int val = 0;
	cout << "판단할 숫자를 입력하세요 : ";
	cin >> val;
	cout << "입력한 숫자 : " << val << "\n";

	if (val%2==0){
		cout << val << " 는 짝수 입니다.\n";
	} 
	else{
		cout << val << " 는 홀수 입니다.\n";
	}
	
} 

//0은 false 나머지는 true

 
