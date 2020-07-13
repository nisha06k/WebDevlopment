#include<stdio.h>
void main()
{
  enum months {Jan=1, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec};
  enum months month;
  printf("%d\n", month=Sep);
  printf("%d\n", month=Jan);
  printf("%d\n", month=Dec);
  printf("%d\n", month=Apr);
  printf("%d\n", month=Jun);
  printf("%d\n", month=Feb);
}