//2. By creating a string object
//ex:-string str = "Hello world";

#include <iostream>
using namespace std;
int main() {
    // Declaring a string object
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    cout << "You entered: " << str << endl;
    return 0;
}