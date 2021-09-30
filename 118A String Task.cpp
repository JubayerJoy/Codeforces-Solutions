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
    int i,lenght;
	char a[103];
	
	scanf("%s", a);
	
	lenght = strlen(a);
	for(i=0;i<lenght;i++)
	{
		if(a[i]!='a'&&a[i]!='A'&&a[i]!='e'&&a[i]!='E'&&a[i]!='i'&&a[i]!='I'&&a[i]!='o'&&a[i]!='O'&&a[i]!='u'&&a[i]!='U'&&a[i]!='y'&&a[i]!='Y')
		{	
			if(a[i]>='A'&&a[i]<='Z')
				printf(".%c",a[i] + 32);
			else
				printf(".%c",a[i]);
		}
	}
	printf("\n");
	
	return 0;

    return 0;
}
