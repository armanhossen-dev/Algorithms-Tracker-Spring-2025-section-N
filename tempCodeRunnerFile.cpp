#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    /*
    a display showing some positive integer
    clicking the red button, device multiplies the displayed number by two.
    clicking the blue button, device subtracts one from the number on the display

    Bob wants to get number m on the display. What minimum number of clicks he has to make in order to achieve this result?
    get the number m out of number n.

    */

    // n<m hole n*2 hobe 1 bar, then n*2 > m hole -- kore m er soman kor te hobe, n*2 < m hole abar *2 hobe
    // and count kor te hobe koi bar button click kor lam
    int p = 0;
    if (n > m)
    { // 10 1
        // n>m hole n--kore m er soman hobe
        p = n - m;
    }
    if (n < m)
    { 
    tx:
        n = n * 2;
        p++;
        if (n > m)
        {
            if ((n - m) >= 1)
            {

                p += (n - m);
            }
            else
            {
                p = (n - m);
            }
        }
        else
        {
            goto tx;
        }
    }

    cout << p << endl;
    return 0;
}