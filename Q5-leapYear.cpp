// Develop a program to check if a given year is a leap year or not.

#include <iostream>

using namespace std;


bool isleapyear(int year){
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0){
        return true;
    }
    else{
        return false;
    }
}


int main(){

    int year;

    cout << "Enter the year to check if it's a leap year or not: ";
    cin >> year;


    if(isleapyear(year)){
        cout << "The year " << year << " is a leap year";
    }
    else{
        cout << "The year " << year << " is not a leap year";
    }

}