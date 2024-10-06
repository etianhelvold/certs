#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int num_a, num_b;

    cout << "Please enter the two integers: ";
    cin >> num_a >> num_b;

    cout << num_a << " + " << num_b << " = " << num_a + num_b << endl;
    cout << num_a << " - " << num_b << " = " << num_a - num_b << endl;
}

//cin will cause unpredictable behaviour like with strings and floats in this case where it is expecting an int