#include <iostream>
#include <vector>

using namespace std;

int main(){
	long n,k,t;
	cin>>n>>k>>t;
	if(t >= k && t<=n){
		cout<<k<<endl;
	}
	else if(t<k){
		cout<<t<<endl;
	}
	else if(t>n){
		cout<<k-(t%n)<<endl;
	}
	return 0;
}