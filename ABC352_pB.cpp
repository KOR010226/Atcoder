#include <bits/stdc++.h>
using namespace std;

int main(){
    string S, T;
    cin >> S >> T;

    for(int i = 0, j = 0;i < T.size(); i ++){
        if(T[i] == S[j]){
            cout << i + 1 << ' ';
            j ++;
        }
    }
    return 0;
}
