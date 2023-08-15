#include <bits/stdc++.h>
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define ll long long
using namespace std;
void solve(){
   string s;
   cin>>s;
   string s2 = s;
   reverse(s2.begin(), s2.end());
   if(s != s2){
     cout<<"NO"<<endl;
     return ;
   }
   for(int i = 0; i<s.size(); i++){
        if(s[i] == 'A' || s[i] == 'H' ||s[i] == 'I' ||s[i] == 'M' ||s[i] == 'O' ||s[i] == 'T' ||s[i] == 'U' ||s[i] == 'V' ||s[i] == 'W' ||s[i] == 'X' ||s[i] == 'Y' ){
           continue;
        }
        else{
            cout<<"NO"<<endl;
            return ;
        }
   }
   cout<<"YES"<<endl;

    return ;

}


int main() {
   solve();


    return 0;
}
