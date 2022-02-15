#include <iostream>
#include "clock.h"

using namespace std;

bool IsValid (int hh, int mm, int ss)
{
    if(((hh>=0 && hh<=23) && (mm>=0 && mm<=59)) && ((ss>=0)&&(ss<=59)))
        return true;
    else
        return false;
}

clock MakeClock( int hh, int mm, int ss)
{
    clock jam;
    jam.hh.h = hh; 
	jam.mm.m = mm; 
	jam.ss.s = ss;
    return jam;
}

hour GetHour(clock jam)
{
    return jam.hh;
}

minute GetMinute (clock jam)
{
    return jam.mm;
}

second GetSecond (clock jam)
{
    return jam.ss;
}

void SetHour (clock jam, hour BaruHH)
{
    jam.hh= BaruHH;
}

void SetMinute(clock jam, minute BaruMM)
{
    jam.mm = BaruMM;
}

void SetSecond(clock jam, second BaruSS)
{
    jam.ss = BaruSS;
}

clock AddClock (clock jam1, clock jam2)
{
    clock sisa;
    if ((jam1.ss.s+jam2.ss.s) >=60)
    {
        sisa.ss.s = (jam1.ss.s+jam2.ss.s) - 60;
        sisa.mm.m = 1;
    }
    else
    {
        sisa.ss.s = jam1.ss.s+jam2.ss.s;
    }

    if ((jam1.mm.m+jam2.mm.m) >=60)
    {
        sisa.mm.m = (sisa.mm.m+jam1.mm.m+jam2.mm.m) - 60;
        sisa.hh.h = 1;
    }
    else
    {
        sisa.mm.m = jam1.mm.m+jam2.mm.m;
    }

    if (jam1.hh.h+jam2.hh.h >=24)
    {
        sisa.hh.h = (sisa.hh.h+jam1.hh.h+jam2.hh.h) - 60;
    }
    else
    {
        sisa.hh.h = jam1.hh.h+jam2.hh.h;
    }
    return sisa;
}

void PrintClock (clock jam)
{
    cout<<jam.hh.h<<" : "<<jam.mm.m<<" : "<<jam.ss.s<<endl;
}
