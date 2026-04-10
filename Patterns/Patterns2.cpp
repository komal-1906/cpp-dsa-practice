#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter n: ";
    cin >> n;

    // Pattern 1
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Pattern 2
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<=i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Pattern 3
    // for (int i = 1; i<=n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern 4
    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <= i; j++)
    //     {
    //         cout << i << " ";
    //     }
    //     cout << endl;
    // }

    // Pattern 5
    // for(int i=n; i>0; i--){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }

    // Pattern 6
    // for (int i=n; i>0; i--)
    // {
    //     for (int j=1; j<=i; j++)
    //     {
    //         cout << j << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 7
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<2*i+1; j++){
    //         cout << "*";
    //     }
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 8
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<2*n-(2*i+1); j++){
    //         cout << "*";
    //     }
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 9
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<2*i+1; j++){
    //         cout << "*";
    //     }
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     for(int j=0; j<2*n-(2*i+1); j++){
    //         cout << "*";
    //     }
    //     for(int j=0; j<i; j++){
    //         cout << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 10
    // for(int i=1; i<=2*n-1; i++){
    //     int stars = i;
    //     if(i>n){
    //         stars = 2*n-i;
    //     }
    //     for(int j=1; j<=stars; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    // }


    // Pattern 11
    // int start = 1;
    // for(int i=0; i<n; i++){
    //     if(i%2 == 0) 
    //     start = 1;
    //     else 
    //     start = 0;
    //     for(int j=0; j<=i; j++){
    //         cout << start << " ";
    //         start = 1-start;
    //     }
    //     cout << endl;
    // }


    // Pattern 12
    // int space = 2*(n-1);
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << j << " ";
    //     }
    //     for(int j=1; j<=space; j++){
    //         cout << " " << " ";
    //     } 
    //     for (int j=i; j>=1; j--){
    //         cout << j << " ";
    //     }
    //     cout << endl;
    //     space -= 2;
    // }


    // Pattern 13
    // int num = 1;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << num << " ";
    //         num++;
    //     }
    //     cout << endl;
    // }


    // Pattern 14
    // for(int i=0; i<=n; i++){
    //     for(char ch='A'; ch<='A'+i; ch++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 15
    // for(int i=0; i<n; i++){
    //     for(char ch='A'; ch<='A'+(n-i-1); ch++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 16
    // for(int i=0; i<n; i++){
    //     char ch = 'A'+i;
    //     for(int j=0; j<=i; j++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 17
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n-i-1; j++){
    //         cout << " " << " ";
    //     }

    //     char ch = 'A';
    //     int breakpoint = (2*i+1)/2;
    //     for(int j=1; j<=2*i+1; j++){
    //         cout << ch << " ";
    //         if(j<=breakpoint) ch++;
    //         else ch--;
    //     }

    //     for(int j=0; j<n-i-1; j++){
    //         cout << " " << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 18
    // for(int i=0; i<n; i++){
    //     for(char ch='E'-i; ch<='E'; ch++){
    //         cout << ch << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 19
    // int s=0;
    // for(int i=0; i<n; i++){
    //     for(int j=1; j<=n-i; j++){
    //         cout << "*";       
    //     }
    //     for(int j=0; j<s; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=n-i; j++){
    //         cout << "*";
    //     }
    //     s += 2;
    //     cout << endl;
    // }
    // s = 2*n-2;
    // for(int i=1; i<=n; i++){
    //     for(int j=1; j<=i; j++){
    //         cout << "*";       
    //     }
    //     for(int j=0; j<s; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=i; j++){
    //         cout << "*";
    //     }
    //     s -= 2;
    //     cout << endl;
    // }


    // Pattern 20
    // int spaces = 2*n-2;
    // for(int i=1; i<=2*n-1; i++){
    //     int stars = i;
    //     if(i>n) stars = 2*n-i;

    //     for(int j=1; j<=stars; j++){
    //         cout << "*";
    //     }
    //     for(int j=1; j<=spaces; j++){
    //         cout << " ";
    //     }
    //     for(int j=1; j<=stars; j++){
    //         cout << "*";
    //     }
    //     cout << endl;
    //     if(i<n) spaces -= 2;
    //     else spaces += 2;
    // }


    // Pattern 21
    // for(int i=0; i<n; i++){
    //     for(int j=0; j<n; j++){
    //         if(i==0 || j==0 || i==n-1 || j==n-1){
    //             cout << "*" << " ";
    //         }
    //         else cout << " " << " ";
    //     }
    //     cout << endl;
    // }


    // Pattern 22
    // for(int i=0; i<2*n-1; i++){
    //     for(int j=0; j<2*n-1; j++){
    //         int top = i;
    //         int left = j;
    //         int right =(2*n-2) - j;
    //         int down =(2*n-2) - i;
    //         cout << (n-min(min(top,down), min(left, right))) << " ";
    //     }
    //     cout << endl;
    // }

}