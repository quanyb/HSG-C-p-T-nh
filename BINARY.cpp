#include <bits/stdc++.h>
#include <string.h>

using namespace std;

int n, res=0;
string s, sa;
char a[100007];

void xuli(){
    sa="";
    for(int i=1;i<=n;i++)
        sa+=a[i];
    //cout<<sa<<endl;
    //cout<<sa.find(s)<<endl;
    if(sa.find(s)+1>0)
        res++;
}

void thu(int i){
    for(char j='0'; j<='1'; j++){
        a[i]=j;
        if(i==n){
            xuli();
        }else{
            thu(i+1);
        }
    }
}
int main()
{
    freopen("BINARY.inp","r",stdin);
    freopen("BINARY.out","w",stdout);
    cin>>n;
    cin>>s;
    thu(1);
    cout<<res;
    return 0;
}
