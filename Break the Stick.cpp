#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x;
	    cin>>n>>x;
	    
	    if(n%2!=0 && x%2==0)
	    {
	        cout<<"NO" <<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
return 0;
}
