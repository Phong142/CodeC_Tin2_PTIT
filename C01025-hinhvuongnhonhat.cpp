#include<stdio.h>
#include<math.h>

int main(){
	int a[100], hoanh = 0, tung = 0;
	for(int i = 0; i < 8;i++) scanf("%d", &a[i]);
	for(int i = 0; i < 6;i++){
		if(i % 2 == 0){
			for(int j = i+2; j < 8;j += 2) 
				if(abs(a[i]-a[j]) > hoanh)
					hoanh =  abs(a[i]- a[j]);
		}
		else{
			for(int j = i+2; j < 8;j+=2)
				if(abs(a[i]-a[j]) > tung)
					tung = abs(a[i]- a[j]);
		}
	}
	if(hoanh > tung) printf("%d", hoanh*hoanh);
	else printf("%d", tung*tung);
}