/*******************************************************
* * FILE NAME   : valid_func.c
*
* * DESCRIPTION : This file consists of file_to_list and list_to_file
* 		  operations for employee and project details
*
* ******************************************************/  

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "ems_header.h"

extern emp *start,*ptr,*new,*prev,*last;

t t1;


//This function writes the file to list

int file_to_list()
{
	FILE *p;
	if((p=fopen("Employe1","rb"))==NULL)
	{
		printf("File does not exist");
		return EXIT_FAILURE;
	}
	fread(&t1,sizeof(t),1,p);
	while(!feof(p))
	{
		new=(emp *)calloc(1,sizeof(emp));
		new->emp_id=t1.emp_id;
		strcpy(new->emp_name,t1.emp_name);
		strcpy(new->phone_number,t1.phone_number);
		strcpy(new->gender,t1.gender);
		strcpy(new->address,t1.address);
		new->work_hrs=t1.work_hrs;
		
		new->no_projects=t1.no_projects;
		//new->salary1=t1.salary1;
		if(!start)
		{
			start=last=new;
			new->next=NULL;
		}
		else
		{
			last->next=new;
			last=new;
			new->next=NULL;
		}
		fread(&t1,sizeof(t),1,p);
	}
	fclose(p);
	return EXIT_SUCCESS;
}

int list_to_file()
{
	if(!start)
	{
		printf("\nList empty\n");
		return EXIT_FAILURE;
	}
	FILE *p;
	if((p=fopen("Employe1","wb"))==NULL)
	{
		printf("File does not exist");
		return EXIT_FAILURE;
	}
	for(ptr=start;(ptr);ptr=ptr->next)
	{
		t1.emp_id=ptr->emp_id;
		strcpy(t1.emp_name,ptr->emp_name);
		strcpy(t1.phone_number,ptr->phone_number);
		strcpy(t1.gender,ptr->gender);
		strcpy(t1.address,ptr->address);
	//	t1.salary1=ptr->salary1;
		t1.work_hrs=ptr->work_hrs;
		
		t1.no_projects=ptr->no_projects;

		fwrite(&t1,sizeof(t),1,p);
	}
	for(ptr=start;(ptr);prev=ptr,ptr=ptr->next)
	{
		free(prev);
	}
	free(prev);
	fclose(p);
	return EXIT_SUCCESS;
}







