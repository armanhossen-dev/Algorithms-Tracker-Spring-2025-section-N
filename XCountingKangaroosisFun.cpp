#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
    int n, num, j;
    int t;
    cin >> t;
    vector<int> op(t);
    for (int k = 0; k < t; k++)
    {
        cin >> n >> j;
        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr.begin(), arr.end());
        int low = arr.front();
        int last = arr.back();
        // cout << low << ' '<<last << endl;
        int sum = low + last;
        op[k] = sum;
    }

    for (int k = 0; k < t; k++)
    {
        cout << "Case "<< k + 1 << ": " << op[k] << "\n";
    }
    return 0;
}