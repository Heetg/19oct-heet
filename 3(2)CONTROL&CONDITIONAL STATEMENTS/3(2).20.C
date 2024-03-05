//write a program to calculate the electricity bill with the help of following options.......
#include<stdio.h>
int main()
{
    int customerID;
    char customerNAME;
    float unitCONSUMED;

 printf("Enter customer ID :");
 scanf("%d",&customerID);

 printf("Enter customer name : ");
 scanf("%s",&customerNAME);

 printf("Enter the unit consumed : ");
 scanf("%f",&unitCONSUMED);

 if (unitCONSUMED<350)
{
    printf("%f",unitCONSUMED*1.20);

}
else if (unitCONSUMED>=350 && unitCONSUMED<=600)
{
    unitCONSUMED=unitCONSUMED*1.50;
    printf("%f",&unitCONSUMED);

}
else if (unitCONSUMED>=600 && unitCONSUMED<=800)
{
    unitCONSUMED=unitCONSUMED*1.80;
    printf("%f",&unitCONSUMED);
}
else
{
    unitCONSUMED=unitCONSUMED*2.0;
    printf("%f",&unitCONSUMED);
}

    return 0;

}
