#include <iostream>
using namespace std;

void swapAlternate(int arr[], int size){
    int start = 0;
    int next = start + 1;

    while(next < size){
        swap(arr[start], arr[next]);
        start = start+2;
        next = next+2;
    }
}

void printArray(int arr[], int size){
    for (int i=0; i<size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main(){

    int size; 
    cout << "Enter the size of array: ";
    cin >> size;

    int arr[100];

    cout << "Enter the elements of array: ";

    for (int i=0; i<size; i++){
        cin >> arr[i];
    }
    cout << endl;

    swapAlternate(arr, size);
    printArray(arr, size);

    return 0;
}