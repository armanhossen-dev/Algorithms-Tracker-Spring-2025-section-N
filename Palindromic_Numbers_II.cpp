//https://lightoj.com/problem/palindromic-numbers-ii
//B - Palindromic Numbers (II) (Adhoc 02) 

#include<iostream>
#include<cstring>
#include <vector>  // Include vector library

using namespace std;

int main() {
    int n;
    string num,copy;
    cin >> n;
    ////int arr[n];
    vector<int> arr(n);
    for(int k = 0; k <n; k++){
        cin >> num;
        
        //strcpy(copy,num);
        copy = num; 
        int size = num.length();
        int rev = size-1;
        
        for(int i = 0 ; i < size; i++){
            copy[i]=num[rev];
            rev--;            
        }
        //not this if((strcmp(num,copy))==0){
        /*
        if(num==copy){
            arr[k] = 1;
        }
        else{
            arr[k] = 0;
        } 
        or,
        */
       //     ' condition ?  true_ReturnThis : false_ReturnThis;'
       arr[k] = (num == copy) ? 1 : 0;
    }
    
    for(int i = 0; i<n; i++ ){
        if(arr[i]==1){
            cout << "Case "<<i+1<<": Yes\n";
        }else if(arr[i]==0){
            cout << "Case "<<i+1<<": No\n";
        }
    }
    return 0;
}

