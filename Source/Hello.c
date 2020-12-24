#include<stdio.h>

int main()
{

// printf("Hello World \n");

int a=10;

printf("One incremented value of a is %d \n" ,++a);

int b[]={1,2,3,4,5,6};


for (int l=0; l<5; l++){
printf(" b[%d] is %d \n" ,l,b[l]);
}

// pointers

int *p=b;
int *q=&b[0];

printf("The address of the array is  %p \n" ,p);
printf("The address of the array is  %p \n" ,q);



return 0;

}
