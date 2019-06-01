#include "Date.h"
#include "Activity.h"
#include "ActivityTracker.h"

int main() {
    ActivityTracker registro;
    Time t1(10, 30);
    Time t2(11, 0);
    Time t3(14, 5);
    Time t4(17, 30);
    Time t5(13, 0);
    Time t6(13, 45);
    Time t7(15, 40);
    Time t8(16, 20);
    Activity first("Passeggiata", t1, t2);
    Activity second("Studio", t3, t4);
    Activity third("Pranzo", t5, t6);
    Activity fourth("Playstation", t7, t8);
    Activity fifth("Calcio", t5, t8);
    Date d1(2018, Months::Gennaio, 24);
    Date d2(2015, Months::Novembre, 19);
    Date d3(2015, Months::Maggio, 27);
    registro.insertActivity(d1, first);
    registro.insertActivity(d1, third);
    registro.insertActivity(d1, second);
    registro.insertActivity(d2, fourth);
    registro.insertActivity(d3, fifth);
    registro.lookActivities(d1);
    return 0;
}