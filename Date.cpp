//
// Created by alessio on 28/05/19.
//

#include "Date.h"

#include <stdexcept>
#include "Date.h"


Date::Date(int y, Months m, int d) : day(d), month(m), year(y) {
    if (month==Months::Settembre || month==Months::Aprile || month==Months::Giugno || month==Months::Novembre) {
        if (day < 0 || day > 30) {
            throw std::domain_error("giorni sbagliati");
        }
    }else if(month==Months::Febbraio) {
        if (day < 0 || day > 28) {
            throw std::domain_error("giorni sbagliati");
        }
    }else if(day<0 || day>31) {
        throw std::domain_error("giorni sbagliati");
    }
}

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

Months Date::getMonth() const {
    return month;
}

void Date::setDay(const int &d) {
    day=d;
}

void Date::setMonth(const Months &m) {
    month=m;
}

void Date::setYear(const int &y) {
    year=y;
}

std::string Date::getMonthString() const {
    switch (month) {
        case Months::Gennaio:
            return "Gennaio";
        case Months::Febbraio:
            return "Febbraio";
        case Months::Marzo:
            return "Marzo";
        case Months::Aprile:
            return "Aprile";
        case Months::Maggio:
            return "Maggio";
        case Months::Giugno:
            return "Giungo";
        case Months::Luglio:
            return "Luglio";
        case Months::Agosto:
            return "Agosto";
        case Months::Settembre:
            return "Settembre";
        case Months::Ottobre:
            return "Ottobre";
        case Months::Novembre:
            return "Novembre";
        case Months::Dicembre:
            return "Dicembre";
    }
}

bool DateComparator::operator()(const Date &first, const Date &second) const {
    if (first.getYear() > second.getYear())
        return false;
    else if (first.getYear() == second.getYear()) {
        if (first.getMonth() > second.getMonth())
            return false;
        else if (first.getMonth() == second.getMonth()) {
            if (first.getDay()>= second.getDay())
                return false;
        }
    }
    return true;
}