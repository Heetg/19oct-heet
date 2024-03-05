#include<iostream>
using namespace std;

class Circle
{
	float r;

public:

	Circle(float r1)
	{
		r = r1;
	}

	float calculateArea()
	{
		return 3.14 * r * r;
	}

	float circumference()
	{
		return 2 * 3.14 * r;
	}
};

int main()
{
	float radius;
	cout<<"Enter  radius of the circle : ";
	cin>>radius;

	Circle myCircle(radius);
	cout<<endl<<"Area of circle : "<<myCircle.calculateArea();
	cout<<endl<<"Circumference of circle : "<<myCircle.circumference();
	return 0;
}
