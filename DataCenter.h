#ifndef DATACENTER_H
#define DATACENTER_H

#include "Film.h"
#include <string>

using namespace std;

class DataCenter{
    Film** films;
    int film_num;
    Film* film_by_name(const string &name);
    void update_ratings();
    void print_all();
    void sort();
    void add_film(const Film &film);
};

#endif // DATACENTER_H
