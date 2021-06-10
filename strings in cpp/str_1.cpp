//In cpp, we have two ways to create and use strings:-
//1.By creating character srrays and treating them as a string
//ex:-char str[6] = {"h","e","l","l","0","\0"};
//ex:-char str[] = "Hello";

#include <iostream>
using namespace std;
int main() {
    // Declaring a string object
    char str[50];
    cout << "Enter a string: ";
    cin.get(str, 50);
    cout << "You entered: " << str << endl;
    return 0;
}

//Disadvantage of this way:-
//refer codestudio - guided path