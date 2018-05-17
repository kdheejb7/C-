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
			case 0: //컴퓨터가 rock을 냈다.
				if (my_choice == "scissors")
					return "you lose";
				else if(my_choice == "paper")
					return "you win";
				else
					return "error, 잘못된 값 입력";
			case 1: //컴퓨터가 paper를 냈다.
				if (my_choice == "rock")
					return "you lose";
				else if (my_choice == "scissors")
					return "you win";
				else
					return "error, 잘못된 값 입력";
			case 2:	//컴퓨터가 scissors를 냈다.
				if (my_choice == "rock")
					return "you win";
				else if(my_choice == "paper")
					return "you lose";
				else
					return "error, 잘못된 값 입력";



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
		<< my_choice << "-----결과: " << what_result(my_choice,i) << "\n\n";
		i = i^2;
		i++;
	}
	
}
