//Display day for the entered date by user
#include<stdio.h>
#include<conio.h>
#include<math.h>
int fm(int date, int month, int year) {
 int fmonth, leap;
 //leap function 1 for leap & 0 for non-leap
 if ((year % 100 == 0) && (year % 400 != 0))
 leap = 0;
 else if (year % 4 == 0)
 leap = 1;
 else
 leap = 0;
 fmonth = 3 + (2 - leap) * ((month + 2) / (2 * month))
 + (5 * month + month / 9) / 2;
 //bring it in range of 0 to 6
 fmonth = fmonth % 7;
 return fmonth;
}
