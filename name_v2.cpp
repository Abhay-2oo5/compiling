// fixed version of name.cpp
#include <iostream>
using namespace std;
int main ()
{
    string name;
    cout << "Enter your Name: ";
    getline(cin, name);
    cout << "Your Name is: "<< name << endl;
    return 0;
}