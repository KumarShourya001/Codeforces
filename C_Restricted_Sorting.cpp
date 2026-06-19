#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool sort_arr(vector<int> &arr, int k)
{
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                if (k <= abs(abs(arr[i] - arr[j])))
                {
                    swap(arr[i], arr[j]);
                    break;
                }
                else{
                    return false;
                }
            }
        }
    }
    return true;
}
int piggy_int(vector<int> &arr)
{
    int low = 1;
    int high = 1000;
    int mid = -1;
    while (low <= high)
    {
        mid = (low + high) / 2;

        bool res = sort_arr(arr, mid);
        if (!res)
        {
            high = mid - 1;
        }
    }
    return mid;
}
int main()
{

    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int out = piggy_int(arr);
    }
}
