#include <bits/stdc++.h>
#define nmax 1000007
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)
using namespace std;

ll n, k, a[nmax], b[nmax];
int rmax=-trunc(1e9);

bool palidrom(int u){
    int s, r, temp;
    for(temp=u;u!=0;u=u/10){
         r=u%10;
         s=s*10+r;
    }
    if(temp==s)
         return true;
    else return false;

}

void xuli(){
    int rs=0;
    f(i,1,k){
        rs+=b[a[i]];
    }
    if(palidrom(rs)){
        rmax=max(rmax,rs);
    }
}

void thu(int i){
    f(j,a[i-1]+1,n-k+i){
        b[i]=j;
        if(i==k){
            xuli();
        }else{
            thu(i+1);
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("DQCKN4.inp","r",stdin);
    freopen("DQCKN4.out","w",stdout);
    memset(b,sizeof(b),0);
    cin>>n>>k;
    f(i,1,n) cin>>a[i];
    thu(1);
    return 0;
}
