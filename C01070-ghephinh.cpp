#include<stdio.h>
int main () 
{
	int a[10];
	int i,j,k;
	int S=0, r=0;
	for (i=0; i<6; i++) 
		scanf("%d", &a[i]);
	int max =a[0];
	for (i=0; i<6; i++) 
	{
		if (max < a[i])
            max = a[i];
	}
	for (i=0; i<2; i++) 
		for (j=2; j<4; j++) 
			for (k=4; k<6; k++) 
			{
				if (((a[i]+a[j])==max) || ((a[i]+a[k])==max)|| ((a[k]+a[j])==max))
					S++;
				if ((a[i]==a[j]) &&(a[i]==a[k]))
					r++;
			}
			
	int SHV=max*max, DT=a[1]*a[0]+a[2]*a[3]+a[4]*a[5];  

	if ( (DT==SHV && S==5 ) ||  (DT==SHV && r!=0)) 
		printf("YES\n");
		else printf("NO\n");
	return 0;
}