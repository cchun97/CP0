#pragma once

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <iomanip>
#include <cctype>

class Movie
{
private:
    std::string title;
    std::string genre;
    int year;
    double rating;

public:
    Movie();

    Movie(std::string t, std::string g, int y, double r);

    std::string getTitle() const;
    std::string getGenre() const;

    int getYear() const;

    double getRating() const;

    void display() const;
};
