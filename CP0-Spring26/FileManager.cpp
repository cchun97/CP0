#include "FileManager.h"
#include "MovieCollection.h"

#include <string>


    bool FileManager::loadMovies(std::string filename, MovieCollection& collection)
    {
        std::ifstream inputFile(filename);

        if (!inputFile)
            return false;

        std::string line;

        while (getline(inputFile, line))
        {
            if (line.empty())
                continue;

            std::stringstream ss(line);

            std::string title;
            std::string genre;
            std::string yearString;
            std::string ratingString;

            std::getline(ss, title, ',');
            std::getline(ss, genre, ',');
            std::getline(ss, yearString, ',');
            std::getline(ss, ratingString);

            int year = std::stoi(yearString);
            double rating = std::stod(ratingString);

            Movie movie(title, genre, year, rating);
            collection.addMovie(movie);
        }

        inputFile.close();
        return true;
    }