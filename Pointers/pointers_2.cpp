#include<iostream>

using namespace std;

int main(){
    int *p = (int *)malloc(sizeof(int)); //dynamic memory allocation
    free(p);//after calling free() p becomes a dangling pointer
    p = NULL;//now p no more a dangling pointer
    return 0;
}