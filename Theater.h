//I affirm that all code given below was written solely by me, Daniel Tucker, and that any help I received adhered to the rules stated for this exam.
#pragma once
#include "Movie.h"
#include <string>

class Theater
{
private:
	string name;
	string phone;
	Movie showing1;
	double popcorn = 5.5;
	double coke = 3.25;
	string movie2 = "Ghostbusters";
	string genre2 = "Action";
	int showtime2 = 15;
public:
	string GetName()
	{
		return name;
	};
	string GetPhone()
	{
		return phone;
	};
	void AddMovie(string a, string b, int c)
	{
		Movie(a, b, c);
	};
	int GenreShowtimes(string a)
	{
		if (a == "Horror")
		{

		}
		else if (a == "Comedy")
		{

		}
		else if (a == "Action")
		{

		}
		else if (a == "Documentary")
		{

		}
		else
			cout << "Please enter a valid movie genre: Horror, Comedy, Action, or Documentary" << endl;
	};
	string GetMovieForHour(int a)
	{
		if (a == 5 || a == 17)
		{
			return FixThis;
		}
		else if (a == 6 || a == 18)
		{
			return placeholder;
		}
		else if (a == 7 || a == 19)
		{
			return something;
		}
		else
			cout << "Please enter a valid showtime: 5 or 17, 6 or 18, 7 or 19" << endl;
	}
	double GetPopcorn()
	{
		return popcorn;
	};
	double GetCoke()
	{
		return coke;
	};
	Theater()
	{
		string name = "Garland";
		string phone = "867-5309";
		popcorn;
		coke;
	};
	Theater(string a, string b)
	{
		name = a;
		phone = b;
		showing1 = Movie();
		popcorn;
		coke;
	};
	~Theater()
	{
	
	};

};

