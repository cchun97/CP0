#pragma once

#include "Movie.h"
#include <vector>
#include <string>

class MovieCollection
{
private:
    std::vector<Movie> movies;

public:
    void addMovie(const Movie& movie);

    void displayAllMovies() const;

    void searchByTitle(std::string title) const;
    void displayByGenre(std::string genre) const;

    double calculateAverageRating() const;

    int getNumberOfMovies() const;
};