//1611796 IT���а� �赵��
 
#include <iostream>
using namespace std;

int main(){
	int val1 = 0;
	int val2 = 0;
	double ratio;
	cout << "ù��° ���ڸ� �Է��ϼ���:";
	cin >> val1;
	cout << "�ι�° ���ڸ� �Է��ϼ���:";
	cin >> val2;
	
	cout << "�Էµ� �� : " << val1 << ", " << val2 << "\n"; 
	
	if (val1>val2){
		cout << "���� �� : "<<val2 << ", ū �� :" << val1 << "\n";  
		cout << "�� ���� �� : "<< val1-val2 << "\n";
	}
	else if (val2>val1){
		cout << "���� �� : "<<val1 << ", ū �� :" << val2 << "\n";
		cout << "�� ���� �� : "<< val2-val1 << "\n"; 
	}
	else{
		cout << "�� ���� �����ϴ�.\n";
		cout << "�� ���� ���� 0 �Դϴ�.\n";
	}
	cout << "�� ���� �� : "<< val1+val2 << "\n";
	cout << "�� ���� �� : "<< val1*val2 << "\n"; 
	ratio = (float) val1/val2;
	cout << "�� ���� ���� : "<< ratio << "\n";
	
}
