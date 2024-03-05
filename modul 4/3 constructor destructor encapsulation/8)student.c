#include <iostream>
using namespace std;
class Student
{
    string name, studentClass;
    int rollNumber, marks;

public:

    Student(string name1, string studentClass1, int rollNumber1, int marks1)
    {
		this->name = name1;
        this->studentClass = studentClass1;
        this->rollNumber = rollNumber1;
        this->marks = marks1;
    }

    char calculateGrade()
    {
        if(marks >= 90)
        {
            return 'A';
        }
		else if(marks >= 80)
		{
            return 'B';
        }
		else if(marks >= 70)
		{
            return 'C';
        }
		else if(marks >= 60)
		{
            return 'D';
        }
		else
		{
            return 'F';
        }
    }

    void displayInfo()
    {
        cout<<endl<<"Name : "<< name ;
        cout<<endl<<"Class : "<<studentClass;
        cout<<endl<<"Roll Number : "<<rollNumber;
        cout<<endl<<"Marks : "<<marks;
        cout<<endl<<"Grade : "<<calculateGrade();
    }
};

int main()
{
	string name, studentClass;
	int roll_number, marks;

	cout<<endl<<"Enter Student name : ";
	cin>>name;
	cout<<endl<<"Enter Student class : ";
	cin>>studentClass;
	cout<<endl<<"Enter Student roll number : ";
	cin>>roll_number;
	cout<<endl<<"Enter Student marks : ";
	cin>>marks;

    Student student1(name, studentClass, roll_number, marks);

    student1.displayInfo();
    return 0;
}
