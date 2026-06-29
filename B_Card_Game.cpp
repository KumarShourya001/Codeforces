#include <bits/stdc++.h>
using namespace std;

int cardGame(int a1, int a2, int b1, int b2) {
  int big1 = a1 > a2 ? a1 : a2;
  int small1 = a1 > a2 ? a2 : a1;
  int big2 = b1 > b2 ? b1 : b2;
  int small2 = b1 > b2 ? b2 : b1;
  int cntA =(big1 > big2) + (small1 > small2);
  int lossA =(big1 < big2) + (small1 < small2); 
  int cntB = (big1 > small2) + (small1 > big2);
  int lossB = (big1 < small2) + (small1 < big2);
  int ans = 0;
  if (cntA > lossA)
    ans += 2;
  if (cntB > lossB)
    ans += 2;
  return ans;
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;

    int ans = cardGame(a1, a2, b1, b2);
    cout << ans << endl;
  }
  return 0;
}