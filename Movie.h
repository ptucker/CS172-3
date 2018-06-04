//I affirm that all code given below was written solely by me, Daniel Tucker, and that any help I received adhered to the rules stated for this exam.
#pragma once
#include <string>

class Movie
{
private:
	string title;
	string genre;
	int showtime;
public:
	string GetTitle(Movie a)
	{
		return a.title;
	};
	string GetGenre(Movie a)
	{
		return a.genre;
	};
	int GetShowtime(Movie a)
	{
		return a.showtime;
	};
	Movie() //no-arg constructor
	{
		string title = "Aladdin";
		string genre = "Comedy";
		int showtime = 17;
	};
	Movie(string a, string b, int c)
	{
		string title = a;
		string genre = b;
		int showtime = c;
	};
	~Movie()
	{
	
	};
};

