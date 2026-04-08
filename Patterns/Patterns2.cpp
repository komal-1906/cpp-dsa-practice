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
    
}