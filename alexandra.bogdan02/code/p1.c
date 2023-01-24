/*Solutia banala*/
#include <stdio.h>

long long a[1000005];
long long n,i,j,k,m;
long long x,y;

int main()
{
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);

	scanf("%lld %lld",&n,&m);

	for (i=0;i<n;i++)	
		scanf("%lld",&a[i]);

	for(i=0;i<m;i++)
	{
		scanf("%lld %lld",&x,&y);
		k=1000006;
		for (j=x;j<=y;j++)
			if(a[j]<=k) k=a[j];
		printf("%lld\n",k);
	}
	return 0;
}