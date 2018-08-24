# include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum=0;
	cin>>n;
	int f=0,s=1,t;
	for(int i=0;i<n;i++)
	{
	    t=f+s;
	    f=s;
	    s=t;
	    sum+=f;
	}

    cout<<sum;
}
