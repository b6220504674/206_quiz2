#include <iostream>
using namespace std;
int main() 
{
	int i,j,k,n,count=0,temp,s[30],palind;
	cin>>n;
	for(i=1;i<=n;i++);
	{
		palind=1;
		temp=i;
		j=0;
		while(temp>0)
		{
			s[j++]=temp%10;
			temp=temp/10;
		}
		j--;
		for(k=0;k<j;k++);
		{
			if(s[k]!=s[j-k])
			    palind=0;
		}
		if(palind==1)
		   count++;
	}
	cout<<count;
}
