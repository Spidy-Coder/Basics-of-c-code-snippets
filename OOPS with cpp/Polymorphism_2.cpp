//Runtime polymorphism(dynamic polymorphirm)

//method overriding

//Method overriding is a feature that allows a 
//child class to redefine the parent class method
//based on its requirements.

//Rules for method overriding:-

//1. method name in child class should be same as that was initialized already in parent class
//2. method of both classes should have same parameters.
//3. It is possible through Inheritance only.

#include<iostream>
using namespace std;
class Parent{
    public:
        void show(){
            cout<<"Inside Parent class."<<endl;
        }
};
class subClass1:public Parent{
    public:
        void show(){
            cout<<"Inside subClass1"<<endl;
        }
};
class subClass2:public Parent{
    public: void show(){
        cout<<"Inside subClass2"<<endl;
    }
};

int main(){
    subClass1 obj;
    subClass2 obj2;
    obj.show();
    obj2.show();
}


