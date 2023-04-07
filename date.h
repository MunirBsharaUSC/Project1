//
// Created by Munir Bshara on 4/4/23.
//

#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <string>

using namespace std;

class Date{

private:
    string date;

public:
    Date();
    ~Date();
    Date(string date);
    string getMonth(string month);
    string getDate();
    void print_date(string format = "Month D, YYYY");
    bool operator==(const Date& rhs);

};
#endif
