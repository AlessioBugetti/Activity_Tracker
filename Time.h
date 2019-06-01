//
// Created by alessio on 23/05/19.
//

#ifndef ACTIVITY_TRACKER_TIME_H
#define ACTIVITY_TRACKER_TIME_H


class Time {
public:
    Time(int h, int m);

    int getHours() const;

    int getMinutes() const;

    void setHours(const int &h);

    void setMinutes(const int &m);

private:
    int hours;
    int minutes;
};


#endif //ACTIVITY_TRACKER_TIME_H
