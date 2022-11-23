/*****************************************************************************************
 * * FILE NAME        : admin_menu.c
 *
 * * DESCRIPTION      : This file consists of  main menu and displays the functions in it
 *
 *  ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "ems_header.h"
#include<string.h>

int admin()
{
	while(1)
	{
		int admin_id;
		char pswd[20];
		system("read a");
		system("clear");
		printf("...Dear Admin please enter you id and password....\n");
		printf("\n");
		printf("Enter admin_id: ");
		scanf("%d",&admin_id);
		printf("\n");
		printf("Enter password: ");
		scanf("%s",pswd);


		if(strcmp(pswd,"admin@123")==0)
		{
			system("clear");

			int ch1=0;
			while(ch1!=4)
			{
				printf("........................WELCOME ADMIN...........................\n");
				printf("\n");
				printf("\n1. Employee details\n2. Project details\n3. Salary details\n4. Back\n");
				printf("Enter your choice:\n");
				scanf("%d",&ch1);
		
				switch(ch1)
				{
					case 1: employee_details();
					        break;
					case 2: project_details();
					        break;
					case 3: pay_report();
						break;
					case 4: return EXIT_SUCCESS;	
					default: printf("Invalid choice......!!!!\n");
						 printf("Choose number between 1 to 4\n");
						 continue;
				}
			}
		}
		else if((strcmp(pswd,"emp123"))!=0)
		{
			printf("\nWrong password\n");
			printf("\nTry again\n");
			continue;

		}
		else
			break;

	}
}


int project_details()
{
	system("read a");
	system("clear");
	int ch2=0;
	while(ch2!=5)
	{

		printf("*************************************************\n");
		printf("\n");
		printf("\n-----------WELCOME TO PROJECT DETAILS-----------\n");
		printf("\n");
		printf("***************************************************\n");
		printf("\n");
		printf("                     SUB MENU                      \n");
		printf("\n");
		printf("\n1. Project-1\n2. Project-2\n3. Project-3\n4. Back\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch2);
		printf("\n");
		printf("....................................................\n");
		switch(ch2)
		{
			case 1: project_1();
				break;
			case 2: project_2();
				break;
			case 3: project_3();
				break;
			case 4: return EXIT_SUCCESS;
			default: printf("Invalid choice.......!!!!!!\n");
				 printf("Enter choice between 1 to 4\n");
				 continue;
		}
	}
	return EXIT_SUCCESS;
}

int project_1()
{
	system("read a");
	system("clear");
	int ch3=0;
	while(ch3!=4)
	{
		printf("*************************************************\n");
		printf("\n");
		printf("\n              WELCOME TO PROJECT 1              \n");
		printf("\n");
		printf("*************************************************\n");
		printf("                     SUB MENU                    \n");
		printf("\n");
		printf("\n1. Add project\n2. Delete  project\n3. Edit project\n4. View project\n5. Back\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch3);
		printf("\n");
		printf("..................................................\n");
		switch(ch3)
		{
			case 1: add_project();
				break;
			case 2: del_project();
				break;
			case 3: view_project();
				break;
			case 4: return EXIT_SUCCESS;
			default: printf("Invalid choice.......!!!!!\n");
				 printf("\nChoose number between 1 and 5\n");
				 continue;
		}
	}
	return EXIT_SUCCESS;
}

int project_2()
{
	system("read a");
	system("clear");
	int ch4=0;
	while(ch4!=4)
	{
		printf("*************************************************\n");
		printf("\n");
		printf("\n              WELCOME TO PROJECT 2             \n");
		printf("\n");
		printf("*************************************************\n");
		printf("                      SUB MENU                   \n");
		printf("\n");
		printf("\n1. Add project\n2. Delete  project\n3. Edit project\n4. View project\n5. Back\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch4);
		printf("\n");
		printf("..................................................\n");
		switch(ch4)
		{
			case 1: add_project();
				break;
			case 2: del_project();
				break;
			case 3: view_project();
				break;
			case 4: return EXIT_SUCCESS;
			default: printf("Invalid choice......!!!!!!\n");
				 printf("Choose number between 1 to 5\n");
				 continue;
		}
	}
	return EXIT_SUCCESS;
}

int project_3()
{
	system("read a");
	system("clear");
	int ch5=0;
	while(ch5!=4)
	{
		printf("\n************************************************\n");
		printf("\n");
		printf("\n             WELCOME TO PROJECT 3               \n");
		printf("\n");
		printf("**************************************************\n");
		printf("                     SUB MENU                     \n");
		printf("\n");
		printf("\n1. Add project\n2. Delete  project\n3. Edit project\n4. View project\n5. Back\n");
		printf("\nEnter your choice: ");
		scanf("%d", &ch5);
		printf("\n");
		printf("..................................................\n");
		switch(ch5)
		{
			case 1: add_project();
				break;
			case 2: del_project();
				break;
			case 3: view_project();
				break;
			case 4: return EXIT_SUCCESS;
			default: printf("Invalid choice......!!!!!!\n");
				 printf("Choose number between 1 to 5\n");
				 continue;
		}
	}
	return EXIT_SUCCESS;
}

