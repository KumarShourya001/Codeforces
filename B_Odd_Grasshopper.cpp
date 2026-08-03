#include <bits/stdc++.h>
using namespace std;

long long solve(long long x, long long n) {

  if (n % 4 == 0)
    return x;
  long long strt = 4 * (n / 4);
  int cyc = n - strt;
  strt++;
  if (x % 2 == 0) {
    if (cyc >= 1) {
      x -= strt;
      strt++;
    }
    if (cyc >= 2) {
      x += strt;
      strt++;
    }
    if (cyc >= 3)
      x += strt;
  } else {
    if (cyc >= 1) {
      x += strt;
      strt++;
    }
    if (cyc >= 2) {
      x -= strt;
      strt++;
    }
    if (cyc >= 3) {
      x -= strt;
    }
  }
  return x;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long x;
    long long n;
    cin >> x >> n;
    long long ans = solve(x, n);
    cout << ans << endl;
  }
}