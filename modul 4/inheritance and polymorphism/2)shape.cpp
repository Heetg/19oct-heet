#include<iostream>
using namespace std;
class Shape
{
    public:
	virtual int CALCULATEArea(){
		return 0;
	}
};

    class Rectangle : public Shape
{

	int length, width;
    public:
	Rectangle(int length1, int width1) : length(length1), width(width1){}
	int CALCULATEArea(){
		return length * width;
	}
};

int main(){
	int length, width;
	cout<<endl<<"Enter length : ";
	cin>>length;
	cout<<endl<<"Enter width : ";
	cin>>width;
	Rectangle rectangle(length, width);
	cout<<endl<<"Area of Rectangle : "<<rectangle.CALCULATEArea();
	return 0;
}
