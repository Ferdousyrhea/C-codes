/*s's house rent allowance is 30% of basic salary,
medical allowance is 5% of basic salary.
He gets extra 1000tk as technical allowance.
Write a c program to calculate his gross salary and print the result.*/
 #include<stdio.h>

int main() {
   int gross_salary, basic, hr, medi;

   printf("Enter basic salary : ");
   scanf("%d", &basic);

   hr = (30 * basic) / 100;
   medi = (5 * basic) / 100;

   gross_salary = basic + hr + medi + 1000;

   printf("\nGross salary : %d", gross_salary);
   return 0;
}
