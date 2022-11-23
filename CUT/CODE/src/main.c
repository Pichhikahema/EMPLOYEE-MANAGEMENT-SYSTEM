/*****************************************************************************************
 * * FILE NAME        : main.c
 *
 * * DESCRIPTION      : This file consists of  main menu and displays the functions in it
 *
 ******************************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include "ems_header.h"
#include<string.h>

int main()
{
	file_to_list();
	int ch=0;
	while(ch!=3)
	{
		printf("\n***********************************************************\n");
		printf("\n");
		printf("\n           WELCOME TO EMPLOYEE MANAGEMENT SYSTEM            \n");
		printf("\n");
		printf("************************************************************\n");
		printf("\n");
		printf("                            MAIN MENU                           \n");
		printf("\n");
		printf("\n1. ADMIN\n2. EMPLOYEE\n3. EXIT\n");
		printf("\nEnter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: admin();
				break;
			case 2: employee();
				break;
			case 3: break;
			default: printf("\nInvalid choice.............!!!!\n");
				 printf("Enter number between 1 to 3\n");
				 continue;
		}
	}
	list_to_file();
	return EXIT_SUCCESS;
}
