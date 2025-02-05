//https://vjudge.net/problem/UVA-11462
//Age Sort

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    while(1){
        long long int num;
        cin >> num;
        if(num == 0){
            break;
        }
        vector<int> arr(num);
        for(int i = 0; i<num ; i++){
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        for(int k = 0; k<num; k++){
            cout << arr[k];
            if(k < num - 1) {
                cout << ' '; // Add space between elements, but not after the last one
            }
        }
        cout<<endl;
    }            
    return 0;
}