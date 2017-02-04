#include "DataCenter.h"

using namespace std;

Film* DataCenter::film_by_name(const string &name){
    for(int i = 0; i < film_num; i++)
    if(films[i]->name == name){
        return films[i];
    return NULL;
}

DataCenter::DataCenter(){

}
