#include <iostream>
#include <string>
using namespace std;

void removeDuplicates(string str, string ans, int i, int map[26]){
    if(i == str.size()){
        cout << "Ans : " << ans << endl;
        return;
    }
    int mapIdx = (int)(str[i] - 'a'); // 'a' -> 0 'b' -> 1
    if(map[mapIdx]){ // duplicate character
        removeDuplicates(str, ans, i + 1, map);
    }
    else{ // not duplicate character
        map[mapIdx] = true;
        removeDuplicates(str, ans + str[i], i + 1, map);
    }
}

int main(){
    string str = "aaabbb";
    string ans = "";
    int map[26] = {false};

    removeDuplicates(str, ans, 0, map);

    return 0;
}