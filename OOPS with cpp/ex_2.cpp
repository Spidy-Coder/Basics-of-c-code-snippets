#include<iostream>

using namespace std;

class Box{
    public:
        double width;
        double height;
        double depth;
};

int main(){
    Box obj;
    obj.width = 5;
    obj.height = 10;
    obj.depth = 15;

    double volume = obj.width * obj.height * obj.depth;
    cout<<"Volume of a box:"<<volume;
}