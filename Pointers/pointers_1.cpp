#include<iostream> //for input/output

using namespace std; //used for scope of identifiers in the code in std library

void demo(){

    static int count=0;//static means:-
    //value is updated and 
    //will be carried to next
    //function calls

    //static variable is a variable whose value
    //will not get changed in next function call
    //and it has fixed memory allocated for that variable
    //for life time.
    cout<<count<<" ";
    count++;
}

int main(){
    
    for(int i=0;i<5;i++){
        demo();
    }
    return 0;
    
}