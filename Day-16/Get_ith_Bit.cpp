#include <iostream>
using namespace std;

int getIthBit(int num, int i){
    int bitMask = 1 << i;
    if(!(num & bitMask)){
        return 0;
    }
    else {
        return 1;
    }
}

int main(){
    cout << getIthBit(6, 2) << endl;
    cout << getIthBit(7, 1) << endl;
    cout << getIthBit(7, 5) << endl;

    return 0;
}