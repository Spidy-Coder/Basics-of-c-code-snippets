#include<iostream>

using namespace std;

int main(){

    int x=10;
    char y='A';

    const int *i=&x;
    const char *j=&y;

    x = 9;
    y = 'A';

    //*i = 6;  generated compiler error
    //*j=7;    generated compiler error

    cout<<*i<<" "<<*j;
}