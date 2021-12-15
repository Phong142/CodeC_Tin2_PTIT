#include<stdio.h>
#include<string.h>

typedef struct sinhvien{
	int ma;
	char ten[100];
	char ns[100];
	double d1, d2;
}SV;
void nhap(SV sv[], int n){
	int m = n;
	int i = 0, sr = 1;
	while(m--){
		sv[i].ma = sr;
		sr++;
		fgets(sv[i].ten, 40, stdin);
		sv[i].ten[strlen(sv[i].ten)-1] = '\0';
		fgets(sv[i].ns, 40, stdin);
		sv[i].ns[strlen(sv[i].ns)-1]= '\0';
		scanf("%lf%lf\n", &sv[i].d1, &sv[i].d2);
		i++;
	}
}

void giamdan(SV sv[], int n){
	for(int i = 0; i < n-1;i++){
		for(int j = i+1; j < n;j++){
			if(sv[i].d2 - sv[i].d1 < sv[j].d2 - sv[j].d1){
				SV tmp = sv[i];
					sv[i] = sv[j];
					sv[j] = tmp;
			}
		}
	}
	for(int i = 0; i < n; i++){
		printf("%d %s %s %.2lf\n", sv[i].ma, sv[i].ten, sv[i].ns, sv[i].d2 - sv[i].d1);
	}
}

int main(){
	SV sv[1000];
	int n;
	scanf("%d\n", &n);
	nhap(sv, n);
	giamdan(sv, n);
}