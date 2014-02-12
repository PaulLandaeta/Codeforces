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
    int n;
    cin>>n;
    vector<ii> vp(n);
    REP(i,n)
    {
        int a,b;
        ii p;
        cin>>a>>b;
        p.first=a;
        p.second=b;
        vp[i]=p;
    }
    int c1=0,c2=0;
    for(int i=0;i<101;i++)
    {
        int sw1=0,sw2=0;
        for(int j=0;j<n;j++)
        {
            if(vp[j].first==i)
                sw1=1;
            if(vp[j].second==i)
                sw2=1;

        }
        if(sw1)
            c1++;
        if(sw2)
            c2++;
    }
    cout<<min(c1,c2)<<endl;
    return 0;
}
