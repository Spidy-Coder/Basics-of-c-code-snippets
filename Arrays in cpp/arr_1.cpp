//An array is defined as a fixed-size collections
//of elements of the same data type
//stored in contiguous memory locations.

//Passing arrays to a function:-
//1.Pass by value
//2.Pass by reference

//Pass by value
//syntax:- function_name(array_name,array_size);

#include <iostream>
using namespace std;
void printAge(int age[], int n) {
    for (int i = 0; i < n; i++) {
        cout << age[i] << " ";
    }
}
int main() {
    int age[5] = {11, 14, 15, 18, 20};
    printAge(age, 5);
    return 0;
}