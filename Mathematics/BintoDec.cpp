#include <iostream>
using namespace std;
int main()
{

    int rem, ans = 0, i = 1;
    int n;

    cout << "Enter binary no. "; 
    cin >> n;  

    while (n > 0)
    {
        rem = n % 10;
        n = n / 10;

        ans = rem * i + ans;
        i = i*2;
    }
    cout << "Decimal form of given binary no. is " << ans;

    return 0;
} 