#include<stdio.h>
#include<math.h>
int main ()
{
	int t,h;
	scanf("%lld",&t);
	h=t;
	while (t--)
	{
		int n,d=0,max=0,k=0;
		scanf("%d",&n);
		int a[n+1],b[1000];
		a[0]=-999999999;
		for(int i = 1; i <= n;i++){
			scanf("%d", &a[i]);
			if(a[i] > a[i-1]){
				d++;
				if(d > max){
					k = 0; 
					b[k] = i;
					max = d;
				} else if( d == max){
					k++;
					b[k] = i;
				}
			} else d = 1;
		}
		printf("Test %d:\n", h-t);
		printf("%d\n", max);
		for( int i = 0; i <= k;i++){
			for(int j = b[i]-max+1; j <= b[i];j++) printf("%d ", a[j]);
			printf("\n");
		}
	}
	return 0;
}