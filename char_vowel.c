#include <stdio.h>

int main(void) {
char a[1000];
int i,count=0;
scanf("%s",a);
for(i=0;a[i]!='\0';i++)
{
	if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
	count++;

}
printf("%d",count);
	return 0;
}
