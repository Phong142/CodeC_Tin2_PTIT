#include <stdio.h>
#include <string.h>
int main () {
	int t;
	scanf ("%d", &t);
	char s[20];
	for (int i=0; i<t; i++){
		scanf ("%s", &s);
		int count=0;
		for (int j=1; j<strlen(s); j++){
			if (s[j]<s[j-1]){
				printf ("NO\n");
				count++;
				break;
			}
		}
		if (count==0) printf ("YES\n");
	}
	return 0;
}