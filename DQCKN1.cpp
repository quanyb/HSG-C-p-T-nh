#include <bits/stdc++.h>
#define nmax 1000007
#define f(i,a,b) for(int i=a;i<=b;i++)
using namespace std;
int n, k, a[nmax];

void xuli(){
    f(i,1,k){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}

void thu(int i){
    f(j,a[i-1]+1,n-k+i){
        a[i]=j;
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
    freopen("DQCKN1.inp","r",stdin);
    freopen("DQCKN1.out","w",stdout);
    memset(a,sizeof(a),0);
    cin>>n>>s>>k;
    thu(1);
    return 0;
}
