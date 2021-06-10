#include<iostream>

using namespace std;
int main()
{
    int i = 10;
    int  *p;
    p = &i;
    *p = 20;//i's value will also get changed

    cout<<p<<endl;//address of i
    cout<<i<<endl;//value of i
    cout<<&i<<endl;//address of i
    cout<<*p<<endl;//value of i
    cout<<*p<<endl;//updated value of *p in i
    

}