#include <stdio.h>

# define MAXNAME 20
# define MAXADD 40
// Structure 
struct  Personal {
  int ID,AGE;   // strucure members 
  float Salary;           
  char NAME[MAXNAME];      
  char ADD[MAXADD];        

};

/*
public class Personal{
  int ID,AGE;   //fiel  members 
  float Salary;           
  char NAME[MAXNAME];      
  char ADD[MAXADD];   

   
}
*/

int main(void) { 


int aa[10]={1,2,3,4,5,6,7,8,9,10};
int *pp=aa; //pp+1

struct Personal a[2]={
{12,34,34353.34,"Oliver","454353453wfffs"},
{23,24,3434543543.23,"Mount","safa f6sfsf8s"}
}; // array of structure
struct Personal *p;  //  Structure pointer

p=a; // base type is strucure

//p=&a[0];
//a[0].ID,  a[1].ID
//*(p).ID,  p->ID  (p+1)->ID



printf("Size of structure is %lu",sizeof(a[0]));


printf("Address of structure1 is %p\n",p);
printf("Address of structure2 is %p \n",p+1);


printf("%s %s %s \n",a[0].NAME, (*p).NAME , p->NAME);  // repalce *. with ->
++p;
printf("%s %s %s \n",a[1].NAME, (*p).NAME , p->NAME); 

/*
printf("%s %s %s \n",a[0].NAME, (*(p+1)).NAME , (p+1)->NAME);
++p;
printf("%s %s %s \n",a[1].NAME, (*p).NAME , p->NAME);
*/
//a[0]

//a[1]


 


  
  return 0;
}
