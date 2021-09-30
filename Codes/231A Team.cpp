/**
  * Author     : Jubayer Abdullah Joy
  *              CSE, 5th Batch, University of Barishal
  * Mail       : jubayerjoy98@gmail.com
  * Codeforces : Joy
  * Github     : github.com/JubayerJoy
  * Problem    : 
  *
  */

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int t, a,b,c,j=0;
	
	scanf("%d",&t);
	
	while(t--)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a+b+c == 2|| a+b+c== 3)
		{
			j++;
		}
	}
	printf("%d\n",j);
	
	return 0;
}
