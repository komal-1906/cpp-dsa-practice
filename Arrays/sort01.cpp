#include <iostream>
using namespace std;

void sortOne(int arr[], int n){
    int left = 0, right = n-1;

    while(left < right){
        while(arr[left] == 0 && left < right){
            left++;
        }
        
        while(arr[right] == 1 && left < right){
            right--;
        }

        //arr[left] == 1 and arr[j] == 0
        if(arr[left] == 1 && arr[right] == 0 && left < right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }
} 

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int arr[100];
    int n;

    cout << "Enter size of array: ";
    cin >> n;

    cout << "Enter elements of array only in 0 and 1: " << " ";
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }

    sortOne(arr, n);
    printArray(arr, n);

    return 0;
}