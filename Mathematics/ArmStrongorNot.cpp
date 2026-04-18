#include <bits/stdc++.h>
using namespace std;

int main()
{

    int num;
    cout << "Enter the number you want to check: ";
    cin >> num;

    int rem, k = 0, digit, ans = 0;
    int original = num;

    while (num != 0)
    {
        rem = num % 10;
        k++;
        num /= 10;
    }

    num = original;

    while (num != 0)
    {
        digit = num % 10;

        int p = 1;
        for(int i=0; i<k; i++){
        p *= digit;
        }
        ans += p;

        num /= 10;
    }

    if(ans == original){
        cout << "ArmStrong number";
    }
    else{
        cout << "Not ArmStrong number";
    }
}