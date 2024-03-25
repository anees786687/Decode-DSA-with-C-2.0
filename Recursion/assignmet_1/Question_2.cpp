/**Calculate the number of ways in which a person can climb n stairs if he can take exactly 1, 2 or 3
steps at each level.*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int step(int n){
    if(n == 0) return 1;
    if(n<0) return 0;
    return step(n-1) + step(n-2) + step(n-3);
}

int main(){
    cout << step(4) << endl;
}
