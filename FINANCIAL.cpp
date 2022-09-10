//Code by QunHakerLod :3
//FINANCIAL
#include <bits/stdc++.h>
#include <iostream>
#include <cstring>
#include <math.h>
#define nmax 1000007
#define fre freopen
#define ll long long
#define v vector <int>
#define mib map <int, bool>
#define mii map <int, int>
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

int n, dk, k, res;
ll a[nmax], b[nmax], c[nmax], d[nmax];

bool check(){
    for(int i=1;i*2<=dk;i++){
        if(c[i]-c[i+1]<k){
            return false;
        }
    }
    return true;
}

void xuli(){
    dk=0;
    f(i,1,n){
        if(b[i]==1){
            dk++;
            c[dk]=a[i];
        }
    }
    if(check()){
        if(res<dk){
            res=dk;
            f(i,1,dk)
                d[i]=c[i];
        }
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

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    fre("FINANCIAL.inp","r",stdin);
    fre("FINANCIAL.out","w",stdout);
    memset(b, sizeof(b), 0);
    //Multitest
    /*
        while(T--)
            cin>>n;
    */
    cin>>n>>k;
    f(i,1,n)
        cin>>a[i];
    thu(1);
    f(i,1,res){
        printf("%d ", d[i]);
    }
    cout<<res<<endl;
    return 0;
}
