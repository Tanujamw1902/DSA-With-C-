#include <iostream>
#include <string>
using namespace std;

int allOccurrences(int arr[], int key, int i, int n){
    if(i == n){
        return 1;
    }
    if(arr[i] == key){
        cout << i << " ";
    }
    allOccurrences(arr, key, i + 1, n);
}

int main(){
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int key = 2;
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "The occurrences of " << key << " are at indices: ";
    allOccurrences(arr, key, 0, n);
    cout << endl;

    return 0;
}