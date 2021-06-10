//private access modifiers are not accessible 
//outside the class, but sometimes
//there is a necessity to provide access even to private members.

//Getters are those functions that allow us to access data members of 
//the object.Also called,accessor functions.

//Setters are the member functions that allow us
//to change the data members of an object.
//Also called,mutator functions.

#include<iostream>
using namespace std;

class Student{
    int rollno;
    char name[20];
    float marks;
    char grade;
    public:
        int getRollno(){   //getter function
            return rollno;
        }
        int getMarks(){    //getter function
            return marks;
        }
        void setGrade(){   //setter function
            if(marks > 90) grade = 'A';
            else if(marks > 80) grade = 'B';
            else if(marks > 70) grade = 'C';
            else if(marks > 60) grade = 'D';
            else grade = 'E';
        }
};

//Defining Member functions outside the class
//using the scope resolution operator ::

int Student::getMarks(){
    return marks;
}
int Student::getRollno(){
    return rollno;
}