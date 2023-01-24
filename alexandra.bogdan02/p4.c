/*Sparse Table*/
#include <stdio.h>

#define NMAX 1000002
#define LMAX 190
#define min(a, b) ((a) < (b) ? (a) : (b))

long int rmq[LMAX][NMAX];
long int n,m;
long int lg[NMAX];
long int a[NMAX];

int main()
{
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);

	long int i,j,l;

	scanf("%ld %ld",&n,&m);

	for (i=1;i<=n;i++)
		scanf("%ld ",&a[i]);

	lg[1]=0;
	for (i=2;i<=n;i++)
		lg[i]=lg[i/2]+1;

	for (i=1;i<=n;i++)
		rmq[0][i]=a[i];

	for (i=1; (1 << i) <=n;i++)
		for (j=1;j <= n - (1 << i)+1;j++)
		{
		l=1<<(i-1);
		rmq[i][j]= min( rmq[i-1][j] , rmq[i-1][j+l] );
		}

	long int x,y,diff,sh;
	
	for (i=1;i<=m;i++)
	{
		scanf("%ld %ld",&x,&y);
		
		diff=y-x+1;
		l=lg[diff];
		sh=diff - (1<<l);
		printf("%ld\n",min(rmq[l][x],rmq[l][x+sh]) );
	}	
	return 0;
}