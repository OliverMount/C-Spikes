#include <stdio.h>
#include<math.h>


#define MAX 10

#define MYNAME "SEONG-YEON"
#define  FMT "String is %s \n"
#define PMN printf(FMT, MYNAME)
#define PX printf("X is %d.\n", xx)


typedef unsigned char BYTE; // same as #define BYTE unsigned char
typedef char * STRING; //str 

typedef struct point2d {
  int x;
  int y;
} Point2D;

typedef struct rect{
  Point2D pt1;
  Point2D  pt2;
}RECT;


typedef struct rect1{

  struct{
    int x;
    int y;

     struct{
       STRING name;
     };


  };
   
}RECT1;

float distance(Point2D a, Point2D b){
    return sqrt(pow(a.x -b.x,2)+pow(a.y-b.y,2));
}

int main(void) {
   
 char nam[10];

 STRING name="Seong Yeon";// char * name ="Seong Yeon"
 printf(FMT,name);
 BYTE a,b,c;  // unsigned char a,b,c;

 PMN;

 int xx=78;
 PX;

printf("Enter the byte a \n");
 scanf("%c",&a);

 Point2D aa,bb,cc; // struct point2d aa,bb,cc;
 // point2d aa=new point2d();

 Point2D x1={1,3},x2={.y=4,.x=5};

 RECT A={{1,3},{2,4}},B;
 printf("value is  (%d,%d),(%d,%d)",A.pt1.x,A.pt1.y,A.pt2.x,A.pt2.y);
 
 RECT1 AA;
 AA.x=10;
 AA.name="SeY"
;

 
printf("Enter the x,y  values of x1 are (%d, %d)\n", x1.x,x1.y); 

/*
 int main(void){
     struct Oliver{
       int a;
       int b;
     }SY;  // SY varibale

     struct Oliver SY;

     SY a,b,c;// impossible

     SY.a=10;
     SY.b=20;

     printf("a,b value is %d,%d",SY.a,SY.b);

typedef struct Oliver{
       int a;
       int b;
     }SY;

SY aa,bb,cc;//SY datatype

  */   
  return 0;
 }



/*
struct hello{
  int a; float b;
};
struct hello my1,my2;

struct hello1{
  int a; float b;
}SY,aa,bb,cc;

====

struct hello1 SY,aa,bb,cc;



*/
