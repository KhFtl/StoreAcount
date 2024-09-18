#pragma once
#include<iostream>
using namespace std;
int Menu()
{
	int command = 0;
	cout << "----------Menu------------------" << endl;
	cout << "1. Enter data from keyboard" << endl;
	cout << "2. Search by product" << endl;
	cout << "3. Print all products" << endl;
	cout << "4. Not allowed" << endl;
	cout << "5. Exit" << endl;
	cin >> command;
	return command;
}