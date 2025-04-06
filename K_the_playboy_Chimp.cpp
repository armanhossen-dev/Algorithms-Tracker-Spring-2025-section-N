#include<iostream>
#include<vector>
#include<stdint.h> 
using namespace std;
int main(){
    int a,b;
    cin >> a;
    vector<int> girlH(a);
        for(int i = 0; i<a; i++){
        cin >> girlH[i];
    }
    
    cin >> b;
    vector<int> boyH(b);    
    for(int i = 0; i<b; i++){
        cin >> boyH[i];
    }
    return 0;
}