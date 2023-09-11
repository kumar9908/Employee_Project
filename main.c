#include <stdio.h>
#include <string.h>

struct Employee
{
  int Empno;
  struct EmpName
  {
    char firstname[20];
    char lastname[20];
  }en;
  struct Date
  {
    int dd,mm,yy;
  }date;
  int BasicSalary;
  float netsal;
};

int main(void) 
{
  int n;
  printf("Enter the total number of employee : ");
  scanf("%d",&n);
  
  struct Employee emp[n];
  
  for(int i=0;i<n;i++)
    {
      
      printf("Enter the employee number of employee %d : ",i+1);
      scanf("%d",&emp[i].Empno);

      printf("Enter the first name of employee %d : ",i+1);
      scanf("%s",emp[i].en.firstname);
      printf("Enter the last name of employee %d : ",i+1);
      scanf("%s",emp[i].en.lastname);

      printf("Enter the hire date(dd-mm-yy) of  employee %d : ",i+1);
      scanf("%d %d %d",&emp[i].date.dd,&emp[i].date.mm,&emp[i].date.yy);

      printf("Enter the basic salary of employee %d : ",i+1);
      scanf("%d",&emp[i].BasicSalary);

      emp[i].netsal = emp[i].BasicSalary+0.4*emp[i].BasicSalary+0.1*emp[i].BasicSalary+0.05*emp[i].BasicSalary;

      printf("\n\n");
    }
  for(int i=0;i<n;i++)
    {
      printf("Emp number of employee %d is %d\n",i+1,emp[i].Empno);
      char name[45];
      char space = ' ';
      strcpy(name,emp[i].en.firstname);
      strcat(name, &space);
      strcat(name, emp[i].en.lastname);
      printf("Name of employee %d is %s\n",i+1,name);
      printf("Hire date of employee %d is %d-%d-%d\n",i+1,emp[i].date.dd,emp[i].date.mm,emp[i].date.yy);
      printf("Net salary  of employee %d is %.2f\n",i+1,emp[i].netsal);
      printf("\n\n");
    }
  
  return 0;
}