#include<bits/stdc++.h>
using namespace std;

int main() {
    int i;
    int j;
    int a[5][5];
    int s=0;
    for (i =1; i <= 5; i++)
    {
        for (j = 1; j <= 5; j++)
            {
              cin>>a[i][j];
            }
    }
    for (i = 1; i <= 5; i++)
    {
      for (j = 1; j <= 5; j++)
        {   if(a[i][j]==1)
           s = abs(i-3) + abs(j-3);
        }
    }
    cout<<s;
return 0;
}
