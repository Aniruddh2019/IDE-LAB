#include<stdio.h>
int main()
{
	int rollno,s1,s2,s3,s4,s5,s6,phone;
	float avg,percentage;
	char name[20],address[20];
	
	printf("\n Enter roll no ");
	scanf("%d",&rollno);
	printf("\n Enter name ");
	scanf("%s",name);
	printf("\n Enter address ");
	scanf("%s",address);
	printf("\nEnter marks of each subject ");
	printf("\n Enter maths marks ");
	scanf("%d",&s1);
	printf("\n Enter physics marks ");
	scanf("%d",&s2);
	printf("\n Enter chemistry marks ");
	scanf("%d",&s3);
	printf("\n Enter english marks ");
	scanf("%d",&s4);
	printf("\n Enter C Programming marks ");
	scanf("%d",&s5);
	printf("\n Enter C++ Programming marks ");
	scanf("%d",&s6);
	
	
	avg=(s1+s2+s3+s4+s5+s6)/6.0;

	percentage=((s1+s2+s3+s4+s5+s6)/600.0)*100;
	
	printf("\n Details of Student are:");
	printf("\n Roll No = %d",rollno);
	printf("\n Name = %s",name);
	printf("\n Address = %s",address);
	printf("\n Maths marks = %d",s1);
	printf("\n Physics Marks = %d",s2);
	printf("\n Chemistry Marks = %d",s3);
	printf("\n English Marks = %d",s4);
	printf("\n C Programming Marks = %d",s5);
	printf("\n C++ Programming Marks = %d",s6);
	printf("\n Average = %.2f",avg);
	printf("\n Percentage = %.2f  ",percentage);
	
}
