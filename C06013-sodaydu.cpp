#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1000];
		gets(s);
		int q = 0;
		int z=0,x=0,c=0,v=0,b=0,n=0,m=0,g=0,h=0,j=0;
		for(int i = 0; i < strlen(s);i++){
		if(s[0] == '0'){
		 q=1;
		  break;
		}
		else{
			if(s[i] < '0' || s[i] > '9'){
				q=1; break;
			}
			else{
			if(s[i] == '0') z=1;
			if(s[i] == '1') x=1;
			if(s[i] == '2') c=1;
			if(s[i] == '3') v=1;
			if(s[i] == '4') b=1;
			if(s[i] == '5') n=1;
			if(s[i] == '6') m=1;
			if(s[i] == '7') g=1;
			if(s[i] == '8') h=1;
			if(s[i] == '9') j=1;
			}
		}
		}
		if(q==1) printf("INVALID\n");
		else if(z ==1 && x==1 && c==1 && v==1 && b==1 && n==1 && m==1 && g==1 && h ==1 && j==1) printf("YES\n");
		else printf("NO\n");
	}
}

// #include<stdio.h>
// #include<math.h>
// #include<string.h>
// int kt(char a[])
// {
// 	long long b[1000]={0};
// 	if (a[0]=='0') return 0;
// 	for (long long i=0;i<strlen(a);i++) 
// 	{
// 		if (a[i]<='9' && a[i]>='0') 
// 		{
// 			b[(long long)a[i]]++;
// 		 } else return 0;
// 	}
// 	for (long long i=48;i<=57;i++) if (b[i]==0) return 2;
// 	return 1;
// }
// int main ()
// {
// 	long long t;
// 	scanf("%lld\n",&t);
// 	while (t--)
// 	{
// 		char a[10000];
// 		gets(a);
// 		if (kt(a)==0) printf("INVALID\n"); else if (kt(a)==1) printf("YES\n"); else printf("NO\n");
// 	}
// 	return 0;
// }