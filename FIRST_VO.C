#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
	int vcount=0,ccount=0,i,len;
	char str[150];
	clrscr;

	printf("enter any string :");
	gets(str);
	len=strlen(str);

	for(i=0;i<len;i++){
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='z')){
			if(str[i]=='a'|| str[i]=='e'|| str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A'||
			str[i]=='A' || str[i]=='E'|| str[i]=='I' || str[i]=='O' || str[i]=='U'){
				vcount++;

			}
			else{
				ccount++;
			}

		}

	}

	printf("\nnumber of vowels : %d",vcount);
	printf("\nnumber of consonents : %d",ccount);

	getch();
	return 0;
}