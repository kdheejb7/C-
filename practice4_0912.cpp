//1611976 IT���а� �赵��
#include <iostream>
using namespace std;

int main(){
	cout << "���� ���縵�� ���ڷ� �ٲ��ִ� ���α׷� \n";
	
	string spell;
	cout << "0~4 ���� ������ ���� ���縵�� �Է��ϼ��� : ";
	cin >> spell;
	cout << "�Է��� ���ڴ� " << spell << "�Դϴ�.\n";
	
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

//else if�� ���� ��� ��� �ϳ��� ����ȴٴ� ���� ����ϰ� ������ְ� �ִ� ��.
//else �� ó���Ϸ��� ������ else if �� ���.
 
