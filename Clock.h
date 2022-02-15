#ifndef CLOCK_H_INCLUDED
#define CLOCK_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <stdlib.h>


struct hour
{
    int h;
};

struct minute
{
int m;
};

struct second
{
int s;
};

struct clock
{
    hour hh;
    minute mm;
    second ss;
};

bool IsValid (int hh, int mm, int ss);

clock MakeClock (int hh, int mm, int ss);

hour GetHour(clock jam);
minute GetMinute (clock jam);
second GetSecond (clock jam);

void SetHour (clock jam, int BaruHH);
void SetMinute(clock jam, int BaruMM);
void SetSecond(clock jam, int BaruSS);


clock AddClock (clock jam1, clock jam2);

void PrintClock (clock jam);


#endif
