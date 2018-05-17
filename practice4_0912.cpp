//1611976 IT공학과 김도희
#include <iostream>
using namespace std;

int main(){
	cout << "영어 스펠링을 숫자로 바꿔주는 프로그램 \n";
	
	string spell;
	cout << "0~4 사이 숫자의 영어 스펠링을 입력하세요 : ";
	cin >> spell;
	cout << "입력한 문자는 " << spell << "입니다.\n";
	
	if (spell == "zero"){
		cout << spell << "-> 0\n";
	}
	else if(spell == "one"){
		cout << spell << "-> 1\n";
	}
	else if(spell == "two"){
		cout << spell << "-> 2\n";
	}
	else if(spell == "three"){
		cout << spell << "-> 3\n";
	}
	else if (spell == "four"){
		cout << spell << "-> 4\n";
	}
	else{
		cout << "not a number i know!!\n";
	}
} 

//else if를 쓰는 경우 어느 하나만 수행된다는 것을 명백하게 얘기해주고 있는 것.
//else 를 처리하려고 더욱이 else if 를 썼다.
 
