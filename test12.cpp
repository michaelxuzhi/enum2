# include <stdio.h>
# include <conio.h>

int main (void)
{
	enum month{January,February,March,April,May,June,July,August,September,October,November,December};
	char* name[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
	int count[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
	int year,i;

	printf("«Î ‰»ÎƒÍ∑›:");
	scanf ("%d",&year);
	if (((year%4 == 0) && (year%100 != 0)) || year%400 == 0) count[1]++;

	for (i = January ; i <= December; i++)
	{
		printf("%s:%d\n",name[i],count[i]);
	}
	
	getch();
	return 0;
}