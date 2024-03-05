#include <iostream>
using namespace std;
class heet{
public:

    heet(){
        cout<<"Constructor of class heet"<<endl;
    }
};

class gokani : public heet{
public:

    gokani(){
        cout<<"Constructor of class gokani"<<endl;
    }
};

class hg : public gokani{
public:
    hg(){
        cout<<"Constructor of class hg"<<endl;
    }
};

int main(){
    hg objhg;
    return 0;
}
