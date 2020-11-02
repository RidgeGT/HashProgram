//======================================================================================================
// Ridge Tejuco
// CSIT 832
// Assignment # 4: Hash Table
//======================================================================================================
#include <iostream>
#include <string>
#include <fstream>
#include "Hash.h"
using namespace std;


int main()
{
	Hash Table;
	Student temp[25];
	fstream file;
	string nameFound;
	string idFind;
	file.open("students.txt",ios::in);
	if(file.is_open())
	{
		for(int x = 0; x < 25; x++)
		{

			getline(file,temp[x].id,' ');
			getline(file,temp[x].name);
			Table.insert(temp[x].id,temp[x].name);
			//cout << temp[x].id << " " <<temp[x].name << endl;  // test open and read file
		}
		file.close();
	}
	else
	{
		cout <<"Unable to open file students.txt\n";
	}
	char choice;
	while(choice != 'B' && choice != 'b')
	{
		cout << "A. Find Student\n";
		cout << "B. Exit\n";
		cout << "Select:";
		cin >> choice;
		switch(choice)
		{
			case 'A':
			case 'a':
				cout << "Enter 4 digit ID:";
				cin >> idFind;
				nameFound = Table.retrieve(idFind);
				if(nameFound != "")
				{
					cout << "ID: " << idFind << " Name: " << nameFound << endl;
				}
				else
				{
					cout << "No student has that ID\n";
				}
				break;
			default:
				break;
		}
	}
	return 0;
}