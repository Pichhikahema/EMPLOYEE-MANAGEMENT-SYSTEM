/*****************************************************************************************
 *
 * FILE NAME   : project_func.c
 *
 * DESCRPITION : This file defines the functions in the admin menu 
 *               to perform various operations in the employee database
 *
  ******************************************************************************************/     

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include "ems_header.h"


extern emp *start,*new,*ptr,*prev,*last;


int add_project()
{
	printf("enter project id:");
	scanf("%s",&new->project_id);
	printf("enter project name:");
	scanf("%s",new->project_name);
	printf("enter no.of people working on a project:");
	scanf("%d",&new->no_people);




}
int view_project()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\nemployee id     project    project_name         no.of people in project\n");
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		printf("\n%d        %s         %s       %d",ptr->emp_id,ptr->project_id,ptr->project_name,ptr->no_people);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;

}

int del_project()
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

int view_emp_details()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\nemp_id    emp_name   phone_number   gender  address    w_hrs    no_projects   salary \n");
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		printf("\n%d     %s     %s     %s   %s    %d    %d    %d",ptr->emp_id,ptr->emp_name,ptr->phone_number,ptr->gender,ptr->address,ptr->work_hrs,ptr->no_projects);
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;

}
int alpha_valid(char *s)
{
	for(char *p=s;(*p);p++)
	{
		if(!isalpha(*p))
			return 1;
	}
	return 0;
}
int digit_valid(char *s)
{
	for(char *p=s;(*p);p++)
	{
		if(!isdigit(*p))
			return 1;
	}
	return 0;
}
 
int view_3emp_details()
{
	if(!start)
	{
		printf("\nEmpty list\n");
		system("read a");
		system("clear");
		return EXIT_FAILURE;
	}
	printf("\nemp_id    emp_name   phone_number   gender  address  salary   w_hrs    no_projects \n");
	if(new->no_projects==3){
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		printf("\n%d     %s     %s     %s   %s    %d    %d",ptr->emp_id,ptr->emp_name,ptr->phone_number,ptr->gender,ptr->address,ptr->work_hrs,ptr->no_projects);
	}
	}
	system("read a");
	system("clear");
	return EXIT_SUCCESS;

}
/*


int add_employee()
{
	int w_hrs;
	int proj_id;
	char yn[10];
	int flag=0;
	while(1)
	{
		char salary1[20];
		printf("Enter the employee salary:\n");
		scanf("%s",&new->salary1);
		for(int ptr=start;ptr<salary1.length();ptr=ptr->next)
		{
			if(!isdigit(salary1[ptr]))
			{
				printf("salary should be in digits only\n");
				continue;
			}
			else
				break;
		}
		ctc=salary1;
		if(ctc<=0)
		{
			printf("CTC should be greater than Rs.100-----\n");
			continue;
		}
		else if(ctc<30000 || ctc>50000)//checking the salary should be in range of 30000 and 50000
		{
			printf("\n----CTC should be in range of 30000 and 50000\n");
			continue;
		}
		else
			break;
	}


	printf("Do you wish to add project for the employee?\n");
	while(1)
	{
		printf("Enter yes or no\n");
		scanf("s",&new->yn);
		for(int ptr=start;ptr<yn.length();ptr=ptr->next)
		{
			if(isdigit(yn[i]))
			{
				return yn;
			}
			else
			{
				printf("\n----choice should be either yes or no\n");
				continue;
			}
		}
		if(yn!=yes || no)
		{
			flag=1;
			printf("choice should be either yes or no\n");
			continue;
		}
		else
			break;
	
	}
	int project_counter=0;
	int ch=0;
	while(ch==0)
	{
		if(yn="yes" && project_counter<3)//checking the entered choice is yes and project counter shouls be less than 3

		{
			while(1)
			{
				printf("Enter the project id:\n");
				scanf("%d",&new->project_id);
				for(ptr=start;ptr<prohect_id1.length();ptr=ptr->next)
				{
					if(!isdigit(project_id1[i]))
					{
						printf("\nproject id should be an integer\n");
						continue;
					}
					else
						break;
				}
				if(!(pr_list))
				{
					printf("\n----currently project list is empty\n");
					return EXIT_FAILURE;
				}
			}
			else
			{
				int flag=0;
				for(int pt=pr_list.start();pt!=pr_list.end();++pt)
				{
					int work_hrs;
					if(pt->project_id==project_id)
					{
						if(pt->team_mem==10)
						{
							printf("This project akready have 10 members!!!!!!\n");
							break;
						}
						else
						{
							while(1)
							{
								printf("Enter the no.of hours employee work on this project:");
								scanf("%d",&new->work_hours);
								break;
								for(ptr=start;ptr<work.hrs.length();ptr++)
								{
									if(!isdigit(work_hrs[ptr]))
									{
										printf("The no.of working hours should ne entered is digit!!!\n");
										continue;
									}
								}
								else
									break;
							}
						}
						if(new->project_counter=0)
						{
							pr_no_prid[0]=proj_id;
							pr_no_prid[0]=work_hrs;
							else if(project_counter==1)
							{
								pr_no_prid[1]=proj_id;
								pr_no_prid[1]=work_hrs;
							}
							else
							{
								pr_no_prid[2]=proj_id;
								pr_no_prid[2]=work_hrs;
							}
							project_counter++;
							pt->team_mem++;
							break;
						}
						else
						{
							flag=1;
							continue;
						}
					}
					if(flag==1)
					{
						printf("---The project id doesn't exist in the list---\n");
					}
				}
				while(1)
				{
					int choice;
					printf(".....press 0 to continue adding projects for the employee or any number to return to menu...\n");
					scanf("%d",&new->choice);
					ch=choice;
					break;
				}
				if(ch==0)
				{
					continue;
				}
				else if(ch>0)
				{
					break;
				}
				else
				{
					break;
				}
			}
			else if(project_counter>=3)
			{
				printf("------This employee already have 3 projects.cannot assign any more projects---\n");
				return EXIT_FAILURE;
			}
			else
			{
				project_counter=0;
				break;
			}
		}
	}
}






*/



