#include <iostream>

using std::cout;
using std::endl;

int main(){
    cout << "Size of int is " << sizeof(int) << " bytes." << endl;
    int positive_int_extreme = 2147483647;
    int negative_int_extreme = -2147483648;
    cout << "Signed int values can range between: " << negative_int_extreme << " to " << positive_int_extreme << endl;

    positive_int_extreme = 2147483648; //+1
    negative_int_extreme = -2147483649; //-1

    cout << "Results are strange when exceeding the values: " << negative_int_extreme << " to " << positive_int_extreme << endl;
    cout << "This results in a long to int conversion." << endl;

    return 0;
}