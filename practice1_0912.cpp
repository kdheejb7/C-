//1611796 IT공학과 김도희
 
#include <iostream>
using namespace std;

int main(){
	int val1 = 0;
	int val2 = 0;
	double ratio;
	cout << "첫번째 숫자를 입력하세요:";
	cin >> val1;
	cout << "두번째 숫자를 입력하세요:";
	cin >> val2;
	
	cout << "입력된 값 : " << val1 << ", " << val2 << "\n"; 
	
	if (val1>val2){
		cout << "작은 수 : "<<val2 << ", 큰 수 :" << val1 << "\n";  
		cout << "두 수의 차 : "<< val1-val2 << "\n";
	}
	else if (val2>val1){
		cout << "작은 수 : "<<val1 << ", 큰 수 :" << val2 << "\n";
		cout << "두 수의 차 : "<< val2-val1 << "\n"; 
	}
	else{
		cout << "두 수가 같습니다.\n";
		cout << "두 수의 차는 0 입니다.\n";
	}
	cout << "두 수의 합 : "<< val1+val2 << "\n";
	cout << "두 수의 곱 : "<< val1*val2 << "\n"; 
	ratio = (float) val1/val2;
	cout << "두 수의 비율 : "<< ratio << "\n";
	
}
