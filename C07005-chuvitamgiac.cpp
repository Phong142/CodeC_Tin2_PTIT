#include<stdio.h>
#include<math.h>
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c, d, e, f;
		scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
		float A = sqrt((a-c)*(a-c) + (d-b)*(d-b));
		float B = sqrt((a-e)*(a-e) + (f-b)*(f-b));
		float C = sqrt((c-e)*(c-e) + (f-d)*(f-d));
		if(A + B > C && A + C > B && B + C > A){
			printf("%.3lf\n", A+B+C);
		}
		else printf("INVALID\n");
	}
}