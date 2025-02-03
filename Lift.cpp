#include <iostream>
#include<vector>

using namespace std;

int main() {
    int num;
    cin >> num;
    vector<int> arr(num);
    int userp,liftp,gd;
    for(int i=0;i<num;i++){
        cin>> userp >> liftp;
        arr[i]=19;
        
        if(liftp>=userp){
            gd = (liftp-userp);
            gd *=4;
            arr[i]+=gd;
            arr[i] += userp*4;
        }else{
            //user>lift
            gd = (userp-liftp);
            /*
            up = 7 lift 2
            gd 7-2 = 5 , 5*4 = 20s
            getinto and came out 5*2 = 10s
            lift open 3, close 3 , open 2 times, total 9s
            user-0= 7*4s = 28s
            20+28+10+9=
            */
            gd *=4;
            arr[i]+=gd;
            arr[i] += userp*4;
        }
    }
    
    for(int i=0;i<num; i++){
        cout<<"Case "<<i+1<<": "<<arr[i]<<endl;
    }
    
    return 0;
}


 
