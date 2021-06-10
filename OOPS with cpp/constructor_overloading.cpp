#include <iostream>
#include <string>

using namespace std;
class A {
    int a;
    public:
        
        void assign(int i) {
            a = i;
        }
        int getA() {
            return a;
        }
};
int main() {
    A obj;
    obj.assign(5);
    cout << obj.getA();
}