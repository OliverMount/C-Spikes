#include <stdio.h>

typedef int ARR5[5];
typedef ARR5 *ptrA5;
typedef char * String;

int main(void) {

  ARR5 a={1,2,3,4,5},b={1,2,3,4,5};
  ARR5 *p; // pointer base type:  array of 5 integers
  p=a;
  printf(" The pointers are %p,  %p  \n", *p,(*p+1));
  
  //ARR5 d[2] =2D array
  //ARR5 d[2][3] =3D array

  //
int A[5]={-1,2,3,4,5};
int *ptr;  //base type one integer

ptr=A;

printf(" The pointers are %d,  %d  \n", *ptr,*(ptr+1));  //base type is integer
  
ptrA5 q;

q=a;

printf(" The pointers are %p,  %p  \n", *q,*q+1);


 //[]ARRAY ()FUNCTION *POINTER  precedence
// [] AND () HAVE SAME precedence BUT LEFT TO RIGHT, and * is the least precedence  than [] and ().


int hi[3][4];// array of three elemens, each element contain four integers
int * aa[5];
int (* aa) [5];// pointer to an array of 5 integer elemens
 int  (*pp) [5][5];

 void (*pf)(char *); // pf is apointer to a function whose input is pinter to a charter and outut is void.
 
  return 0;
}
