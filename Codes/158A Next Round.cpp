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
    int x,y,i,q=0;
	int p[51];
	
	scanf("%d %d",&x,&y);
	
	for(i=0;i<x;i++)
	{
		scanf("%d",&p[i]);
	}
	
	
	for(i=0;i<x;i++)
	{
		if(p[i]>=p[y-1]	&& p[i]!=0)
			q++;
	}
	printf("%d\n",q);
	
	return 0;
}
