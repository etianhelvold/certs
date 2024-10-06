#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

int main()
{
    string name, city;
    cout << "What's your name?: ";
    cin >> name;

    cout << "Where do you live?: ";
    cin >> city;

    cout << "Hello " << name << " from " << city << "!" << endl;
}

//Inserting a string with spaces will result it stops reading and considers anything after the space for the second cin.