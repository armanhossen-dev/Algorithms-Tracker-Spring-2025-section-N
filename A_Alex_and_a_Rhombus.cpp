//A. Alex and a Rhombus
#include<iostream>
using namespace std;
int main(){
    int n, add, a,m;
    cin>>n;
    add = n*n;
    if(n>=2){
        a = n-1;
        m = a*a;
        add += m;
    }
    cout << add <<endl;
    return 0;
}
//https://vjudge.net/contest/356290#problem/A
//A - Alex and a Rhombus (Adhoc 01) 
//https://codeforces.com/problemset/problem/1180/A
