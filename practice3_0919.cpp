#include <iostream>
#include <vector>
#include <string>
using namespace std;
string auto_choice;

string choose(int val)
{
	if (val % 3 == 0)
		return "rock";
	else if (val % 3 == 1)
		return "paper";
	else //if (val % 3 == 2)
		return "scissors";
}
string what_result(string my_choice, int val)
{
	if (my_choice == auto_choice)
		return "draw";
	else {
		switch ((val % 3)) {
			case 0: //��ǻ�Ͱ� rock�� �´�.
				if (my_choice == "scissors")
					return "you lose";
				else if(my_choice == "paper")
					return "you win";
				else
					return "error, �߸��� �� �Է�";
			case 1: //��ǻ�Ͱ� paper�� �´�.
				if (my_choice == "rock")
					return "you lose";
				else if (my_choice == "scissors")
					return "you win";
				else
					return "error, �߸��� �� �Է�";
			case 2:	//��ǻ�Ͱ� scissors�� �´�.
				if (my_choice == "rock")
					return "you win";
				else if(my_choice == "paper")
					return "you lose";
				else
					return "error, �߸��� �� �Է�";



		}

	}
}
int main() {
	string my_choice;
	int i = 1;
	while (i < 100)
	{
		cout << "Enter Your Choice : ";
		cin >> my_choice;
		auto_choice = choose(i);
		if (my_choice == "exit")
			break;
		cout << "computer : " << auto_choice << ", user : " 
		<< my_choice << "-----���: " << what_result(my_choice,i) << "\n\n";
		i = i^2;
		i++;
	}
	
}
