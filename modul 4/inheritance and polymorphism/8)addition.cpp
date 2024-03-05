#include <iostream>
using namespace std;
int maths(int no1, int no2){
    return no1 + no2;
}

float maths(float no1, float no2){
    if(no2 != 0){
    	return no1 / no2;
	}
	else{
		return 0;
	}
}

int maths(int no1, int no2, int no3){
    return no1 - no2 - no3;
}

int maths(int no1, int no2, int no3, int no4){
    return no1 * no2 * no3 * no4;
}

int main(){
    int result;
    float RESULT;

    result = maths(15, 3);
    cout<<"Addition : "<<result<<endl;

    RESULT = maths(100.0f, 13.0f);
    cout<<"Division : "<<RESULT<<endl;

    result = maths(17, 8, 9);
    cout<<"Subtraction : "<<result<<endl;

    result = maths(2, 3, 4, 5);
    cout<<"Multiplication : "<<result<<endl;
    return 0;
}
