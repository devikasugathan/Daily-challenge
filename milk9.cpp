# include<bits/stdc++.h>
using namespace std;
int main()
{
 int i,j,len,flag=1,k;
    char a[20];
    cin>>a;

    for(len=0;a[len]!='\0';++len);

    for(i=0,j=len-1;i<len/2;i++,j--)
    {
        if(a[j]!=a[i]) {
            flag=0;
            k++;
        }

    }

    if(k>1)
        cout<<"NO";
    else if(k==0&&len%2==0)
        cout<<"NO";
        else
        cout<<"YES";

    return 0;
} 
