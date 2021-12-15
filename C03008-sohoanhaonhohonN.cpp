#include <stdio.h>
#include <math.h>

int uoc(int n){
	int sum=0;
	for(int i=1; i<=sqrt(n); i++){
		if(n%i==0){
			sum+=i;
			if(i*i==n || n/i==n) continue;
			else 
				sum+=n/i;
		}
	}
	if(sum==n) return 1;
	else return 0;
}
int main(){
	int n;
	scanf("%d", &n);
	for(int i=2; i<n; i++){
		if(uoc(i)==1){
		printf("%d ", i);
		}
	}
}
//#include<stdio.h>
//#include<math.h>
//int hoanHao(int a){
//	int sum=0;
//	for(int i=1;i<=sqrt(a);i++){
//		if(a%i==0){
//			sum=sum+i;
//			if(i*i==a||a/i==a)continue;
//			else sum+=a/i;
//		}	
//	}
//	if(sum==a)return 1;
//	else return 0;
//}
//int main(){
//	int n;
//	scanf("%d",&n);
//	for(int i=2;i<=n;i++){
//		if(hoanHao(i)==1)printf("%d ",i);
//	}
//}

