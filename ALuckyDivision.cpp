#include <iostream>
#include <string>
using namespace std;

bool prime(int n)
{
    if (n < 2){
        return false;
    }
    if (n == 3 || n == 2){ // 2,3 then prime num os ture
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0){
        return false; // not prime, they are multiples of 2 and 3
    }

    // checking factors from 5 to sqrt(n)
}

int main()
{
    int num;
    cin >> num;
    string val = to_string(num);
    // cout << "num = " << num << '\n'
    //      << "val = " << val << '\n';
    if (num % 4 == 0 || num % 7 == 0)
    {
        cout << "YES\n";
    }
    else
    {
        int size = val.length();
        int len = size;
        int cnt = 0;
        for (int i = 0; i < size; i++)
        {
            if (val[i] == '4' || val[i] == '7')
            {
                cnt++;
            }
        }
        if (cnt == len)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }

        if (prime(num))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}