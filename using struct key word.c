#include<stdio.h>
struct student{
int id;
char name[20];
float marks;
};
int main()
{
struct student s1 ={101,"mahendar singh dhoni",90.00};
struct student s2 ={102,"raju",85.45};
struct student s3 ={103,"ravi",87.90};
printf("Student id s1.%d\n",s1.id);
printf("student name s1.%s\n",s1.name);
printf("student marks s1.%2f/n",s1.marks);
printf("Student id s2.%d\n",s2.id);
printf("student name s2.%s\n",s2.name);
printf("student marks s2.%2f/n",s2.marks);
printf("Student id s3.%d\n",s3.id);
printf("student name s3.%s\n",s3.name);
printf("student marks s3.%2f/n",s3.marks);
return 0;
}
