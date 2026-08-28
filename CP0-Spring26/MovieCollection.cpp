#include "MovieCollection.h"
#include "Movie.h"
#include "FileManager.h"
#include "Utilities.h"

#include <vector>
#include <string>
#include <iostream>
#include <iomanip>


std::vector<Movie> movies;

    void MovieCollection::addMovie(const Movie& movie)
    {
        movies.push_back(movie);
    }

    void MovieCollection::displayAllMovies() const
    {
        if (movies.empty())
        {
            std::cout << "No movies found." << std::endl;
            return;
        }

        std::cout << std::left
             << std::setw(30) << "Title"
             << std::setw(15) << "Genre"
             << std::setw(8) << "Year"
             << "Rating" << std::endl;

        for (const Movie& movie : movies)
            movie.display();
    }

    void MovieCollection::searchByTitle(std::string title) const
    {
        for (const Movie& movie : movies)
        {
            if (toLower(movie.getTitle()) == toLower(title))
            {
                movie.display();
                return;
            }
        }

        std::cout << "Movie not found." << std::endl;
    }

    void MovieCollection::displayByGenre(std::string genre) const
    {
        bool found = false;

        for (const Movie& movie : movies)
        {
            if (toLower(movie.getGenre()) == toLower(genre))
            {
                movie.display();
                found = true;
            }
        }

        if (!found)
            std::cout << "No movies found." << std::endl;
    }

    double MovieCollection::calculateAverageRating() const
    {
        if (movies.empty())
            return 0.0;

        double total = 0.0;

        for (const Movie& movie : movies)
            total += movie.getRating();

        return total / movies.size();
    }

    int MovieCollection::getNumberOfMovies() const
    {
        return movies.size();
    }

