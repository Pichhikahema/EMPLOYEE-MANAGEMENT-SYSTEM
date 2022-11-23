#ifndef EMS_HEADER_H
#define EMS_HEADER_H


typedef struct emp_details
{
	int emp_id;
	char emp_name[20];
	double salary1;
	char phone_number[10];
	char project_id[3];
	int work_hrs;
	char project_name[20];
	int pr_count;
	double total_salary;
	double incentives;
	double epf_deduct;
	char gender[10];
	int experience;
	char address[30];
	char email_id[30];
	int project_counter;
	int team_mem;
	int choice;
	int no_people;
	struct emp_details *next;
}emp;

typedef struct temp
{
	int emp_id;
	char emp_name[20];
	double salary1;
	char phone_number[10];
	char project_id[3];
	int work_hrs;
	char project_name[20];
	int pr_count;
	double total_salary;
	double incentives;
	double epf_deduct;
	char gender[10];
	int experience;
	char address[30];
	char email_id[30];
	int no_people;
	int no_projects;
	int temp_id;
}t;

int employee();

int emp_details();
int project_details();
int highest_projects();
int pay_report();
int view_emp_details();
int employee();
int add_emp_details();
int edit_emp_details();
int view_emp_details();
int view_3emp_details();
int del_emp_details();
int view_payslip();

int project();
int project_1();
int project_2();
int project_3();
int edit_project();
int add_project();
int view_project();
int del_project();
int employee_details();
int salary_details();
/*int view_proj_details();
int view_sal_details();
int highest_projects();*/
int alpha_valid(char *s);
int digit_valid();
int file_to_list();
int list_to_file();


/*int add_emp();
 int edit_emp();
 int delete_emp();
 int view_emp();
 int add_proj();
 int edit_proj();
 int del_proj();
 int view_proj();
 int employee();
 int project();
 int emp_with_projects();
 int payslip();*/
 

#endif

