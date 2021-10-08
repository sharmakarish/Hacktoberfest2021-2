#include <iostream>
using namespace std;

int main() {
	int t,m,n,k;
	cin>>t;
	while(t--){
	    cin>>m>>n>>k;
	    if(n*k < m){
	        cout<<"Yes"<<endl;
	    }
	    else
	    cout<<"No"<<endl;
	}
	return 0;
}
