#include <bits/stdc++.h>
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
#define pb push_back
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define rep(i, n) FOR(i, 0, n)
#define ll long long
using namespace std;

const ll P = 1000000007;
int gcd(int a, int b) { return b != 0 ? gcd(b, a % b) : a; }
int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main()
{
  cout << fixed << setprecision(10);
  int r,D,x;
  cin >> r >> D >> x;
  vector<int> X(11);
  X[0] = x;
  for(int i=1;i<11;i++)
  {
    X[i] = r*X[i-1] - D;
    cout << X[i] << endl;
  }
  return 0;
}
