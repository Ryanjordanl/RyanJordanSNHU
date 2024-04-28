/*
Ryan Jordan
project 3
04-20-24
*/
#include <iostream>
#include <vector>
#include <string>
#include <fstream>

Inventory Grocery; //class

using namespace std;

 int main() {
	 
	 	int choice;
				do {
			cout << "1. Search for an item" << endl;
			cout << "2. Display all frequencies" << endl;
			cout << "3. Print historgram" << endl;
			cout << "4. Exit Application" << endl;
			cin >> choice;

			switch (choice) {
			case 1:
				cout<<"Search for an item"<<endl; //search for an item
				break;
			case 2:
				cout<<"display all frequencies"<<endl; // display all frequencies
				break;
			case 3:
				cout<<"print histogram"<<endl; // print historgram
				break;
			case 4:
				cout << "4. Exit Application" << endl; //exit aplication
				break;
			}
		} while (choice !=4);

		{
		}			
	return 0;
		
 }
