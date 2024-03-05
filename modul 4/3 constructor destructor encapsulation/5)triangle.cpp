#include<iostream>
using namespace std;

class Triangle
{
	float length1, length2, length3;
public :

	void setSides(float len1, float len2, float len3)
	{
		length1 = len1;
		length2 = len2;
		length3 = len3;
    }

	void triangleType()
	{
		if(length1==length2 && length2==length3){
            cout<<endl<<"Equilateral Triangle";
        }
		else if(length1==length2 || length2==length3 || length1==length3){
            cout<<endl<<"Isosceles Triangle";
        }
		else{
            cout<<endl<<"Scalene Triangle";
        }
	}
};
int main(){
	float length1, length2, length3;
	Triangle triangle;

	cout<<endl<<"Enter length of 1 : ";
	cin>>length1;
    cout<<endl<<"Enter length of 2 : ";
    cin>>length2;
    cout<<endl<<"Enter length of 3 : ";
    cin>>length3;

    triangle.setSides(length1, length2, length3);
    triangle.triangleType();
	return 0;
}
