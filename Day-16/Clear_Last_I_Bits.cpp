#include <iostream>
using namespace std;

void clearIBits(int num, int i){
    int bitMask = (~0) << i;
    num = num & bitMask;
}

int main(){
    clearIBits(15, 2);

    return 0;
}