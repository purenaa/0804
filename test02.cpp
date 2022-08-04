#include <stdio.h>

enum Days{SUN,MON,TUE,WED,THU,FRL,SAT};
int main()
{
	int i;
	printf("Input the date(0~6):");
	scanf("%d", &i);	//call by reference

	if (i == SUN || i == SAT)
	printf("Tanks God, It's holiday\n");

	else
	printf("Whoops, It's working day\n");
	return 0;
}
