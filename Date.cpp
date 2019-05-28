//
// Created by alessio on 28/05/19.
//

#include "Date.h"

#include <stdexcept>
#include "Date.h"

int Date::getDay() const {
    return day;
}

int Date::getYear() const {
    return year;
}

Months Date::getMonth() const {
    return month;
}


Date::Date(int y, Months m, int d) : day(d), month(m), year(y) {
    if (month==Months::Settembre || month==Months::Aprile || month==Months::Giugno || month==Months::Novembre) {
        if (day < 0 || day > 30) {
            throw std::domain_error("giorni sbagliati");
        }
    }else if(month==Months::Febbraio) {
        if (day < 0 || day < 28) {
            throw std::domain_error("giorni sbagliati");
        }
    }else if(day<0 || day>31) {
        throw std::domain_error("giorni sbagliati");
    }
}