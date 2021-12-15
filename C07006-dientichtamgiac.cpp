#include<stdio.h>
#include<math.h>

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		double a, b, c, d, e, f;
		scanf("%lf %lf %lf %lf %lf %lf", &a, &b, &c, &d, &e, &f);
		double A = sqrt((a-c)*(a-c) + (d-b)*(d-b));
		double B = sqrt((a-e)*(a-e) + (f-b)*(f-b));
		double C = sqrt((c-e)*(c-e) + (f-d)*(f-d));
		if(A + B > C && A + C > B && B + C > A){
			double P = (A+B+C)/2;
			double S = P*(P-A)*(P-B)*(P-C);
			printf("%.2lf\n", sqrt(S));
		}
		else printf("INVALID\n");
	}
}