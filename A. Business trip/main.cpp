#include <bits/stdc++.h>

using namespace std;

int main()
{
    int k,flowers_grows[12],sum=0,ans=0;
    cin>>k;
    for(int i=0;i<12;i++) cin>>flowers_grows[i];
    sort(flowers_grows,flowers_grows+12);

    if(k==sum){
        cout<<ans<<endl;
        return 0;
    }
    for(int i=11;i>=0;i--){
        sum+=flowers_grows[i];
        ans++;
        if(k<=sum){
            cout<<ans<<endl;
            return 0;
        }
    }
    if(k>sum){
        cout<<"-1"<<endl;
    }
    return 0;
}
