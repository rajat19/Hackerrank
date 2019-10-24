#include<stdio.h>
int main()
{
	int i,hh,mm;
	char *s[30]={"one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty","twenty one","twenty two","twenty three","twenty four","twenty five","twenty six","twenty seven","twenty eight","twenty nine","thirty"};
	//printf("\n enter the time(hh : mm) in numeral:");
	scanf("%d%d",&hh,&mm);
	if(mm==0)
		printf("%s o' clock",s[hh-1]);
	if(mm==30)
		printf("half past %s ",s[(hh-1)]);
	if(mm<30&&mm!=15)
		printf("%s minutes past %s",s[mm-1],s[(hh-1)]);
	if(mm>30&&mm!=45)
		printf("%s minutes to %s",s[60-mm-1],s[hh]);
    if(mm==15)
        printf("quarter past %s",s[hh-1]);
	if(mm==45)
		printf("quarter to %s ",s[hh]);
	return 0;
}