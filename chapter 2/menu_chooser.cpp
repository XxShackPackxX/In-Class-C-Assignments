// Menu Chooser
// Demonstrates the switch statement

#include<iostream>
using namespace std;

int main()
{
	cout << "Difficulty Levels\n\n";
	cout << "1 - Easy\n";
	cout << "2 - Normal\n";
	cout << "3 - Hard\n\n";
	
	int choice;
	cout << "Choice: ";
	cin >> choice;
	
	switch (choice)
	{
	case 1:
		cout << "Easy mode? Only wimps play on Easy mode.\n";
		break;
		
	case 2:
		cout << "You picked Normal, What a normie.\n";
		break;
		
	case 4:
		cout << "You Like to party dont ya?.\n";
		break;
		
	default:
		cout << "You made an illegal choice.\n";
				
	}
return 0;	
}
