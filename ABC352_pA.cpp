#include <bits/stdc++.h>
using namespace std;

int main(){
    int N, X, Y, Z;
    cin >> N >> X >> Y >> Z;
    
    if(X < Y) swap(X, Y);
    
    for(int i = X; i >= Y; i --){
        if(i == Z){
            cout << "Yes\n";
            return 0;
        }
    }
    cout << "No\n";
    return 0;
}
