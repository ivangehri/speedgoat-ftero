/*
 * rt_at_clk.c - Function to read the real time AT clock
 *
 *
 * Copyright 2009 The MathWorks, Inc.
*/


#include "rt_at_clk.h"


static int_T bcd[256] = { 0,  1,  2,  3,  4,  5,  6,  7,  8,  9, -1, -1, -1, -1, -1, -1,
                         10, 11, 12, 13, 14, 15, 16, 17, 18, 19, -1, -1, -1, -1, -1, -1,
                         20, 21, 22, 23, 24, 25, 26, 27, 28, 29, -1, -1, -1, -1, -1, -1,
                         30, 31, 32, 33, 34, 35, 36, 37, 38, 39, -1, -1, -1, -1, -1, -1,
                         40, 41, 42, 43, 44, 45, 46, 47, 48, 49, -1, -1, -1, -1, -1, -1,
                         50, 51, 52, 53, 54, 55, 56, 57, 58, 59, -1, -1, -1, -1, -1, -1,
                         60, 61, 62, 63, 64, 65, 66, 67, 68, 69, -1, -1, -1, -1, -1, -1,
                         70, 71, 72, 73, 74, 75, 76, 77, 78, 79, -1, -1, -1, -1, -1, -1,
                         80, 81, 82, 83, 84, 85, 86, 87, 88, 89, -1, -1, -1, -1, -1, -1,
                         90, 91, 92, 93, 94, 95, 96, 97, 98, 99, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
                         -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1};


boolean rt_at_clk_is_bcd()
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_B);

   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   return (status & AT_RT_CLK_STATUS_REGISTER_B_TIME_AND_DATE_FORMAT) ? 0 : 1;
}


boolean rt_at_clk_is_uip()
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_A);

   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   return (status & AT_RT_CLK_STATUS_REGISTER_A_UIP) ? 1 : 0;
}


/*
   date[T_YEAR]:  1900-2099
   date[T_MONTH]: 1-12
   date[T_DAY]:   1-31
   date[T_HOUR]:  0-23
   date[T_MIN]:   0-59
   date[T_SEC]:   0-59
*/
void rt_at_clk_read_date(uint16_T date[DATE_VECTOR_LENGTH])
{
   int_T    j;
   uint16_T century;

   try_again:

   if ( rt_at_clk_is_uip() ) goto try_again;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CURRENT_SECOND);   date[T_SEC]   = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CURRENT_MINUTE);   date[T_MIN]   = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CURRENT_HOUR);     date[T_HOUR]  = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_NUMBER_OF_DAY);    date[T_DAY]   = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_MONTH);            date[T_MONTH] = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_YEAR);             date[T_YEAR]  = xpcInpB(AT_RT_CLK_INPUT_PORT);

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CENTURY);          century = xpcInpB(AT_RT_CLK_INPUT_PORT);

   if ( rt_at_clk_is_uip() ) goto try_again;

   if ( rt_at_clk_is_bcd() ) {
      for ( j = 0 ; j < DATE_VECTOR_LENGTH ; j++ )
         date[j] = bcd[date[j]];
      century = bcd[century];
   }

   date[T_YEAR] += (century * 100);
}


void rt_at_clk_read_dow(uint16_T *dow)
{
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_DAY_OF_THE_WEEK);

   *dow = xpcInpB(AT_RT_CLK_INPUT_PORT);

   if ( rt_at_clk_is_bcd() )
      *dow = bcd[*dow];
}


void rt_at_clk_read_alarm(uint16_T *hour, uint16_T *minute, uint16_T *second)
{
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_ALARM_SECOND);   *second = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_ALARM_MINUTE);   *minute = xpcInpB(AT_RT_CLK_INPUT_PORT);
   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_ALARM_HOUR);     *hour   = xpcInpB(AT_RT_CLK_INPUT_PORT);

   if ( rt_at_clk_is_bcd() ) {
      *second = bcd[*second];
      *minute = bcd[*minute];
      *hour   = bcd[*hour];
   }
}


void rt_at_clk_read_status_a(uint8_T *interrupt_frequency,
                             uint8_T *time_frequency,
                             uint8_T *uip)
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_A);
   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   *interrupt_frequency = status & AT_RT_CLK_STATUS_REGISTER_A_INTERRUPT_FREQUENCY;
   *time_frequency      = (status & AT_RT_CLK_STATUS_REGISTER_A_TIME_FREQUENCY) >> AT_RT_CLK_STATUS_REGISTER_A_TIME_FREQUENCY_SHIFT;
   *uip                 = (status & AT_RT_CLK_STATUS_REGISTER_A_UIP) ? 1 : 0;
}


void rt_at_clk_read_status_b(uint8_T *daylight_savings_time,
                             uint8_T *hour_counter24_12,
                             uint8_T *time_and_date_format,
                             uint8_T *block_generator,
                             uint8_T *call_interrupt_on_time_update,
                             uint8_T *call_alarm_interrupt,
                             uint8_T *call_periodic_interrupt,
                             uint8_T *update_time)
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_B);
   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   *daylight_savings_time         = (status & AT_RT_CLK_STATUS_REGISTER_B_DAYLIGHT_SAVINGS_TIME)         ? 1 : 0;
   *hour_counter24_12             = (status & AT_RT_CLK_STATUS_REGISTER_B_24_12_HOUR_COUNTER)            ? 1 : 0;
   *time_and_date_format          = (status & AT_RT_CLK_STATUS_REGISTER_B_TIME_AND_DATE_FORMAT)          ? 1 : 0;
   *block_generator               = (status & AT_RT_CLK_STATUS_REGISTER_B_BLOCK_GENERATOR)               ? 1 : 0;
   *call_interrupt_on_time_update = (status & AT_RT_CLK_STATUS_REGISTER_B_CALL_INTERRUPT_ON_TIME_UPDATE) ? 1 : 0;
   *call_alarm_interrupt          = (status & AT_RT_CLK_STATUS_REGISTER_B_CALL_ALARM_INTERRUPT)          ? 1 : 0;
   *call_periodic_interrupt       = (status & AT_RT_CLK_STATUS_REGISTER_B_CALL_PERIODIC_INTERRUPT)       ? 1 : 0;
   *update_time                   = (status & AT_RT_CLK_STATUS_REGISTER_B_UPDATE_TIME)                   ? 1 : 0;
}


void rt_at_clk_read_status_c(uint8_T *time_update_complete,
                             uint8_T *alarm_time_reached,
                             uint8_T *periodic_interrupt_call)
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_C);
   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   *time_update_complete    = (status & AT_RT_CLK_STATUS_REGISTER_C_TIME_UPDATE_COMPLETE)    ? 1 : 0;
   *alarm_time_reached      = (status & AT_RT_CLK_STATUS_REGISTER_C_ALARM_TIME_REACHED)      ? 1 : 0;
   *periodic_interrupt_call = (status & AT_RT_CLK_STATUS_REGISTER_C_PERIODIC_INTERRUPT_CALL) ? 1 : 0;
}


void rt_at_clk_read_status_d(uint8_T *realtime_battery_clock_dead)
{
   uint8_T status;

   xpcOutpB(AT_RT_CLK_OUTPUT_PORT, AT_RT_CLK_CLOCK_STATUS_REGISTER_D);
   status = xpcInpB(AT_RT_CLK_INPUT_PORT);

   *realtime_battery_clock_dead = (status & AT_RT_CLK_STATUS_REGISTER_D_REALTIME_BATTERY_CLOCK_DEAD) ? 1 : 0;
}
