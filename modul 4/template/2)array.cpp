
#include<iostream>
using namespace std;


template<typename T>
void sort(T array[],int size){
    for(int a = 0; a < size;a++){
        for(int b = a + 1;b < size; b++){

            if(array[a] > array[b]){

                array[a] = array[a] * array[b];
                array[b] = array[a] / array[b];
                array[a] = array[a] / array[b];
           }
        }
    }
}
int main(){
    int no;
    cout<<"Enter the size of array:";
    cin>>no;
    int array[no];
    for(int a = 0; a < no; a++){
        cout<<"Enter the array element:";
        cin>>array[a];
    }
    cout<<"Before sorting the array is:"<<endl;
    for(int a = 0; a < no; a++){
        cout<<array[a]<<" ";	/
    }
    sort(array,no);
    cout<<endl<<"After sorting the array is :"<<endl;
    for(int a = 0; a < number;a++){
        cout<<array[a]<<" ";
    }
    return 0;
}
