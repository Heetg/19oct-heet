#include<iostream>
using namespace std;
class Rectangle{
	float length, width;
public:
	Rectangle(float l, float w){
		length = l;
		width = w;
	}

        float RECTANGLEarea(){
		return length * width;
	}

        float perimeter(){
		return 2 * (length + width);
	}
};


int main(){
	float heet, w1;
	cout<<"\nEnter a length - ";
	cin>>heet;
	cout<<"\nEnter a width - ";
	cin>>w1;

	Rectangle rec(heet, w1);
	cout<<"\nArea of rectangle : "<<rec.RECTANGLEarea();
	cout<<"\nPerimeter of rectangle : "<<rec.perimeter();
	return 0;
}

