#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--){
      int n,k;
      cin>>n>>k;
      if(k==0&&n%4==0) cout<<"Off"<<endl;
      else if((k==0)&&(n%4!=0)) cout<<"On"<<endl;
      else if(k==1&&n==0) cout<<"On"<<endl;
      else if(k==1&&n%4==0) cout<<"On"<<endl;
      else cout<<"Ambiguous"<<endl;
        
        
    }
    
	return 0;
}
