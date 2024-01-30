#ifndef CINEMASYSTEM_HALL_H
#define CINEMASYSTEM_HALL_H

#include <string>
#include <vector>
#include "Screening.h"

using namespace std;

class Hall {
public:
    Hall(string, int);
    Hall(string, int, vector<Screening>);
    void setScreeningList(vector<Screening>);
    vector<Screening> getScreeningList();
    void addScreening(Screening);
    void setName(string);
    void setSeats(int);
    void print();
private:
    string name;
    int seats;
    vector<Screening> screeningList;
};

#endif //CINEMASYSTEM_HALL_H
