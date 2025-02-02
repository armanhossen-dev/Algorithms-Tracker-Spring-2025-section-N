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
//A_Alex_and_a_Rhombus.cpp