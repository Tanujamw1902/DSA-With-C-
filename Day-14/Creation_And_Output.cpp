#include <iostream>
using namespace std;

int main(){
    char work[] = "code";
    cout << work << endl;

    char work1[5] = "code";
    cout << work1 << endl;

    char work2[] = {'c', 'o', 'd', 'e', '\0'};
    cout << work2 << endl;

    char work3[50] = {'c', 'o', 'd', 'e', '\0'};
    cout << work3 << endl;

    return 0;
}