#include<iostream>
#include<set>
#include<algorithm>
#include<vector>
#include<map>
#include<cmath>
#include<string>
#include<queue>
#include<utility>
#include<deque>
#include <bitset>
#include <cstdio>
#include <stdio.h>
#include <string.h>
#define Endl "\n"
#define LL long long
#define F first
#define S second
#define inf 0x3f3f3f3f3f3f3f3fll
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
int dx[]={-1,-1,0,1,1,1,0,-1};
int dy[]={0,1,1,1,0,-1,-1,-1};
//Knight Moves
//int dx[] = { -1, -2, -2, -1, 1, 2, 2, 1 };
//int dy[] = { -2, -1, 1, 2, -2, -1, 1, 2 };
int main()
{
  init();
  int n;
  cin>>n;
  while(n--)
  {
    LL a, b;
    cin>>a>>b;
    LL mul = a*b;
    LL x = round(cbrt(mul));
    bool done = false;
    if(x*x*x == mul)
    {
      if(a%x==0 && b%x==0) cout<<"Yes\n";
      else cout<<"No\n";
    }
    else cout<<"No\n";
  }
  //system("PAUSE");
  return 0;
}
