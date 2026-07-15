#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
      cin >> a[i];
    if (n % 2 != 0) {
        int k=4;
        cout<<k<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<2<<" "<<n<<endl;
        cout<<1<<" "<<2<<endl;
        cout<<1<<" "<<2<<endl;

    } 
    else {
      int k = 2;
      cout << k << endl;
      cout << 1 << " " << n << endl;
      cout << 1 << " " << n << endl;
    }
  }
}