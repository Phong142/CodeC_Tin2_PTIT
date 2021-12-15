#include<stdio.h>
#include<string.h>

// truong hop 1:tang chat
int check1 (char s[])
{
	int i;
	
	for (i=0; i<strlen(s)-2; i++) 
	{
		if (s[i]>=s[i+1]) return 0;
	}
	
	return 1;
}

// truong hop2: 5 so bang nhau
int check2 (char s[]) 
{
	int i;
	for (i=0; i<strlen(s)-2; i++) {
		if (s[i]!=s[i+1]) return 0;
	}
	return 1;
}

// truong hop 3: 3 so dau = nhau, 2 so cuoi = nhau
int check3(char s[])
{
	if (s[0]==s[1] && s[1]==s[2] && s[3]==s[4]) 
	return 1;
	return 0; 
	
}

//truong hop 4: so loc phat
int check4 (char s[]) 
{
	int i;
	for (i=0; i<strlen(s)-2; i++)
	{
		if (s[i]!='6' && s[i]!='8') return 0;
	}
	return 1;
}

// chuong trinh chinh
int main ()
{
	int t;
	scanf("%d\n", &t);
	while (t--) {
	//	char temp;
		char s1[10], s2[10];
	//	gets(s);
	scanf("%s", &s1);
	scanf("%s", &s2);
	
	
     	s2[3]=s2[4]; s2[4]=s2[5]; 
		if (check1(s2)==1 || check2(s2)==1 || check3(s2)==1 || check4(s2)==1) printf("YES\n");
		else printf("NO\n");
		
	}
	return 0;
}

// #include<stdio.h>
// #include<string.h>

// int check1(char s[1010] , int n){
// 	for(int i=6; i<n-1; i++){
// 		if (s[i] >= s[i+1]) return 0;
// 	}
// 	return 1;
// } 

// int check2(char s[1010], int n){
// 	for(int i=6; i<n; i++){
// 		if (s[i]!='8' && s[i]!='6') return 0;
// 	}
// 	return 1;
// } 
// int check3(char s[1010],int n){
// 	for(int i=6; i<n; i++){
// 		for(int j=i+1; j<n;j++){
// 			if(s[j]!=s[i]) return 0;
// 		}
// 	}
// 	return 1;
// } 
// int check4(char s[1010]){
// 	if(s[6]==s[7] && s[7]==s[8] && s[9]==s[10]) return 1;
// 	return 0;
// } 
// int main(){
// 	int t;
// 	scanf("%d",&t);
// 	while(t--){
// 		char s[1010];
// 		scanf("\n");
// 		gets(s);
// 		int n=strlen(s);
// 		for (int i=9; i<n; i++){
// 			s[i]=s[i+1];
// 		}
// 		n--;
// 		if (check1(s,n)) printf("YES");
// 		else if (check2(s,n)) printf("YES");
// 		else if (check3(s,n)) printf("YES");
// 		else if (check4(s)) printf("YES");
// 		else printf("NO");
// 		printf("\n");
// 	}
// }