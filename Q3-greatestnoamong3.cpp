// Implement a program to find the largest among three numbers.

#include <iostream>

using namespace std;

int main(){

    int num1, num2, num3;

    cout << "Enter three numbers: ";
    cin >> num1;
    cin >> num2;
    cin >> num3;


    if(num1 > num2){
        if(num1 > num3){
            cout << "The greatest number among three numbers is: " << num1;
        }
        else{
            cout << "The greatest number among three numbers is: " << num3;
        }
    }

    else if(num2 > num1){
        if(num2 > num3){
            cout << "The greatest number among three numbers is: " << num2;
        }
        else{
            cout << "The greatest number among three numbers is: " << num3;
        }
    }



    // if (num1 > num2 && num1 > num3){
    //     cout << "The greatest number among three numbers is: " << num1;
    // }

    // else if(num2 > num1 && num2 > num3){
    //     cout << "The greatest number among three numbers is: " << num2;
    // }

    // else{
    //     cout << "The greatest number among three numbers is: " << num3;
    // }







}