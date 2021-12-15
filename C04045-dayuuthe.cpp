#include<stdio.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int a[200], l = 0, c=0, i= 0;
		char ch;
		do{
			scanf("%d", &a[i]);
			if(a[i] % 2 == 0) c++;
			else l++;
			i++;
			ch = getchar();
		}
		while(ch != '\n');
		if( i % 2==0 && c > l || i %2 ==1 && l >c) printf("YES\n");
		else printf("NO\n");
	}
}