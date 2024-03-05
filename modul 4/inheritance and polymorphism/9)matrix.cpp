#include <iostream>
using namespace std;
class Matrix{

private:
    int size;
    int *data;

public:

    Matrix(int size1) : size(size1){
        data = new int[size];
    }

    Matrix operator +(Matrix obj){

        if(this->size != obj.size){
            cout<<"Matrices have different sizes. Addition not possible."<<endl;

            return Matrix(0);
        }
        Matrix result(size);


        for(int i = 0; i < size; i++){
            result.data[i] = this->data[i] + obj.data[i];
        }
        return result;
    }

    void inputMatrix(){
        cout<<"Enter "<<size<<" elements : ";
        for(int i = 0; i < size; ++i){
            cin>>data[i];
        }
    }
    void displayMatrix(){
        cout<<"Matrix : ";
        for(int i = 0; i < size; ++i){
            cout<<data[i]<<" ";
        }
        cout<<endl;
    }
};

int main() {
    int size;
    cout<<"Enter size of matrices : ";
    cin>>size;
    Matrix matrix1(size), matrix2(size);


    cout<<"Enter elements for first matrix"<<endl;
    matrix1.inputMatrix();
    cout<<"Enter elements for second matrix"<<endl;
    matrix2.inputMatrix();

    Matrix result = matrix1 + matrix2;


    result.displayMatrix();
    return 0;
}
