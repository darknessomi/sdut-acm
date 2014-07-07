#include <stdio.h>
int main()
{
	int year, month, day;
	scanf("%d\\%d", &year, &month);
	if(year%4 == 0 && year%100 != 0 || year%400 == 0)
        day=29;
    else
        day=28;
    switch(month){
		case 1:printf("31");break;
		case 2:printf("%d",day);break;
		case 3:printf("31");break;
		case 4:printf("30");break;
		case 5:printf("31");break;
		case 6:printf("30");break;
		case 7:printf("31");break;
		case 8:printf("31");break;
		case 9:printf("30");break;
		case 10:printf("31");break;
		case 11:printf("30");break;
		case 12:printf("31");break;
	}
	return 0;
}
