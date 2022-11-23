/*****************************************************************************************
 * * FILE NAME        : employee_menu.c
 *
 * * DESCRIPTION      : This file consists of  main menu and displays the functions in it
 *
 *  ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "ems_header.h"
#include<string.h>

int employee()
{
	while(1)
	{
		int id;
		char psd[20];
		system("read a");
		system("clear");
		printf("Enter emp_id: ");
		scanf("%d",&id);
		printf("Enter password: ");
		scanf("%s",psd);
	
		if(strcmp(psd,"emp123")==0)
		{
			system("clear");

			int ch1=0;
			while(ch1!=5)
			{
				printf("\n................WELCOME EMPLOYEE...................\n");
				printf("\n");
				printf("\n1. Add employee details\n2. View employee details\n3. Edit employee details\n4. View payslip\n5. Back to main menu\n");
				printf("\n");
				printf("Enter your choice: \n");
				scanf("%d",&ch1);
				printf(".....................................................\n");
				switch(ch1)
				{
					case 1: add_emp_details();
					        break;
					case 2: view_emp_details();
					        break;
					case 3: edit_emp_details();
						break;
					case 4: pay_report();
						break;
					case 5: return EXIT_SUCCESS;
					default: printf("\n");
						 printf("Invalid choice..........!!!!!!!!\n");
						 printf("Try again\n");
						 continue;
				}
			}
		}
		else if(strcmp(psd,"emp123")==0)
		{
			printf("\nWrong password..........!!!!!!\n");
			printf("\nTry again\n");
			continue;

		}
		else
			break;

	}
}


int employee_details()
{
	system("read a");
	system("clear");
	int ch1=0;
	while(ch1!=6)
	{
		printf("\n.......You are into employee details....\n");
		printf("\n1. Add employee details\n2. View employee details\n3. Edit employee details\n4. Delete employee\n5. Back\n");
		printf("\n");
		printf("Enter your choice: ");
		scanf("%d",&ch1);
		printf("..........................................\n");
		switch(ch1)
		{
			case 1: add_emp_details();
			        break;
			case 2: view_emp_details();
			        break;
			case 3: view_3emp_details();
			        break;
			case 4: edit_emp_details();
				break;
			case 5: del_emp_details();
			        break;
			case 6: return EXIT_SUCCESS;
			default: printf("Invalid choice.........!!!!\n");
				 printf("Try again....\n");
				 continue;
		}
	}
}


