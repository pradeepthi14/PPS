#include<stdio.h>
struct student
{
int rolno,marks,age;
char name[20];
}st1,st2;
void main()
{
struct student st1,st2;
printf("\n enter name of first student");
gets(st1.name);
printf("\n enter rolno marks age of first student");
scanf("%d%d%d",&st1.rolno,&st1.marks,&st1.age);
printf("\n first student details");
puts(st1.name);
printf("\n %d %d %d", st1.rolno, st1.marks, st1.age);
printf("\n enter name of second student");
scanf("%s",&st2.name);
printf("\n enter rolno marks age of second student");
scanf("%d%d%d",&st2.rolno,&st2.marks,&st2.age);
printf("\n second student details");
puts(st2.name);
printf("\n %d %d %d ",st2.rolno,st2.marks,st2.age);
}
