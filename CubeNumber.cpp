#include <iostream>
using namespace std;
int main() {

    int number;
    int cube;

    cout << "Please Enter a number: ";
    cin >> number;

    cube = number * number * number;


    cout << "The Cube of " << number << " is: " << cube << endl;
    return 0;
}