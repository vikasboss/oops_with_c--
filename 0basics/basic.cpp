#include <iostream>
#include <string>
using namespace std;

class Movie
{
private:
    string title;
    int year;
    string genre;

public:
    Movie()
    {
        title = "";
        year = -1;
        genre = "";
    }

    Movie(string t, int y, string g)
    {
        title = t;
        year = y;
        genre = g;
    }
};

int main()
{
    // Creating an instance of the Movie class using the parameterized constructor
    Movie movie1("Inception", 2010, "Sci-Fi");

    // Creating an instance of the Movie class using the default constructor
    Movie movie2;

    return 0;
}
