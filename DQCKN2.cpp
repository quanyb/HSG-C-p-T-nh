#include <bits/stdc++.h>
#define nmax 1000007
#define f(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
ll n, k, a[nmax], b[nmax], s;

void xuli(){
    int rs=0;
    f(i,1,k){
        rs+=b[a[i]];
        break;
    }
    if(rs==s)
        f(i,1,k)
            cout<<b[a[i]]<<" ";
    cout<<endl;
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
    freopen("DQCKN2.inp","r",stdin);
    freopen("DQCKN2.out","w",stdout);
    memset(b,sizeof(b),0);
    cin>>n>>s>>k;
    f(i,1,n){
        cin>>a[i];
    }
    thu(1);
    return 0;
}
