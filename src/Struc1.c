#include<stdio.h>
 


struct Person{
char  fname[20];
char  lname[20];
int age;
float salary;
};


void print_info(struct Person *p){

	printf("Information of the employee here \n");
	printf("The name of the employee is %s %s",p->fname,p->lname);
}

int main(){

struct Person *pA;
struct Person A={"Oliver","Mount",32,1234.56};
pA=&A;

print_info(pA);


return 0;
}
