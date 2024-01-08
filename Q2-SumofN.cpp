// Create a program to calculate the sum of all numbers from 1 to N.

#include <iostream>

using namespace std;

int main(){

    int N;
    int sum=0;

    cout << "Enter the value of N: ";
    cin >> N;

    for(int i=0; i<=N; i++){
        sum = sum + i;
    }

    cout << "Addition upto " << N << " is: " << sum;


}