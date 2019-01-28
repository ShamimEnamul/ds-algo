#include<iostream>
#include<stdio.h>

using namespace std;



struct employee{

int emp_id;
char name[20];
float salary;
char address[50];
int dept_no;
int age;

};



int main()
{
    struct employee e1, e2;

   /// e1 = {15292961, "shamim", 50000.00, "faridpur", 2, 25}; it will give an error.bcz it is possible when we declare the structure;

   struct employee e3 = {15292961, "shamim", 50000.00, "faridpur", 2, 25};

   /*e1.emp_id = 222,
   e1.name[20] = "hamikhkjkjm",
   e1.salary = 50000,
   e1.address[50] = "dhaka bangladesh";
   e1.dept_no = 5;
   e1.age = 25;
    */
   //cout << e1.name;

   e1 = e3;




}

