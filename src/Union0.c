#include <stdio.h>

# define MAX 10
// # typedef STRING char[] // 

union hold{
  int id;  //4
  float sal;  // 4
  char name;  // 1
};

struct Name{
char fname[10];
char lname[10];
union hold a;

};

int main(void) {
//STRING A;
  union hold A;
  union hold B[10];
  union hold *C;

//struct Name my={"Oliver","hi",{5}} //union 이라서 only one possible;
 {%a.sal}


 A.id=1234;
 printf("%d \n",A.id);

 A.sal=345.2342;
 printf("%f \n",A.sal);
 //printf("%d \n",A.id);

 
 A.name='S';
 printf("%c \n",A.name);
 
printf("%d \n",A.id);
printf("%c \n",A.id);


A.sal=93;
printf("%f \n",A.sal);


printf("%c \n",A.name);

 printf("%d \n",A.id);
 
 

  return 0;
}
