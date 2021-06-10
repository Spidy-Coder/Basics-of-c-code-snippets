//pass by reference

#include<iostream>
using namespace std;
void myfuncn(int *arr, int n) {
    /* The pointer arr is pointing to the first element of
     the array, and the n is the size of the array. */
    for (int i = 0; i < n; i++) {
        cout << "Value of var_arr " << i << " is: " << * arr << endl;
        /*increment pointer for next element fetch*/
        arr++; //if this is not used,it will print same values,try it.
    }
}
int main() {
    int var_arr[] = {11, 22, 33, 44, 55, 66, 77};
    myfuncn(var_arr, 7);
    return 0;
}
