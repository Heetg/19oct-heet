//wap to determine eligibility for admission ......
#include<stdio.h>
int main()
{
    int maths,physics,chemistry;
    printf("enter maths marks : ");
    scanf("%d",&maths);
    print("enter physics marks : ");
    scanf("%d",&physics);
    printf("enter chemistry marks : ");
    scanf("%d",&chemistry);

    if(maths>=65 && physics>=65 && chemistry>=50 && (maths+physics+chemistry)>=190 && (maths+physics)>=140)
    {printf("the candidate is eligible for addmission");
    }
    else
    {
        printf("sorry the candidate is not eligible for addmission");
    }
return 0;
}
