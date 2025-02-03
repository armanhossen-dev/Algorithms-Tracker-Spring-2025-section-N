#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

/*
    b   buns
    p   beef patties
    f   chicken

    To assemble
    - hamburger = 2(buns) and 1(beef patty)
    - chicken burger = 2(buns) and 1(chicken cutlet)

    1 hamburger for h dollars
    1 chicken burger for c  dollars

    t independent queries.
    (1 <=b, p, f<=100)
*/

/***
  
 b // 2
 In many programming languages (like Python),
 '//' is the integer division operator. 
 It divides two numbers and returns the floor value 
 (the largest integer less than or equal to the result).

7 // 2 results in 3 (since 7 divided by 2 is 3.5, and the floor value is 3).
5 // 2 results in 2 (since 5 divided by 2 is 2.5, and the floor value is 2).
 

min(a, b) it returns the min value //used to find the minimum value between two numbers.
 

*/

int main(){
    int t;
    cin >> t;
    vector<int> ar(t);
    int b, p,f, h,c;
    for(int i = 0; i < t; i++){
        cin >> b >> p >> f ;
        cin >> h >> c;
        cin.ignore();


    }
    return 0;
}
