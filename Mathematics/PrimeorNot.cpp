#include <iostream>
using namespace std;
int main(){

    int n;
    cout<< "Enter a number: ";
    cin >> n;

    //Prime number are always positive and greater than 1
    if (n<=1){
        cout << n << " is not a Prime no.";
        return 0;
    }

    bool isPrime = true;

    int i = 2;

    //optimized
    while (i*i <= n){
        if (n%i==0){
            isPrime = false;
            break;
        }
    }

    if (isPrime)
        cout << n << " is a Prime number";
    else 
        cout << n << " is a Prime number";

    return 0;
}