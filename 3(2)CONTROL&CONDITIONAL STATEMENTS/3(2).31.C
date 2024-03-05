//WAP TO INPUT BASIC SALRY OF AN EMPLOUEE AND CALCULATE ITS GEOSS SALARY ACCORDING TO THE FOLLWING
#include<stdio.h>
int main()
{
    float basicSalary,grossSalary,HRA,DA;

    printf("Enter the basic salary per month : ");
    scanf("%f",&basicSalary);

    if (basicSalary<=10000)
    {HRA = basicSalary*0.2;
    DA= basicSalary*0.8;}

    else if (basicSalary <=20000)
    {
        HRA= basicSalary*0.25;
        DA = basicSalary*0.9;

    }

    else
    {HRA=basicSalary*0.3;
    DA= basicSalary*0.95;
    }
    grossSalary = basicSalary + HRA + DA;
    printf("gross salary :%.2f\n", grossSalary);



    return 0;
}

