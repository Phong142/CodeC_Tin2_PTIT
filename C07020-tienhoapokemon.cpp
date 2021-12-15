#include<stdio.h>
#include<string.h>

typedef struct pokemon{
	char ten[100];
	int d1, d2;
}P;
void nhap(P sv[], int n){
	int m = n;
	int i = 0;
	while(m--){
		fgets(sv[i].ten, 40, stdin);
		sv[i].ten[strlen(sv[i].ten)-1] = '\0';
		scanf("%d%d\n", &sv[i].d1, &sv[i].d2);
		i++;
	}
}

void check(P sv[], int n){
	int dem = 0, t = 0;
	int max = 0, a[100];
	for(int i = 0 ; i < n;i++){
		int min = 0;
		while(sv[i].d2 >= sv[i].d1){
			sv[i].d2 = sv[i].d2 - sv[i].d1 + 2;
	 		dem++;
			min++;
		}
		a[i] = min;
		if(a[i] > max) max = a[i];
	}
	if(dem) printf("%d\n", dem);
	for(int i = 0;i < n;i++){
		if(max == a[i]){
		printf("%s\n", sv[i].ten);
		break;
		}
	}
}

int main(){
	P sv[100];
	int n;
	scanf("%d\n", &n);
	nhap(sv, n);
	check(sv, n);
}