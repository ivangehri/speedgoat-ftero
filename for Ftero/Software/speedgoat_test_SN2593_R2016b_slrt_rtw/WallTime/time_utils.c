/*
 * time_utils.c - Time utility functions
 *
 * Copyright 2009 The MathWorks, Inc.
*/


typedef enum {
   T_YEAR = 0,
   T_MONTH,
   T_DAY,
   T_HOUR,
   T_MIN,
   T_SEC,
   DATE_VECTOR_LENGTH
} TimeFormat;


/* Days per Month */
int_T DPM[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int_T DPMc[13]= {0, 31, 59, 90,120,151,181,212,243,273,304,334,365};

#define SECONDS_PER_MINUTE   (60)
#define SECONDS_PER_HOUR     (SECONDS_PER_MINUTE * 60)
#define SECONDS_PER_DAY      (SECONDS_PER_HOUR * 24)

#define DaysPerYear(year)   (IsLeapYear(year) ? 366 : 365)

#define DaysPerMonth(month, year)   (DPM[month] + (((month==2)&&IsLeapYear(year)) ? 1 : 0))

boolean_T IsLeapYear(int_T year)
{
   if ( (year%4) || ((!(year%100)) && (year%400)) ) return 0;
                                               else return 1;
}

int_T DaysPerMonthCumulative(month, year)
{
   if ( (month >= 2) && IsLeapYear(year) ) return DPMc[month] + 1;
                                      else return DPMc[month];
}

real_T LocalTimeDelta(uint16_T year, uint16_T date[])
{
   int_T  j;
   real_T seconds;
   real_T days = 0.0;

   for ( j = year ; j < date[T_YEAR]  ; j++ ) days += DaysPerYear(j);
 //for ( j = 1    ; j < date[T_MONTH] ; j++ ) days += DaysPerMonth(j, date[T_YEAR]);
                                              days += DaysPerMonthCumulative(date[T_MONTH] - 1, date[T_YEAR]);
                                              days += date[T_DAY] - 1;
   seconds = days * SECONDS_PER_DAY;

   seconds += date[T_HOUR] * SECONDS_PER_HOUR;
   seconds += date[T_MIN]  * SECONDS_PER_MINUTE;
   seconds += date[T_SEC];

   return seconds;
}

real_T TimeDelta(uint16_T date2[], uint16_T date1[])
{
  uint16_T LocalEpoch;

  LocalEpoch = (date1[T_YEAR] < date2[T_YEAR]) ? date1[T_YEAR] : date2[T_YEAR];

  return (LocalTimeDelta(LocalEpoch, date2) - LocalTimeDelta(LocalEpoch, date1));
}
