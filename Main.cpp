#include "clock.h"
using namespace std;

 int main()
 {
    clock jam1 = MakeClock(3,50,6);
    clock jam2 = MakeClock(9,0,0);
    clock sisa = MakeClock(1,62,30);

    PrintClock(jam1);
    PrintClock(jam2);

    sisa = AddClock(jam1, jam2);
    PrintClock(sisa);

    return 0;
 }
