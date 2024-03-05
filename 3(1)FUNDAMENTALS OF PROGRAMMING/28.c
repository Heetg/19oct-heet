#include<stdio.h>
int main(int argc ,char const *argv[])
{
    int day,month,year;
    printf("enter year");
    scanf("%d",&year);
    day=year*365;
    month=year*12;
    printf("year to day %d\n",day);
    printf("year to month %d",month);
    return 0;





}
