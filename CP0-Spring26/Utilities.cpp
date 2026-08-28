#include "Utilities.h"
#include <string>
#include <iostream>
#include <iomanip>

std::string toLower(std::string text)
{
    for (char& c : text)
        c = tolower(c);

    return text;
}

void displayMenu()
{
    std::cout << "\n1. Display all movies" << std::endl;
    std::cout << "2. Search by title" << std::endl;
    std::cout << "3. Search by genre" << std::endl;
    std::cout << "4. Average rating" << std::endl;
    std::cout << "5. Number of movies" << std::endl;
    std::cout << "0. Exit" << std::endl;
    std::cout << "Enter choice: ";
}