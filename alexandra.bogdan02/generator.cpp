#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *f1=fopen("test1.in","w");
  int n,m,j,x,y;
   printf("Enter N:");
   scanf("%d",&n);
   fprintf(f1,"%d ",n);
    printf("Enter M:");
    scanf("%d",&m);
    fprintf(f1, "%d",m);
     fprintf(f1, "\n");
   int randArray[1000001],i,q[100001][2];
   for(i=0;i<n;i++)
     fprintf(f1,"%d ", rand()%10000);
    
    fprintf(f1,"\n");
srand(time_t(NULL));
   for(i = 0; i < m;i++) {
    {
    	    
    		x=1+rand()%n;
    		y=1+rand()%n;
    		if(x == 0) x=1;
    		if(y == 0) y=1;
    		if(x>y){
    		    int aux=x;
    		    x=y;
    		    y=x;
    		}
    		fprintf(f1,"%d %d",x,y);
    	}
    	fprintf(f1,"\n");
    }
  fclose(f1);
   return 0;
}