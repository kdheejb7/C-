//1611796 IT���а� �赵��
 
#include <iostream>
using namespace std;

int main(){
	int val1 = 0;
	int val2 = 0;
	int val3 = 0;
	int max = 0;
	int mid = 0;
	int min = 0;
	cout << "�� ���� ���ڸ� �Է��ϼ��� : ";
	cin >> val1 >> val2 >> val3;
	cout << "�Է��� ���� : " << val1 << ", " << val2 << ", " << val3 << "\n";
	
	if (val1 >= val2 && val1 >= val3){	//cf. & �ϳ� : bit����. bit���� 
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
	cout << " ũ�� �� ����: " << min << ", " << mid << ", " << max << "\n";
} 

