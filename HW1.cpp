// HW1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <ctime>
#include <string>

using namespace std;

void ex02();
void ex03();
void ex04();
void ex05();
int doubleInt(int a);
int add(int a, int b);
void passByReference(int &a);
void arraySize(int a[], int b);
void arraySearch(int a[], int b);

int refer = 15; //used in passByReference function later
int const SIZE = 5;

int main()
{
	ex02();
	ex03();
	ex04();
	ex05();
    return 0;
}

void ex02()
{
	bool hasPassedTest = 0;
	int x, y;
	srand(time(NULL));
	x = rand() % 101;
	y = rand() % 101;
	if (x > y)
		cout << "X is greater than Y";
	else if (x == y)
		cout << "X is equal to Y";
	else
		cout << "X is less than Y" << endl;
	cout << "\nEnter a number of shares: ";
	int numberOfShares;
	cin >> numberOfShares;
	if (numberOfShares > 100)
		cout << "numberOfShares is greater than 100" << endl;
	int box = 0, book = 0;
	cout << "Please enter the width of a box: ";
	cin >> box;
	cout << "Please enter the width of a book: ";
	cin >> book;
	if (box % book == 0)
		cout << "The box width is divisible by the book width." << endl;
	else
		cout << "The box width is not divisible by the book width." << endl;
	int shelfLife;
	cout << "The shelf life for a box of chocolates is (in days): ";
	cin >> shelfLife;
	int outsideTemp;
	cout << "\nThe outside temperature is: ";
	cin >> outsideTemp;
	if (outsideTemp >= 90)
	{
		shelfLife = shelfLife - 4;
		cout << "\nBecause of the temperature outside, your chocolates will last " << shelfLife << " now, instead of " << shelfLife + 4 << endl;
	}
}

void ex03()
{
	double area, side, diag;
	cout << "Think of a square. The area of this square is: ";
	cin >> area;
	side = sqrt(area);
	diag = side * sqrt(2);
	cout << "The diagonal for your square is " << diag << endl;
	char yn;
	cout << "Enter a y for yes or an n for no: ";
	int p = 1;
	while (p = 1)
	{
		cin >> yn;
		if (yn == 'y')
		{
			cout << "yes" << endl;
			break;
		}
		else if (yn == 'n')
		{
			cout << "no" << endl;
			break;
		}
	} 
	char tab = '\t';
	string mailingAddress;
	cout << "Your mailing address is: ";
	cin >> mailingAddress;
	getline(cin, mailingAddress);
	cout << mailingAddress << endl;
}

void ex04()
{
	int j = 0;
	while (j < 1 || j > 10)
	{
		cout << "Enter a value between 1 and 10. j = ";
		cin >> j;
	}
	int cubeSum = 0, cube = 0;
	for (int h = 0; h <= j; h++)
	{
		cube = h * h * h;
		cubeSum = cubeSum + cube;
		if (h == j)
		{
			cout << cubeSum << endl;
			break;
		}
	}
	int k = 0;
	do
	{
		cout << "* ";
		k++;
	} while (k < j);
	for (int e = 0; e <= 40; e = e + 2)
		cout << e << " ";
	cout << "\n" << doubleInt(j) << endl;
	cout << add(rand(), rand()) << endl;
}

int doubleInt(int a)
{
	a = a * 2;
	return a;
}

int add(int a, int b)
{
	int c = 0;
	c = a + b;
	cout << "The sum of " << a << " and " << b << " is ";
	return c;
}

void passByReference(int &a)
{
	a++;
	cout << "I changed " << a - 1 << " to " << a;
}

void ex05()
{
	int k[SIZE];
	for (int j = 0; j <= 4; j++)
	{
		cout << "Enter an integer: ";
		cin >> k[j];
		if (j == 4)
		{
			int sum = k[0] + k[1] + k[2] + k[3] + k[4];
			int product = k[0] * k[1] * k[2] * k[3] * k[4];
			cout << "The sum of the integers you entered is " << sum << endl;
			cout << "The product of the integers you entered is " << product << endl;
		}
	}
	arraySize(k, SIZE);
	arraySearch(k, SIZE);
}

void arraySize(int a[], int b)
{
	for (int j = 0; j < b; j++)
	{
		cout << a[j] << " ";
	}
}

void arraySearch(int a[], int b)
{
	int search = 0;
	cout << "What value do you want to look for in the array? ";
	cin >> search;
	bool foundValue[1];
	foundValue[0] = 1;
	for (int j = 0; j < b; j++)
	{
		if (search == a[j])
		{
			cout << "The value you searched for was located at k[" << j << "]" << endl;
			foundValue[0] = 0;
			break;
		}
	}
	if (foundValue[0] == 1)
		cout << "The value could not be found in the array." << endl;
}