#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>

#include "Movie.h"
#include "MovieCollection.h"
#include "FileManager.h"
#include "Utilities.h"
   
Movie::Movie()

{
    title = "";
    genre = "";
    year = 0;
    rating = 0.0;
}

Movie::Movie(std::string t, std::string g, int y, double r)
{
    title = t;
    genre = g;
    year = y;
    rating = r;
}

    std::string Movie::getTitle() const
    {
        return title;
    }

    std::string Movie::getGenre() const
    {
        return genre;
    }

    int Movie::getYear() const
    {
        return year;
    }

    double Movie::getRating() const
    {
        return rating;
    }

    void Movie::display() const
    {
        std::cout << std::left
             << std::setw(30) << title
             << std::setw(15) << genre
             << std::setw(8) << year
             << std::fixed << std::setprecision(1)
             << rating << std::endl;
    }
