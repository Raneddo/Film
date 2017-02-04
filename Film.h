#ifndef FILM_H
#define FILM_H

#include <string>
#include <vector>

using namespace std;

class Film{
    short int year;
    float rating;
    string produser;
    vector<string> actors;
public:
    const string name;
    Film();
    Film(string name, string produser);
    Film(const Film& film);
    void show();
    void move(int position);
    void update_rating();
    void play();
    void add_actor(const string &name);
};

#endif // FILM_H
