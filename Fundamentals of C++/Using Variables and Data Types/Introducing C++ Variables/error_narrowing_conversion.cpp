#include <iostream>

using std::cout;
using std::endl;

int main(){
    //Assignment notation;
    int balance{1000.45}; //will error
    int withdrawal = 200;
    int final_balance = balance - withdrawal;

    cout << "My current account balance is: $" << balance << endl;
    cout << "I need to withdraw: $" << withdrawal << endl;
    cout << "My final account balance is: $" << final_balance << endl;

    return 0;
}   