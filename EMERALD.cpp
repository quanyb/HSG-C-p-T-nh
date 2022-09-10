//Code by QunHaker :3
//Emerald
#include <bits/stdc++.h>
#define nmax 1000007
#define fre freopen
#define ll long long
#define f(i,a,b) for(int i=a;i<=b;i++)
#define fd(i,a,b) for(int i=a;i>=b;i--)

using namespace std;

ll n, a[nmax], b[nmax], s=0;
ll res=-trunc(1e18);
bool test=false;

void xuli(){
    ll sp=0, d=0;
    f(i,1,n){
        if(b[i]==1){
            sp+=a[i];
            d++;
        }
    }
    if(3*sp==s){
        test=true;
        cout<<d<<endl;
        f(i,1,n){
            if(b[i]==1)
                cout<<i<<" ";
        }
    }
}

void thu(int i){
    f(j,0,1){
        b[i]=j;
        if(test){
            return;
        }
        if(i==n){
            xuli();
        }else{
            thu(i+1);
        }
    }
}

int main()
{
    ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
    freopen("EMERALD.inp","r",stdin);
    freopen("EMERALD.out","w",stdout);
    memset(b,sizeof(b),0);
    cin>>n;
    f(i,1,n){
        cin>>a[i];
        s+=a[i];
    }
    thu(1);
    return 0;
}
