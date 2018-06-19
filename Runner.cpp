#include "stdafx.h"
#include "Runner.h"


Runner::Runner()
{
	first_name = "John";
	last_name = "Smith";
	pace = 720;
}

Runner::Runner(string n1, string n2, int pace)
{
	first_name = n1;
	last_name = n2;
	this->pace = pace;
}

string Runner::getFName()
{
	return first_name;
}

string Runner::getLName()
{
	return last_name;
}

int Runner::getPace()
{
	return pace;
}

void Runner::setFName(string name)
{
	first_name = name;
}

void Runner::setLName(string name)
{
	last_name = name;
}

void Runner::setPace(int time)
{
	pace = time;
}

Runner::~Runner()
{
	first_name = "";
	last_name = "";
	pace = -1;
}
