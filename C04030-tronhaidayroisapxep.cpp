#include<stdio.h>
main(){
	int n,A[100],B[100],m;
	scanf("%d",&n);
	for(int k=1;k<=n;k++){
		printf("Test %d:\n",k);
		scanf("%d",&m);
		int t=2*m,a=0,b=0;
		for(int i=0;i<m;i++) scanf("%d ",&A[i]);
		for(int i=0;i<m;i++) scanf("%d ",&B[i]);
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				if(A[i]>A[j]){
					int tg=A[i];
					A[i]=A[j];
					A[j]=tg;
				}
			}
		}
		for(int i=0;i<m;i++){
			for(int j=i+1;j<m;j++){
				if(B[i]<B[j]){
					int tg=B[i];
					B[i]=B[j];
					B[j]=tg;
				}
			}
		}
		for(int f=0;f<t;f++){
			if(f%2==0){
				printf("%d ",A[a]);
				a++;
			}
			else{
				printf("%d ",B[b]);
				b++;
			}
		}
		printf("\n");
	}
}