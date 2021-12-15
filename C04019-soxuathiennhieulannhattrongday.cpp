#include<stdio.h>
#include<math.h>
#include<string.h>
int main ()
{
	long long t;
	scanf("%lld",&t);
	while (t--)
	{
		long long n,max=0;
		scanf("%lld",&n);
		long long a[101],b[10000]={0};
		for (long long i=0;i<n;i++)
		{
			scanf("%lld",&a[i]);
			b[a[i]]++;
			if (b[a[i]]>max) max=b[a[i]];
		}
		for (long long i=0;i<n;i++)	if(b[a[i]]==max)
		{
			printf("%lld ",a[i]);
			b[a[i]]=0;
		 } 
		 printf("\n");
	}
	return 0;
}