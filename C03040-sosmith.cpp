#include<stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int ss=0;
	for(int i = a ; i > 0 ; i /= 10){
		ss+=i%10;
	}
	int s=0;
	while(a % 2 ==0){
		s += 2;
		a /= 2; 
	}
	for(int i = 3 ; a > 1 ; i += 2){			
		while(a%i==0){	
			for(int j = i ; j > 0 ; j/=10){
				s+=j%10;
			}
			a/=i;						
		}
	}
	if(s==ss)	printf("YES");
	else 		printf("NO");
	return 0;
}