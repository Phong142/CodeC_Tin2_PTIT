#include<stdio.h>
#include<string.h>

int main(){
	int n;
	while(1){
		scanf("%d", &n);
		if(n == 0) break;
		char S1[500], S2[500], S[500];
		scanf("\n");
		gets(S1);
		gets(S2);
		gets(S);
		int kt = 1;
		int dem = 0;
		while(1){
			if(kt == 0) break;
			dem++;
			if(dem > 50){
				kt = 0;
				break;
			}
			char S3[500]={0};
			int k = 0;
			for(int i = 0; i < 2*n;i++){
				if(i % 2 == 0) S3[i] = S2[k];
				else{
					S3[i] = S1[k];
					k++;
				}
			}
			if(strcmp(S3, S) == 0){
				kt = 1;
				break;
			}
			else{
				for(int i = 0; i < n;i++){
				S1[i] = S3[i];
				S2[i] = S3[i+n];
				}
			}
		}
		if( kt == 0) printf("-1\n");
		else printf("%d\n", dem);
	}
}