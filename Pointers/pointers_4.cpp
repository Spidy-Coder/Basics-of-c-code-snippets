//Reference and Pass by reference

#include<iostream>

using namespace std;

int main(){
    int a = 5;
    int &b = a;//now b will get updated as a will get a new value
    //pass by reference
    a++;
    cout << "b = " << b <<", a = "<< a << endl;
    return 0;
}

//if this would be the case:-

//{int a = 5;
//int b = a;
//a++;
//cout << "b = " << b <<", a = "<< a << endl;
//return 0;}

//this would be an example of pass by value

//Advantages of pass by reference:-
//1.Reduction in memory storage as copy of variable is not made
//2. changes can be reflected easily.