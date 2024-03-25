/**Given a positive integer, return true if it is a power of 2.*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;

int isPow(int n){
    if(n % 2 != 0 and n != 1) return 0; // n is odd
    else if(n == 1) return 1;

    return isPow(n/2);
}

int main(){
    cout << isPow(3) << endl;
    cout << isPow(32) << endl;
    cout << isPow(18) << endl;
}
