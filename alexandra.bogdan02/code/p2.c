/*Segment Tree*/
#include <stdio.h>
#include<limits.h>

#define NMAX 1000002
#define INF 0x3f3f3f3f

long int aint[NMAX*3];
long int n,m,mx;
int min(int a,int b){
	if(a<b) return a;
	return b;
}
void update(long int nod, long int st, long int dr, long int poz, long int val)
{
if (st==dr) aint[nod]=val;
	else
	{
		long int mid=(st+dr)/2;

		if (poz<=mid) update(nod*2,st,mid,poz,val);
			else update(nod*2+1,mid+1,dr,poz,val);
		 aint[nod]=min(aint[nod*2],aint[nod*2+1]);
	}

}

void query(long int nod, long int st, long int dr, long int a, long int b)
{
	if (a<=st&&dr<=b) mx=min(mx,aint[nod]);
		else
		{
			long int mid=(st+dr)/2;

			if (a<=mid) query(nod*2,st,mid,a,b);
			if (b>mid) query(nod*2+1,mid+1,dr,a,b);
		}
}

int main()
{
	freopen("test.in","r",stdin);
	freopen("test.out","w",stdout);

	long int i,x,y,k;

	scanf("%ld %ld",&n,&m);

	for (i=1;i<=n;i++)
		{
			scanf("%ld",&x);
			update(1,1,n,i,x);
		}

	for (i=1;i<=m;i++)
		{
			scanf("%ld %ld",&x,&y);
			
			mx=INF;
			query(1,1,n,x,y);
			printf("%ld\n",mx);
			    
		}
	return 0;		
}