#include<stdio.h> 
#include<stdlib.h>


int main()
{ 
    int hour,minute;
	printf("�п�J�ɶ�: ");
	scanf("%d%d",&hour,&minute); 
	int hourtominute=hour*60;
	
	if(hourtominute+minute>=450&&hourtominute+minute<=1020)
	{
	printf("�{�b�O�W�Үɶ�\n");
	}
	else
	{
	printf("�{�b�O�U�Үɶ�\n");
    }
	
}
