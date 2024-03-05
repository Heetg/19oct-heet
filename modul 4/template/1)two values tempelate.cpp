#include <iostream>
using namespace std;

template<typename T>

void swapValues(T& number1, T& number2){

    T temp = no1;
    no1 = no2;
    no2 = temp;
}

int main(){
    int no1 = 5, no2 = 10;
    cout<<"Before swapping : no1 = "<<no1<<", no2 = "<<no2<<endl;
    swapValues(no1, no2);
    cout<<"After swapping : no1 = "<<no1<<", no2 = "<<no2<<endl;
    return 0;
}
