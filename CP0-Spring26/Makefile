all: movies

movies: main.cpp
	g++ -std=c++17 -Wall -Wextra main.cpp Movie.cpp FileManager.cpp Utilities.cpp MovieCollection.cpp -o movies

clean:
	rm -f movies
