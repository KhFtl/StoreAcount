#pragma once
#include<vector>
#include"StoreData.h"
#include<fstream>
using namespace std;

vector<Store> ReadFromFile(string fileName)
{
	ifstream input(fileName);
	vector<Store> stores;
	Store oneStore;
	while (!input.eof())
	{
		//getline(input, oneStore.Name); //Not working
		input >> oneStore.Name;
		input >> oneStore.Count;
		input >> oneStore.Price;
		stores.push_back(oneStore);
	}
	stores.pop_back();
	return stores;
}