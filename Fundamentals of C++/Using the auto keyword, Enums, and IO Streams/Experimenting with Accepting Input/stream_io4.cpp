#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;
using std::getline;

int main()
{
    char first_char;
    cout << "What's the first letter of your name?: ";
    first_char = cin.get();
    //cin.get(first_char); <- it passes the reference for first_char to get and saves the char to it.

    cout << "You entered " << first_char << endl;

    return 0;
}