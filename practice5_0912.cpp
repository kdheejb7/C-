//1611796 IT공학과 김도희
#include <iostream>
using namespace std;

int main(){
	char operation = '0';
	double val1 = 0;
	double val2 = 0;
	double result = 0;
	cout << "연산자와 피연산자 2개를 입력하세요 : ";
	cin >> operation >> val1 >> val2;
	
	if (operation == '+'){
		result = val1 + val2;
	}
	else if (operation == '-'){
		result = val1 - val2;
	}
	else if (operation == '*'){
		result = val1 * val2;
	}
	else if (operation == '/'){
		result = val1 / val2;
	}
	else{
		cout << "잘못된 연산자를 입력하셨습니다.\n"; 
	}
	
	cout << "결과값 : " << result << "\n"; 
} 
