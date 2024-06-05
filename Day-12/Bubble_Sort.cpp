#include <iostream>
using namespace std;

void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n){
    for(int i = 0; i < n - 1; i++){
        bool isSwap = false;
        cout << "Outer Loop";
        for(int j= 0; j < n - i - 1; j++){
            cout << "Inner Loop";
            if(arr[j] > arr[j + 1]){
                swap(arr[j], arr[j + 1]);
                isSwap = true;
            }
        }
        if(!isSwap){
            // An array is already sorted.
            return;
        }
    }
    print(arr, n);
}

int main(){
    //int arr[5] = {5, 4, 1, 3, 2};
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    bubbleSort(arr, 10);
    cout << endl;

    return 0;
}