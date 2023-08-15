#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;
void solve(){
    int n; cin>>n;
    int ans = 0;

    int a[n+7], b[n+7];
    for(int i=0; i<n; i++)cin>>a[i];
    for(int i=0; i<n; i++)cin>>b[i];

    map<int, int> m;
    int cnt = 1;

    for(int i=1; i<n; i++){
       if(a[i-1] == a[i])cnt++;
       else{
            if(!m[a[i-1]] || m[a[i-1]] < cnt) m[a[i-1]] = cnt;
            ans = max(ans, m[a[i-1]]);
            cnt = 1;
       }
    }

   if(!m[a[n-1]] || m[a[n-1]] < cnt) m[a[n-1]] = cnt;
   ans = max(ans, m[a[n-1]]);
   cnt = 1;

   for(int i=1; i<n; i++){
       if(b[i-1] == b[i])cnt++;
       else{
            ans = max(ans, m[b[i-1]] + cnt);
            cnt = 1;
       }


    }
    ans = max(ans, m[b[n-1]] + cnt);
    cout<<ans<<endl;

}


int main() {
    int t;
    cin>> t;
    while(t--){
        solve();

    }



    return 0;
}
