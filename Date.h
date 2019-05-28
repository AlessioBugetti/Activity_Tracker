//
// Created by alessio on 28/05/19.
//

#ifndef ACTIVITY_TRACKER_DATE_H
#define ACTIVITY_TRACKER_DATE_H


enum class Months {
    Gennaio, Febbraio, Marzo, Aprile, Maggio, Giugno, Luglio, Agosto, Settembre, Ottobre, Novembre, Dicembre
};

class Date {
public:
    Date(int y, Months m, int d);

    Months getMonth() const;

    int getDay() const;

    int getYear() const;

private:
    int day, year;
    Months month;
};


#endif //ACTIVITY_TRACKER_DATE_H
