#include<stdio.h>
#include<math.h>
int prime(int n){
	if(n<=1) return 0;
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0) return 0;
	}return 1;
}
int main(){
    int test;
    scanf("%d", &test);
    for(int k=1; k<=test; k++){
	    int a;
	    scanf("%d",&a);
	    int mt[a][a];
	    int arr[a*a];
	    int sl=0;
	    for(int i=2;sl!=a*a;i++){
		    if(prime(i)==1){
			    arr[sl++]=i;
		    }
	    }
	    int d=0;int cot=a-1,hang=a-1;
	    int count=0;
	    while(d<=a/2){
		    for(int i=d;i<=cot;i++)mt[d][i]=arr[count++];
		    for(int i=d+1;i<=hang;i++)mt[i][cot]=arr[count++];
		    for(int i=cot-1;i>=d;i--)mt[hang][i]=arr[count++];
		    for(int i=hang-1;i>=d+1;i--)mt[i][d]=arr[count++];
		    d++;cot--;hang--;
	    }
        printf("Test %d:\n", k);
	    for(int i=0;i<a;i++){
		    for(int j=0;j<a;j++)
		    printf("%d ",mt[i][j]);
		    printf("\n");
	    }
    }
}