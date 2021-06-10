#include<iostream>
#include<cstdlib>

using namespace std;

//malloc() usage
//allocates memory at runtime from the heap segment
//initializes garbage value of designated bytes you need

//calloc() usage
//allocates memory at runtime from the heap segment
//but the difference is
//it initializes 0 in that memory blocks unlike malloc() does.

//gfg youtube video for difference b/w malloc() and calloc()
int main(){
    
    int n=5;
    int *p = (int *) malloc (n * sizeof(int));
    for(int i=0;i<n;i++){
        p[i] = i * 2;
    }

    for(int i=0;i<n;i++){
        cout<<p[i]<<endl;
    }

    free(p);
    return 0;
}

//stack memory:-
//It has a fixed value of size for
//which an array could be declared 
//in the contiguous form. 
 


//Heap Memory:-
//It is the memory where the array declared is not stored in a contiguous way. 
//If we want to declare an array of size 100000, we do not have the contiguous
// space in the memory of the same size.
// We will be declaring the array using heap memory as it
// necessarily doesn’t require a contiguous allocation; it will allocate the
// space wherever it gets and links all the memory blocks together.
 

//NOTE:- GLOBAL VARIABLES ARE STORED USING HEAP MEMORY

//The memory declaration using 
//heap memory is known as dynamic memory allocation,
// while the one using stack is known as
//compile-time memory allocation. 