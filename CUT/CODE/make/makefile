EMS:main.o admin_menu.o employee_menu.o func.o project_func.o emp_func.o valid_func.o  
	gcc -o EMS main.o func.o valid_func.o 
main.o:main.c
	gcc -o main.o -c main.c
func.o:func.c
	gcc -o func.o -c func.c
valid_func.o:valid_func.c
	gcc -o valid_func.o -c valid_func.c
admin_menu.o:admin_menu.c
	gcc -o admin_menu.o -c admin_menu.c
employee_menu.o:employee_menu.c
	gcc -o employee_menu.o -c employee_menu.c
project_func.o:project_func.c
	gcc -o project_func.o -c project_func.c
emp_func.o:emp_func.c
	gcc -o emp_func.o -c emp_func.c

clean:
	rm *.o
