/*Algoritmul lui Mo*/
#include <stdio.h>
#include<limits.h>

#define NMAX 1000002
#define INF 0x3f3f3f3f

long int a[NMAX],sq[NMAX];
long int rt;
long int n,m;
long int min(long int a,long int b){
	if(a<b) return a;
	return b;
}
long int max(long int a,long int b){
	if(a<b) return b;
	return a;
}

int main()
{
	freopen("in/test17.in","r",stdin);
	freopen("test.out","w",stdout);

	long int i,j,x,y,ls,ld;

	scanf("%ld %ld",&n,&m);

	for (i=1;i<=n;i++)
		scanf("%ld",&a[i]);

	for (rt=0;rt*rt<=n;rt++);
	rt--;

	for (i=1;rt*i<=n;i++)
		{
		sq[i]=INF;
		for (j=rt*(i-1)+1;j<=rt*i;j++)
			sq[i]=min(sq[i],a[j]);
		}

	for (i=1;i<=m;i++)
	{
		long int mn;
		mn=INF;
		scanf("%ld %ld",&x,&y);
		for (j=1;rt*j<x;j++);
		j++;
		ls=min(rt*(j-1),y);
		for (;rt*j<=y;j++)
			mn=min(mn,sq[j]);
		ld=max(rt*(j-1),x);

		for (j=x;j<=ls;j++)
			mn=min(mn,a[j]);
		for (j=ld;j<=y;j++)
			mn=min(mn,a[j]);
		printf("%ld\n",mn);
	}
	return 0;
}