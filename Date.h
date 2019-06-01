//
// Created by alessio on 28/05/19.
//

#ifndef ACTIVITY_TRACKER_DATE_H
#define ACTIVITY_TRACKER_DATE_H

#include <string>

enum class Months {
    Gennaio, Febbraio, Marzo, Aprile, Maggio, Giugno, Luglio, Agosto, Settembre, Ottobre, Novembre, Dicembre
};

class Date {
public:
    Date(int y, Months m, int d);

    Months getMonth() const;

    std::string getMonthString() const;

    int getDay() const;

    int getYear() const;

    void setDay(const int &d);

    void setYear(const int &y);

    void setMonth(const Months &m);

private:
    int day, year;
    Months month;
};

class DateComparator {
public:
    bool operator()(const Date &first, const Date &second) const;
};

#endif //ACTIVITY_TRACKER_DATE_H
