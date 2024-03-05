#include <iostream>
using namespace std;
class Cricketer{
public
    string name;
    int age;
    void input_info(){
        cout<<"Enter the name of cricketer : ";
        cin>>name;
        cout<<"Enter the  age of cricketer : ";
        cin>>age;
    }
};

class Batsman : public Cricketer{
public:
    int runs;
    double average_runs;
    int man_of_the_match;
    void input_data(){
        input_info();
        cout<<"Enter  runs: ";
        cin>>runs;
        cout<<"Enter man of the match: ";
        cin>>man_of_the_match;
        calculate_average_runs();
    }

    void calculate_average_runs(){

        if (runs != 0){
            average_runs = static_cast<double>(total_runs) / 5;
        }
    }

    void display_data(){

        cout<<"Name : "<<name<<endl;
        cout<<"Age : "<<age<<endl;
        cout<<"average Runs : "<<average_runs<<endl;
        cout<<" Runs : "<<runs<<endl;
        cout<<"man of the match : "<<man_of_the_match<<endl;
    }
};

int main() {
    Batsman batsman;
    cout<<"Enter Batsman's Details"<< endl;
    batsman.input_data();

    cout<<"Batsman's Data"<<endl;
    batsman.display_data();
    return 0;
}
