#ifndef CINEMASYSTEM_SCREENING_H
#define CINEMASYSTEM_SCREENING_H

#include <string>
using namespace std;

class Screening {
public:
    Screening(string, int);
    void setMovieName(string);
    void setSoldTickets(int);
    string getMovieName();
    int getSoldTickets();
    void print();
private:
    string movieName;
    int soldTickets;
};

#endif //CINEMASYSTEM_SCREENING_H