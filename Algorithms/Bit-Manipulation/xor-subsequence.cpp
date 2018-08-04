#include <cstdio>
using namespace std;

typedef long long ll;
#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define REP(i, n) for (int i = 0; i < (n); i++)

int ri()
{
  int x;
  scanf("%d", &x);
  return x;
}

const int LOGM = 16, M = 1 << LOGM;
ll c[M];

void walsh_dit2()
{
  for (int m = 2; m <= M; m *= 2) {
    int mh = m/2;
    for (int i = 0; i < M; i += m)
      REP(j, mh) {
        ll x = c[i+j], y = c[i+j+mh];
        c[i+j] = x+y;
        c[i+j+mh] = x-y;
      }
  }
}

void arith()
{
  for (int m = 2; m <= M; m *= 2) {
    int mh = m/2;
    for (int i = 0; i < M; i += m)
      REP(j, mh) {
        ll x = c[i+j], y = c[i+j+mh];
        c[i+j] = x;
        c[i+j+mh] = x+y;
      }
  }
}

void arith_minus()
{
  for (int m = 2; m <= M; m *= 2) {
    int mh = m/2;
    for (int i = 0; i < M; i += m)
      REP(j, mh) {
        ll x = c[i+j], y = c[i+j+mh];
        c[i+j] = x;
        c[i+j+mh] = y-x;
      }
  }
}

void xorConvolution()
{
  walsh_dit2();
  REP(i, M)
    c[i] *= c[i];
  walsh_dit2();
  REP(i, M)
    c[i] /= M;
}

void orConvolution()
{
  arith();
  REP(i, M)
    c[i] *= c[i];
  arith_minus();
}

int main()
{
  int n = ri(), acc = 0;
  c[0]++;
  REP(i, n) {
    acc ^= ri();
    c[acc]++;
  }
  xorConvolution();
  int x;
  ll y = 0;
  FOR(i, 1, M)
    if (c[i] > y)
      y = c[x = i];
  printf("%d %lld
", x, y/2);
}
