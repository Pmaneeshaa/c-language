#include<stdio.h>
#include<conio.h>
int main()
{
	char name[20],emailid[15],password[7],confirm_password[9],source[10],destination[10];
	int kilometers,date,i;
	int mobileno[10];
	float amount;

	printf("REGESTRATION");
	printf("enter name");
	scanf("%s",name);
	
	printf("enter email id");
	scanf("%s",emailid);
	
	printf("enter password");
	scanf("%s",password);

	printf("enter conform password");
	scanf("%s",confirm_password);

	printf("enter mobile no");
	scanf("%d",&mobileno);
if (confirm_password==password)
{
	printf("tarrif menu");
	printf("\n");
	printf("enter 1 for day time or enter 2 for night time");
	scanf("%d",&i);
	switch(i)
{
	case 1:
		printf("day time\n timings 6 to 8\ncost 29rs\km");
		break;
		case 2:
			
				printf("night time\n timings 8 to 6\n cost 25rs\km ");
				break;
				default:
					printf("enter valid no");
				}
			
	
}
else
{
	printf("enter valid data");
}
printf( "enter the source\n");
scanf("%s",source);
printf("enter the destination");
scanf("%s",destination);
printf("enter the no of kilometers");
scanf("%d",&kilometers);
if(i=1)
{
	printf("total amount:%d\n",(kilometers*29));
}
else
 { 
 printf("total amount:%d\n",(kilometers*25));
}
printf("enter date\n");
scanf("%d",&date);
printf("THANK YOU");
return 0;
}



