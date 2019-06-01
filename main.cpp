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
    Activity a1("Passeggiata", t1, t2);
    Activity a2("Studio", t3, t4);
    Activity a3("Pranzo", t5, t6);
    Activity a4("Playstation", t7, t8);
    Activity a5("Calcio", t5, t8);
    Date d1(2018, Months::Gennaio, 24);
    Date d2(2015, Months::Novembre, 19);
    Date d3(2015, Months::Maggio, 27);
    registro.insertActivity(d1, a1);
    registro.insertActivity(d1, a3);
    registro.insertActivity(d1, a2);
    registro.insertActivity(d2, a4);
    registro.insertActivity(d3, a5);
    registro.lookActivities(d1);
    return 0;
}