#pragma once

#include <string>
#include "MovieCollection.h"

class FileManager
{
public:
    static bool loadMovies(std::string filename, MovieCollection& collection);
};