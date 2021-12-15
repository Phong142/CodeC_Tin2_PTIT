#include<stdio.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>

int checkSmaller(char a[],char b[])
{
	int la = strlen(a);
	int lb = strlen(b);
	if(la < lb) return 1;
	if(la > lb) return 0;

	for (int i = 0; i < la; i++)
        if (a[i] < b[i])
            return 1;
        else if (a[i] > b[i])
            return 0;
 
    return 0;
}

void timHieu(char s1[], char s2[])
{
    
 	char str[1002];
	str[0] = '\0';
	int j = 0;
    int n1 = strlen(s1), n2 = strlen(s2);
    for (int i = 0, j = n1 - 1; i < j; i++, j--)
    {
        char ch = s1[i];
        s1[i] = s1[j];
        s1[j] = ch;
    }
    for (int i = 0, j = n2 - 1; i < j; i++, j--)
    {
        char ch = s2[i];
        s2[i] = s2[j];
        s2[j] = ch;
    }

    int rmb = 0;
    for (int i = 0; i < n2; i++) 
	{
        int tmp = ((s1[i] - '0') - (s2[i] - '0') - rmb);
        if (tmp < 0) 
		{
            tmp += 10;
            rmb = 1;
        }
        else
            rmb = 0;
 
        str[j++] = (tmp + '0');
    }
    for (int i = n2; i < n1; i++) 
	{
        int tmp = ((s1[i] - '0') - rmb);
		if (tmp < 0) 
		{
            tmp += 10;
            rmb = 1;
        }
        else
            rmb = 0;
 
        str[j++] = (tmp + '0');
        
    }
    for (int i = 0, k = j - 1; i < k; i++, k--)
    {
        char ch = str[i];
        str[i] = str[k];
        str[k] = ch;
    }

    // không hiểu sao để như này WA
    //for(int i=0; i<=j-1; i++) 
    // {
    //     if(str[i] == '0') continue;
    //     printf("%c",str[i]);
    // }

    // để như này mới AC
    int i = 0;
    if(str[0] == '0') i++;
    for(int k=i; k<=j-1; k++) 
    {
        printf("%c",str[k]);
    }
}

int main()
{
    int t; scanf("%d",&t);
	getchar();
	char a[1002],b[1002];
	while(t--)
	{
		scanf("%s%s",&a,&b);
        if (checkSmaller(a,b))
        {
            timHieu(b,a);
        }
		else timHieu(a,b);
		printf("\n");

	}
}