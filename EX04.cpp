﻿// EX04.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>

// 14/20

using namespace std;

int main()
{
	
	cout << "How many numbers will be in the array? ";
	int count;
	cin >> count;
	int* arrSize = NULL;
	arrSize = new int[count];
	for (int i = 0; i < count; i++)
	{
		cout << "Please enter the next number: ";
		cin >> arrSize[i];
	}
	
	//PT -- now need to calculate the average, then the number of items larger than the average.
	// -6
	/*
	int sum = 0;
	for (int i=0; i<count; i++) {
		sum += count;
	}
	double avg = static_cast<double>(sum)/count;
	
	int above = 0;
	for (int i=0; i<count; i++) {
		if (arrSize[i] > avg)
			above++;
	}
	cout << "average: " << avg << ", number above: " << above << endl;
	*/
	
	delete[] arrSize;
	arrSize = NULL;
    return 0;
}
