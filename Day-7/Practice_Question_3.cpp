#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for(int i = 1; i <= n; i++){
        fact = fact * i;
    }
    cout << "Factorial(" << n << ") = " << fact << endl;
    return fact;
}

int main(){
    factorial(0);
    factorial(1);
    factorial(2);
    factorial(3);
    factorial(4);
    factorial(5);
    factorial(6);
    factorial(7);
    factorial(8);
    factorial(9);
    factorial(10);
    return 0;
}