#include <iostream>

using std::cout;
using std::endl;

int main(){
    cout << "Size of int is " << sizeof(short int) << " bytes." << endl;
    cout << "Size of int is " << sizeof(long int) << " bytes." << endl;
    cout << "Size of int is " << sizeof(long long int) << " bytes." << endl;

    return 0;
}