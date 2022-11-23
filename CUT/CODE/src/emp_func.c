/*****************************************************************************************
 *
 * FILE NAME   : emp_func.c
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


extern emp *start,*new,*ptr,*prev,*last;

int pay_report()
{
	int temp_id;
	if(!start)
	{
		printf("Empty list");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("Enter employee id to view pay report: ");
	scanf("%d",&ptr->temp_id);
	if(temp_id==new->emp_id)
	{
		printf("%d   %s",ptr->temp_id,ptr->emp_name);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
int edit_emp_details()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	else{
	int temp_id;
	printf("Enter employee id to edit:");
	scanf("%d",&temp_id);
	if(new->emp_id!=temp_id)
	{
		printf("No record found");
		return EXIT_FAILURE;
	}
	else
	{
		printf("\nemp_id    emp_name   phone_number   gender  address  salary   w_hrs    no_projects payslip\n");
		for(ptr=start;(ptr);ptr=ptr->next)
		{
			printf("\n%d     %s     %s     %s   %s    %d    %d",ptr->emp_id,ptr->emp_name,ptr->phone_number,ptr->gender,ptr->address,ptr->work_hrs,ptr->no_projects);
		}
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}

	printf("\nExisting name is %s",new->emp_name);
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

	printf("Enter existing phone number is %s",new->phone_number);

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
	
	printf("\nEnter gender:\n");
	scanf("%s",&new->gender);

	// entering address

	printf("Enter existing  existing address id %s",new->address);
	while(1)
	{
		printf("Enter address:\n");
		scanf("%s",new->address);
		if(strlen(new->address)>30)
		{
			printf("\naddress should not be greater than 30 characters\n");
			continue;
		}
		else
			break;
	}

	system("read a");
	system("clear");
	return EXIT_SUCCESS;
}
int del_emp_details()
{
	if(!start)
	{
		printf("Empty list");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	int eid;
	printf("\nEnter employee id to delete: ");
	scanf("%d",&eid);
	if(eid==start->emp_id)
	{
		ptr=start;
		start=start->next;
		free(ptr);
	}
	else
	{
		for(ptr=start; (ptr) && ptr->emp_id!=eid; prev=ptr, ptr=ptr->next);
		if(!ptr)
		{
			printf("Employee id you entered doesnot exist......!\n");
			system("read a");
			system("clear");
			return EXIT_FAILURE;
		}
		prev->next=ptr->next;
		free(ptr);
		return EXIT_SUCCESS;
	}

}
