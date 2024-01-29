#include <iostream>
#include "Hall.h"

Hall::Hall(string hallName, int capacity) {
    setName(hallName);
    setSeats(capacity);
}

Hall::Hall(string name, int seats, vector<Screening> screeningList)
    : screeningList(screeningList) {
    setName(name);
    setSeats(seats);
}

void Hall::addScreening(Screening obj) {
    this->screeningList.push_back(obj);
}

void Hall::print() {
    cout << " Hall is " << this->name << " with " << this->seats << " seats" << " ";
    for (int i = 0; i < this->screeningList.size(); i++) {
        this->screeningList.at(i).print();
    }
}

vector<Screening> Hall::getScreeningList() {
    return this->screeningList;
}

void Hall::setName(string name) {
    this->name = name;
}

void Hall::setSeats(int capacity) {
    this->seats = capacity;
}