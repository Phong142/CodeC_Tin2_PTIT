#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		float a, b, c, d;
		scanf("%f%f%f%f", &a, &b, &c, &d);
		float x = (c-a)*(c-a) + (d-b)*(d-b);
		printf("%.4f\n", sqrt(x));
	}
}