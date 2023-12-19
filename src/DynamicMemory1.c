#include <stdio.h>
#include<stdlib.h> // For memory allocation  malloc() calloc()  free()


 
// memory management 

//memory leak

void myfunc(double [],int);


int main(void) {

/*
  int a[]={1,2,3}, *ptr;   // Static memory 
  ptr=a;  
   
int N; 
int b[N]; // variable length array

int *ptrr;
double v,*pv;

ptrr=(int *) malloc(30*sizeof(int)); // malloc은 원래 char type이기 때문에, int로 type casting 해야함.(int *)

pv=(double *) malloc(50*sizeof(double));  //dynamic pointer 

//type casting int a=5;  float b; b=(float) a;
// a=3.14, b==(float) 3.14


free(pv); //malloc free는 그 위에 malloc 지정했던 pointer값을 그만 사용하겠다라고 선언해주는것. (보통 마지막에 써줌)

free(ptrr); // 

*/

//memory leak

double a[2000]; // 8bytes
int i;

for(i=0;i<1000;i++){
  myfunc(a,2000);
}

 
  return 0;
}

void  myfunc(double arr[],int n){

double *temp=(double *) malloc(n*sizeof(double)); // 16000  -- 1.6 KB
 
free(temp);  //0 MB
  // no free 
 
  // free can be used with-in any function
}


/*

null point malloc(n*sizeof(int));

int *p;
p= (int *) malloc(n*sizeof(int));
int a= new int()

Point aa= new Point();
struct SY a;
struct SY *pp = (struct SY *) malloc(2000*sizeof(a));

 */

