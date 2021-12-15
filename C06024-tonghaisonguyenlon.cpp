#include<stdio.h>
#include<string.h>
void dao (char a[])
{
	char b[1000];
	long long j=0;
	for (long long i=strlen(a)-1;i>=0;i--)
	{
		b[j]=a[i];
		j++;
	 } 
	 b[strlen(a)]='\0';
	 strcpy(a,b);
}
void  t_tong(char a[],char b[])
{
	dao(a); dao(b);
     int i,k;
     char tong[1000];
     for(i = 0; i < 1000; i++)
         tong[i] = 0;
         
    if(strlen(a) > strlen(b)) for(i = strlen(b); i < strlen(a); i++) b[i] = '0';
    if(strlen(b) > strlen(a)) for(i = strlen(a); i < strlen(b); i++) a[i] = '0';
                 
     int nho = 0;
   //  if(strlen(a) >= strlen(b)) k = strlen(a);
     //   else k = strlen(b);
       k = strlen(a);
     for(i = 0; i < k; i++)
     {
         tong[i] = ((a[i] - 48) + (b[i] - 48) + nho)%10 + 48;
         nho = ((a[i] - 48) + (b[i] - 48) + nho)/10;
     }

     if(nho > 0) tong[k] = nho + 48;
	 dao(tong);  
	 printf("%s\n", tong); 
} 
int main(){
	int t;
	scanf("%d\n", &t);
	while(t--){
		char a[500];
		char b[500];
		gets(a);
		gets(b);
		t_tong(a,b);
	}
}

// #include<stdio.h>
// #include<string.h>
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		char s1[1000],s2[1000],s[1000]=" ";
// 		scanf("\n");
// 		gets(s1),gets(s2);
// 		if(strlen(s2) > strlen(s1)){
// 			char tmp[1000];
// 			strcpy(tmp,s1);
// 			strcpy(s1,s2);
// 			strcpy(s2,tmp);
// 		}
// 		int len1=strlen(s1)-1,len2=strlen(s2)-1,mem=0,i=0;
// 		while (len1>=0){
// 			int sum;
// 			if(len2>=0) sum= s1[len1--]-'0' + s2[len2--]-'0' +mem;
// 			else sum= s1[len1--]-'0' +mem;
// 			if (sum < 10){
// 				s[i++]= sum +'0';
// 				mem=0;
// 			}
// 			else {
// 				s[i++]= (sum%10) + '0';
// 				mem=1;
// 			}
// 		}
// 		if (mem==1) s[i++]='1';
// 		s[i]='\0';
// 		for (int j=i-1; j>=0; j--) printf("%c",s[j]);
// 		printf("\n");
// 	}
// }