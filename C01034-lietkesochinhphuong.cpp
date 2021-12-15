#include <stdio.h>
#include <math.h>

int main(){
	int m,n;
	scanf("%d%d", &m, &n);
	int x=sqrt(m), y=sqrt(n);    
	int count=0;
	if(x*x==m && y*y<=n)         // can bac 2 cua m và n  
		count=y-x+1;			// 4 9
//	else if(x*x==m && y*y!=n || x*x!=m && y*y==n)
//		count=y-x;
	else
		count=y-x;				// 5 8
	printf("%d\n", count);
	for(int i=sqrt(m); i<=sqrt(n); i++){
		if(i*i>=m)
			printf("%d\n", i*i);
	}	
}
//#include<stdio.h>
//#include<math.h>
//
//int main(){
//	int m,n;
//	scanf("%d%d",&m,&n);
//	int max,min;
//	int a=sqrt(m),b=sqrt(n);
//	if(a*a==m)	min=a;
//	else	min=a+1;
//	max=b;
//	printf("%d\n",max-min+1);
//	for(int i=min;i<=max;i++)	printf("%d\n",i*i);
//}


