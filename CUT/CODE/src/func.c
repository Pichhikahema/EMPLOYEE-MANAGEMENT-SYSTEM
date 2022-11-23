/*****************************************************************************************
 *
 * FILE NAME   : func.c
 *
 * DESCRPITION : This file defines the functions in the employee menu 
 *               to perform various operations in the employee database
 *
 ******************************************************************************************/     

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "ems_header.h"


emp *start,*new,*ptr,*prev,*last;

int add_emp_details()
{
	if((new=(emp *)calloc(1,sizeof(emp)))==NULL)
	{
		printf("\nmemory allocation failure\n");
		return EXIT_FAILURE;
	}

	//validating employee id is not duplicate
	while(1)
	{
		printf("Enter emp id:\n");
		scanf("%d",&new->emp_id);
		if(start)
		{
			for(ptr=start;(ptr) && ptr->emp_id!=new->emp_id;ptr=ptr->next);
			if((ptr) && ptr->emp_id==new->emp_id)
			{
				printf("\nemp id %d is duplicate\n",new->emp_id);
				continue;
			}
			else
				break;
		}
		else
		{
			break;
		}
	}


	//validating the employee name is not duplicate
	
	while(1)
	{
		printf("Enter employee name:\n");
		scanf("%s",new->emp_name);
		if(strlen(new->emp_name)>20)
		{
			printf("\nEmployee name should not be greater than 20 characters\n");
			continue;
		}
		if(alpha_valid(new->emp_name)==1)
		{
			printf("\nName should have alphabets only\n");
			continue;
		}
		else
			break;
	}

	//validating phone number
	while(1)
	{
		printf("Enter phone number:\n");
		scanf("%s",new->phone_number);
		if(strlen(new->phone_number)!=10)
		{
			printf("\nphone number should  be 10 digits\n");
			continue;
		}
		if(digit_valid(new->phone_number)==1)
		{
			printf("\nphone number should have digits  only\n");
			continue;
		}
		else
			break;
	}

	//entering gender details
	while(1)
	{
		char gender[10];
		printf("\nEnter gender:\n");
		scanf("%s",&new->gender);
		if((strcmp(new->gender,"M")==0 || strcmp(new->gender,"m")==0 ||strcmp(new->gender,"f")==0 || strcmp(new->gender,"F")==0))
		{
			break;
		}
		else
		{
			printf("gender should be either f or m");
			continue;
		}

	}



	while(1)
	{
		printf("Enter address:\n");
		scanf("%s",new->address);
		if(strlen(new->address)>30)
		{
			printf("\naddres should not be greater than 30 characters\n");
			continue;
		}
		else
			break;
	}
	printf("Enter work hours:\n");
	scanf("%d",&new->work_hrs);
		
	printf("Enter no.of projects :\n");
	scanf("%d",&new->no_projects);
	/*while(1)
	{
		printf("Enter work hours:\n");
		scanf("%d",&new->work_hrs);
		if(digit_valid(new->work_hrs)==1)
		{
			printf("\nsalary should have digits  only\n");
			continue;
		}
		else
			break;

	}
	while(1)
	{
		printf("Enter no.of projects :\n");
		scanf("%d",&new->no_projects);
		if(digit_valid(new->no_projects)==1)
		{
			printf("\nsalary should have digits  only\n");
			continue;
		}
		else
			break;

	}*/





	if(!start)
	{
		start=new;
		new->next=NULL;
	}
	else if(new->emp_id<start->emp_id)
	{
		new->next=start;
		start=new;
	}
	else
	{
		for(ptr=start;(ptr) && ptr->emp_id < new->emp_id;prev=ptr,ptr=ptr->next);
		prev->next=new;
		new->next=ptr;
	}


}





