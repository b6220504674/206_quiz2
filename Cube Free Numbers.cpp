#include <iostream>
using namespace std;
int main() 
{
	int n,nn,i;
	cin>>n;
	for(i=2;i*i*i<n;i++);
	if(i*i*i==n)
	    cout<<"Not Cube Free";
	else
	    cout<<n-(i-2)<<endl;
}
