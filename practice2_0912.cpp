//1611796 IT공학과 김도희
 
#include <iostream>
using namespace std;

int main(){
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int max = 0;
	int mid = 0;
	int min = 0;
	cout << "세 개의 숫자를 입력하세요 : ";
	cin >> val1 >> val2 >> val3;
	cout << "입력한 변수 : " << val1 << ", " << val2 << ", " << val3 << "\n";
	
	if (val1 >= val2 && val1 >= val3){	//cf. & 하나 : bit연산. bit끼리 
		max = val1;
		if (val2>=val3){
			mid = val2;
			min = val3;
		}
		else{
			mid = val3;
			min = val2;
		}
	}
	if (val2 >= val1 && val2 >= val3){
		max = val2;
		if (val1>=val3){
			mid = val1;
			min = val3;
		}
		else {
			mid = val3;
			min = val1;
		}
	}
	if (val3 >= val1 && val3>= val2 ){
		max = val3;
		if (val1>=val2){
			mid = val1;
			min = val2;
		}
		else {
			mid = val2;
			min = val1;
		}
	} 
	cout << " 크기 순 정렬: " << min << ", " << mid << ", " << max << "\n";
} 

