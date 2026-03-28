#include <iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key)
{
    int start = 0, end = n-1, mid;
    mid = (start + end)/2;

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }

        else if(arr[mid] < key){
            start = mid + 1;
        }

        else{
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[100];
    int n;

    cout << "Enter the size of array: ";
    cin >> n;

    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int key;
    cout << "Enter the element you want to search: ";
    cin >> key;

    cout << "Index of searched key is: " << BinarySearch(arr, n, key);
    return 0;
}