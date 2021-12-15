#include <stdio.h>

int SoHoanHao[] = {6, 28, 496, 8128};

int main () {
	int n,m;
	scanf("%d%d",&n, &m);
	if(n>m){
		int tmp=n;
		n=m;
		m=tmp;
	}
	for (int i = 0; i <= 3; i++)    //n < sohoanhao < m
		if (n<=SoHoanHao[i] && m>=SoHoanHao[i])
			printf("%d ", SoHoanHao[i]);
}
