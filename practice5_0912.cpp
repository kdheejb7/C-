//1611796 IT���а� �赵��
#include <iostream>
using namespace std;

int main(){
	char operation = '0';
	double val1 = 0;
	double val2 = 0;
	double result = 0;
	cout << "�����ڿ� �ǿ����� 2���� �Է��ϼ��� : ";
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
		cout << "�߸��� �����ڸ� �Է��ϼ̽��ϴ�.\n"; 
	}
	
	cout << "����� : " << result << "\n"; 
} 
