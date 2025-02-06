#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size;
    while (cin>>size)
    {
        vector<int> arr(size);
        for (int i = 0; i < size; i++)
        {
            cin >> arr[i];
        }

        int swapT = 0;
        for (int k1 = 0; k1 < size-1; k1++)
        {
            for (int k2 = 0; k2 < size-1-k1; k2++)
            {
                if (arr[k2] > arr[k2+1])
                {
                    swap(arr[k2],arr[k2+1]); // Swap elements
                    /*
                    temp = arr[k1];
                    arr[k1] = arr[k2];
                    arr[k2] = temp;
                    */
                    swapT++;
                }
            }
        }
        cout << "Minimum exchange operations : " << swapT<< endl;
        
    }
    return 0;
}
