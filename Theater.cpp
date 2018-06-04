//I affirm that all code given below was written solely by me, Daniel Tucker, and that any help I received adhered to the rules stated for this exam.
#include "stdafx.h"
#include "Theater.h"
#include "Movie.h"
#include <string>
#include <iostream>

using namespace std;

Theater(string Name, string Phone); //The name for this theater 
void AddMovie(Movie& Movie); //Add a movie at a specific time 
string GetMovieForHour(int hour); // What movie is shown at the given hour? 
								  // Return "" if none are upcoming 
int GetShowTimeForGenre(string Genre); //When will the movie of the given genre be shown? 
									   // Return -1 if none exist 
int GetPopcornPrice(); //Make up a cost in dollars for popcorn 
int GetCokePrice(); //Make up a cost on Coke 

Theater::Theater()
{
	
}


Theater::~Theater()
{
}
