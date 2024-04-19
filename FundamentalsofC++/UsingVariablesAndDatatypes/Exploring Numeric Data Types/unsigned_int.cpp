#include <iostream>

using std::cout;
using std::endl;

int main(){
    cout << "Size of int is " << sizeof(unsigned int) << " bytes." << endl;
    unsigned int high_val = 4294967295;
    unsigned int low_val = 0;
    cout << "Unsigned int values can range between: " << low_val << " to " << high_val << endl;

    return 0;
}