//
// Created by alessio on 01/06/19.
//

#include "ActivityTracker.h"
#include <ncurses.h>

ActivityTracker::ActivityTracker() {}

bool ActivityTracker::isEmpty() const{
    return tracker.empty();
}

void ActivityTracker::insertActivity(Date& d, Activity& a) {
    tracker.insert(std::make_pair(d, a));
}

void ActivityTracker::deleteActivity(Activity &a) {
    for(auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            tracker.erase(i);
}

bool ActivityTracker::findActivity(Activity &a) const {
    for(auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return true;
    return false;
}

void ActivityTracker::lookActivities(Date &d) const{
    auto itr = tracker.equal_range(d);
    initscr();
    noecho();
    curs_set(FALSE);
    attron(A_REVERSE | A_BOLD);
    mvprintw(3, 5, "  Attività in data: %02d %s %04d  ", d.getDay(), d.getMonthString().c_str(), d.getYear());
    attroff(A_REVERSE | A_BOLD);
    int j = 4;
    for (auto i = itr.first; i != itr.second; i++) {
        j++;
        mvprintw(j, 5, "%d.  %s dalle ore %02d:%02d alle ore %02d:%02d",j-4, i->second.getDescription().c_str(),
                 i->second.getStartHours(), i->second.getStartMinutes(), i->second.getEndHours(),
                 i->second.getEndMinutes());
    }
    refresh();
    getch();
    endwin();
}

const std::string& ActivityTracker::getDescription(Activity &a) const {
    for (auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return i->second.getDescription();
}

const int ActivityTracker::getStartHours(Activity &a) const {
    for (auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return i->second.getStartHours();
}

const int ActivityTracker::getStartMinutes(Activity &a) const {
    for (auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return i->second.getStartMinutes();
}

const int ActivityTracker::getEndHours(Activity &a) const {
    for (auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return i->second.getEndHours();
}

const int ActivityTracker::getEndMinutes(Activity &a) const {
    for (auto i = tracker.begin(); i != tracker.end(); i++)
        if (i->second == a)
            return i->second.getEndMinutes();
}