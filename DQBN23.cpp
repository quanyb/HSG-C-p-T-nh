//Code by QunHaker :3
//DQBN23
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#define nmax 1000007
#define fre freopen
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

const int inf = trunc(1e18);
ll a[nmax], b[nmax], f[nmax], res=-inf;
ll rmax=-inf, d=0;
int n;

void sangnt(int u)
{
    for(int i=1;i<=u;i++)
        f[i]=1;
    f[1]=0;
    for(int i=2;i*i<=u; i++)
        if(f[i]==1)
            for(int j=i;j*i<=u;j++)
                f[i*j]=0;
}

void xuli(){
    ll s=0;
    f(i,1,n)
        if(b[i]==1)
            s+=a[i];
    if(f[s]==1){
        d++;
        res=max(res,s);
    }

}

void thu(int i){
    f(j,0,1){
        b[i]=j;
        if(i==n){
            xuli();
        }else{
            thu(i+1);
        }
    }
}

void subtask1(){
    memset(f,sizeof(f),0);
    sangnt(1e6);
    thu(1);
    if(d==0){
        cout<<-1;
        return;
    }
    cout<<res;
}

void subtask2(){

}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fre("DQBN23.inp","r",stdin);
    fre("DQBN23.out","w",stdout);
    cin>>n;
    f(i,1,n){
        cin>>a[i];
        rmax=max(rmax, a[i]);
    }
    subtask1();
    return 0;
}
