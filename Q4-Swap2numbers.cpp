// Write a program to swap two numbers.


#include <iostream>

using namespace std;

void swapNumber(int &num1, int &num2){
    int temp = num1;
    num1 = num2;
    num2 = temp;
}

int main(){
    int num1, num2;

    cout << "Enter num1: ";
    cin >> num1;

    cout << "Enter num2: ";
    cin >> num2;

    cout << "Before swapping" << endl;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    
    swapNumber(num1, num2);

    cout << "After swapping" << endl;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;
    

}