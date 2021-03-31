#include <iostream>
using namespace std;
int main() 
{
	int n,line,i,j,k,x,y,lo;
	cin>>line;
	cin>>n;
	char silk[line][70];
	for(i=0;i<line;i++)
	    for(j=0;j<70;j++)
	    silk[i][j]='o';
	for(i=0;i<n;i++)
	{
		cin>>x>>y>>lo;
		for(j=0;j<lo&&j+y-1<=70;j++)
	        silk[x-1][y+j-1]='x';	    
	}
	for(k=0;k<line;k++)
	{
		for(j=0;j<70;j++)
		    cout<<silk[k][j];
		cout<<endl;   
	}	
}
