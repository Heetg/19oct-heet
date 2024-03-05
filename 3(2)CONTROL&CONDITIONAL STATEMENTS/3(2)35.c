//wap to accept th month number and print number of days int that month
#include<stdio.h>
int main()
{
    int month;
    printf("Enter the number of month : ");
    scanf("%d",&month);

    if (month==1)
    {
        printf("no. of days =31");
    }
    else if(month==2)
    {
        printf("no. of days = 29");

    }
    else if(month==3)
    {
        printf("no. of days =31");
    }
    else if(month==4)
    {
        printf("no. of days =30");
    }
    else if(month==5)
    {
        printf("no. of days =31");
    }
    else if(month==6)
  {
      printf("no. of days =30");
  }
  else if(month==7)
  {
      printf("no. of days =31");
  }
  else if(month==8)
  {
      printf("no. of days =31");
  }
  else if(month==9)
  {
      printf("no. of days =30");
  }
  else if(month==10)
  {
      printf("no. of days =31");
  }
  else if(month==11)
  {
      printf("no. of days =30");
  }
  else
  {
      printf("no. of days =31");
  }
    return 0;
}
