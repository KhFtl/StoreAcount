#pragma once
#include"UI.h"
#include"StoreData.h"
#include<vector>
using namespace std;
vector<Store> stores;
void  EnterFromKeyboard(int count);
void Print();
void Start()
{
	int command=0;
	while (command != 5)
	{
		command = Menu();
		if (command == 1) 
		{
			int count = 0;
			cout << "Enter count of products: "; cin >> count;
			EnterFromKeyboard(count);
		}
		if (command == 3)
		{
			Print();
		}
	}
	cout << "Bye!!!"<<endl;
}
//Введення даних про товар з клавіатури
void EnterFromKeyboard(int count)
{
	cout << "Enter " << count << " elements" << endl;
	Store store;
	for (int i = 0; i < count; i++)
	{
		cout << "Enter Name of product: "; cin >> store.Name;
		cout << "Enter Count of product: "; cin >> store.Count;
		cout << "Enter Price of product: "; cin >> store.Price;
		stores.push_back(store);
	}
}
//Виведення масиву товарів на екран
void Print()
{
	if (stores.size() == 0)
	{
		cout << "No products :( please select 1 and enter data" << endl;
		return;
	}
	cout << "----------Count " << stores.size() << "----------------" << endl;
	for (int i = 0; i < stores.size(); i++)
	{
		cout << stores[i].Name << "\t" << stores[i].Count << "\t" << stores[i].Price << endl;
	}
	cout << "-------------------------------------------------------" << endl;
}