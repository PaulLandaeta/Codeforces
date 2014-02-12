#include <iostream>
#include <sstream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cctype>
#include <algorithm>
#include <map>
#include <vector>
#include <list>
#include <set>
#include <queue>
#include <deque>
#include <stack>
#include <string>
#include <cmath>
using namespace std;

#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORD(i,a,b) for(int i=a;i>=b;i--)
#define REP(i,n) FOR(i,0,n)
#define PB push_back
#define ITER(i,a) for( typeof(a.begin()) i=a.begin();i!=a.end();i++)
#define mod 1000000007
#define MAXN 1000010
#define EPS 1e-8
#define PI acos(-1)
#define Vector Point
//#define istringstream c(cad);

typedef pair<int,int>   ii;
typedef long long ll;
typedef vector<ll> vll;
typedef vector<int> vi;
typedef vector<vi> vvi;
typedef vector<bool> vb;
typedef vector<vb> vvb;

const int MAXH = 1010;
const int MAXW = 1010;

int main()
{
    ll sum=0;
    int n;
    cin>>n;
    vi v2(n);
    vi v1(n);
    REP(i,n)
        cin>>v1[i];
    REP(i,n)
        cin>>v2[i];
    for(int i=0;i<n;i++)
    {
        if(v1[i]*2<v2[i] || v2[i]==1)
        {
          sum--;
        }
        else{
                ll s=v2[i]/2;
                sum+=((v2[i]-s)*s);
        }
    }
    cout<<sum<<endl;
    return 0;
}
