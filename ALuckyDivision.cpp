#include <iostream>
#include <queue>
#include <string>
using namespace std;

vector<int> generateLuckyNums(int lim)
{
    vector<int> luckyNums;
    queue<int> q;
    q.push(4);
    q.push(7);

    while (!q.empty())
    {
        int num = q.front();
        q.pop();
        if (num > lim)
            break;

        // generate next lucky numbers by appending 4 and 7
        if (num * 10 + 4 <= lim)
            q.push(num * 10 + 4);
        if (num * 10 + 7 <= lim)
            q.push(num * 10 + 7);
    }
    return luckyNums;
}

// function to check if a num almost lucky by dividing that test num by dividing with the element of list
bool almostLucky(int testNum, const vector<int>& luckyNums)
{
    for (int element : luckyNums)
    {
        if (testNum % element == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    bool ans = true; //True if no answer is shown
    int num;
    cin >> num;
    if (1 <= num <= 1000)
    {

        string val = to_string(num);
        // cout << "num = " << num << '\n'
        //      << "val = " << val << '\n';
        if (num % 4 == 0 || num % 7 == 0)
        {
            cout << "YES\n";
            ans = false;
            return 0;
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
                ans = false;
            }   
        }
        if (ans) //True if no answer is shown
        {
            // genrate lucky num up  to the limit
            vector<int> luckyNums = generateLuckyNums(num);
            if (almostLucky(num, luckyNums))
            {
                cout << "YES\n";
            }
            else
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}