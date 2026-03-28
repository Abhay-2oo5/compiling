//improved version of variables.cpp
#include <iostream>
using namespace std;
int main ()
{
    // declaring variables
    int a, b;
    int result;
    
    // Process
    cout << "SUM of two numbers" << endl;
    cout << "enter a value for a: ";
    cin >> a;
    cout << "enter a value for b: ";
    cin >> b;
    a = a + 1;
    cout << "increasing a by 1" << endl;
    result = a - b;

    //print out the result
    cout << "result is:  " << result <<  endl;
    return 0;
}