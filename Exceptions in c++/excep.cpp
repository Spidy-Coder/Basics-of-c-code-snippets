//In C++, an exception is an unwanted event
//that occurs during the execution of the
//program. It disrupts the normal flow of
//he program. Exception terminates the
//program execution. When an exception 
//occurs in our program, 
//we get a system-generated error message.
//We can handle the exception in C++ to
//provide a meaningful message to the 
//user rather than a system-generated 
//error.

//what is an exception handling?

//Exception handling is a mechanism in cpp used to handle
//the run-time error so that the programs's
//normal flow can be maintained.
//If an exception occurs in your code,
//then the rest of the code is not executed.
//Therefore, the cpp compiler creates an exception object.

//This exception object directly jumps to the dafault catch 
//mechanism;there is a default message
//that prints on the screen and our program gets terminated.

#include<iostream>

using namespace std;

int main(){
    try{
        int age=12;
        if(age >= 18){
            cout<<"You are eligible to vote.";
        }
        else{
            throw -1;
        }
    }
    catch(int num){
        cout<<"Sorry,you are not eligible to vote"<<endl;
        cout<<"Error: "<<num;
    }
}