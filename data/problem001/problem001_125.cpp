#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1e16;
const ll mod = 1000000007;
#define rep(i, n) for (int i = 0; i < (int)(n); i++)

int main() {
  ll r, d, x;
  cin >> r >> d >> x;
  rep(i, 10) {
    x = r*x - d;
    cout << x << endl;
  }
}