#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{

    int num;
    while (cin >> num)
    {
        vector<int> arr(num);
        for (int i = 0; i < num; i++)
        {
            cin >> arr[i];
        }
        int price;
        cin >> price;
        // cin.ignore();

        sort(arr.begin(), arr.end()); // Sort the array to use the two-pointer technique, from first and last comming form both side to the middle
        int left = 0;                 // 1st index
        int right = num - 1;          // last index
        int b1, b2;
        b1 = b2 = 0;

        int sum_price = 0;
        while (left < right)
        {
            sum_price = arr[left] + arr[right];
            if (sum_price == price)
            {
                b1 = arr[left];
                b2 = arr[right];
                left++;
            }
            else if (sum_price < price)
            {
                left++;
            }
            else
            {
                right--;
            }
        }
        cout << "Peter should buy books whose prices are " << b1 << " and " << b2 << ".\n";
        cout << endl;
    }
    return 0;
}
