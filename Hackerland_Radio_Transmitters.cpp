//https://www.hackerrank.com/challenges/hackerland-radio-transmitters/problem
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    int n, k, r;
    //cout << "Enter n and k : ";
    cin >> n >> k;

    vector <int> arr(n);
    vector <int> rev(n);
    //cout << "Enter elements : ";
    for(int i = 0; i< n ;i++){
        cin >> arr[i];
    }
    //find the lowest and highest number form the array
    sort(arr.begin(), arr.end());

    int f = arr.front();
    int l = arr.back(); 
      
    int num_between = (l - f)+1;
    int op;
    int cnt;
    if(num_between != 1 || num_between != 0){
        
        if(k>2){

             op = ((k*2)+1);
        }else{
            op = (k+1);
        }
         cnt = 0;
        while(num_between >= 0){
            cnt++;
            num_between-=op;
        }
        cout << cnt << endl;    
    }
    else{
        cnt = 1;
        cout << cnt  << endl;
    }
    return 0;
}

//*notes new learnings
// It doesn't work.   int f = arr.begin();
//int ff = *arr.begin(); // OR
//int ff = arr.front();  // OR
//int ff = arr[0];
//cout << "first  ff element :" << ff << endl;
//int lastElement = arr[arr.size() - 1]; 
//int lastElement = *(arr.end() - 1);    
