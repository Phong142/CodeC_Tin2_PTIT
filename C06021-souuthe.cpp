#include<stdio.h>
#include<string.h>

int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char s[1000];
		gets(s);
		int i, q = 0, c=0, l=0, L;
		L=strlen(s);
		for(i = 0; i < strlen(s);i++){
		if(s[0] == '0'){
		 q=1;
		  break;
		}
		else if(s[i] < '0' || s[i] > '9'){
				q=1; break;
			}	
		}
		for (i=0; i<strlen(s); i++) 
		{
			if ((int)s[i]%2==0)	c++; else l++;
		}
		if (q==1) printf("INVALID");
			else if ((c>l && L%2==0) ||(l>c) &&L%2!=0) printf("YES");
				else printf("NO");
		printf("\n");
		}
		return 0;
}

// #include<stdio.h>
// #include<string.h>

// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		char s[1010];
// 		scanf("\n");
// 		gets(s);
// 		int len=strlen(s);
// 		int b[1000]={},d=0,chan=0,le=0;
// 		if(s[0]=='0') printf("INVALID");
// 		else{
// 			for (int i=0; i<strlen(s);i++){
// 				if (s[i]>='0' && s[i]<='9'){
// 					b[(long long)s[i]]++;
// 				}
// 				else {
// 					d++;
// 					break;
// 				}
// 			}
// 			if(d==1) printf("INVALID");
// 			else{
// 				for(int i=48; i<58; i++){
// 					if(b[i]!=0){
// 						if(i%2==0) chan+= b[i];
// 						else le+=b[i];
// 					}
// 				}
// 				if (len % 2 ==0 && chan > le) printf("YES");
// 				else if (len % 2 !=0 && le > chan) printf("YES");
// 				else printf("NO");
// 			}
// 		}
// 		printf("\n");
// 	}
// }