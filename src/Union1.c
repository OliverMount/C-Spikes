#include <stdio.h>


struct test1 {
int x, y; int a[10];
};
union test {  // shared memory
int x, y, a[10];
};


int main(void) {

  //struct test1 a={1,2};
  struct test1 a={.y=1,.x=2}; //.x=뭐시기는, order 상관없이 initialize
  union test b;

  b.x=90;

  printf("The value of x in  of b  %d \n",b.x);
  printf("The value of y in  of b  %d \n",b.y);

printf("The coordinates of a are %d %d \n",a.x,a.y);

printf("The size of structure is %lu \n",sizeof(a));
printf("The size of union is %lu \n",sizeof(b));


  
  return 0;
}


/*
union abc{
  int x;
  char a[20];
  //struct name na; // named struc
  struct{  // annoymous str
 char  fname[20] ;
 char lanme[40]
  }
}


union abc a;
printf("bula bula..... %",a.x);
a.na.fname
*/
