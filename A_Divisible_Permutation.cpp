#include <iostream>
#include <vector>
using namespace std;

vector<int> permutaion(int n)
{
    vector<int> p(n);
    int low = 1, high = n;
    if (n == 2)
    {
        return {1, 2};
    }
    for (int i = n - 1; i >= 0; i--)
    {
        if ((n - 1 - i) % 2 == 0)
        {
            p[i] = low++;
        }
        else
        {
            p[i] = high--;
        }
    }
    return p;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> out = permutaion(n);
        for (auto it : out)
        {
            cout << it << " ";
        }
        cout << endl;
    }
}