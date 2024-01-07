// Write a program to check if a number is odd or even.

#include <iostream>

using namespace std;

int main(){
    
    int number;
    
    cout << "Enter a number :";
    cin >> number;

    if(number % 2 == 0){  // check if remainder is 0
        cout << number << " is Even"; // if yes then print it is even
    }
    else {
        cout << number << " is Odd"; // if not print it is odd
    }
}
