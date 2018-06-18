#include "stdafx.h"
#include "newAccount.h"


newAccount::newAccount()
{
	ID = 0;
	balance = 0;
	annualInterestRate = 0;
}

newAccount::newAccount(int ID, double balance, string name)
{
	this->ID = ID;
	this->balance = balance;
	this->name = name;
}

void newAccount::setID(int a)
{
	ID = a;
}

void newAccount::setBalance(double a)
{
	balance = a;
}

void newAccount::setInterest(double a)
{
	annualInterestRate = a;
}

void newAccount::setName(string a)
{
	name = a;
}

void newAccount::deposit(double a)
{
	balance += a;
}

void newAccount::withdraw(double a)
{
	balance -= a;
}

int newAccount::getID()
{
	return ID;
}

double newAccount::getBalance()
{
	return balance;
}

double newAccount::getInterest()
{
	return annualInterestRate;
}

string newAccount::getName()
{
	return name;
}

newAccount::~newAccount()
{
}
