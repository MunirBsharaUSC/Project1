//
// Created by Munir Bshara on 4/4/23.
//

#include "date.h"

Date::Date() {}

Date::~Date() {}

Date::Date(string date):date(date){}

bool Date::operator==(const Date& rhs){
    // TODO: Complete this method!
    // Note: you should check first name, last name and birthday between two persons
    // refer to bool Date::operator==(const Date& rhs)
    return date==rhs.date;
}

string Date::getMonth(string month){
    int monthInInt = stoi(month);
    switch (monthInInt) {
        case 1:
            month = "January";
            break;
        case 2:
            month = "February";
            break;
        case 3:
            month = "March";
            break;
        case 4:
            month = "April";
            break;
        case 5:
            month = "May";
            break;
        case 6:
            month = "June";
            break;
        case 7:
            month = "July";
            break;
        case 8:
            month = "August";
            break;
        case 9:
            month = "September";
            break;
        case 10:
            month = "October";
            break;
        case 11:
            month = "November";
            break;
        case 12:
            month = "December";
            break;
        default:
            month = "INVALID MONTH";
            break;
    }
    return month;
}

string Date::getDate() {
    return date;
}

void Date::print_date(string format) {
    if(format == "Month D, YYYY"){
        int counter=0;
        string temp;
        int slashCounter=0;
        while(date[counter]){
            if(date[counter]=='/'){
                if(slashCounter==0){
                    cout << getMonth(temp) << " ";
                    slashCounter++;
                    temp="";
                } else if(slashCounter==1){

                    cout << temp << ", ";
                    temp="";
                    slashCounter++;
                }
            } else{
                temp=temp + date[counter];
            }
            counter++;
        }
        cout << temp << endl;
    }
    else{
        cout << date << endl;
    }
}


