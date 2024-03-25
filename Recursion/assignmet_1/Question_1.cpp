/**Write a program to calculate the sum of odd numbers between a and b (both inclusive) using
recursion.*/

#include<iostream>
#include<bits/stdc++.h>

using namespace std;


int recSum(int a, int b){
    if(a > b) return 0;
    if(a % 2 == 0) a += 1;
    return a + recSum(a+1,b);
}
int main(){
    cout << recSum(1,7) << endl;
}
