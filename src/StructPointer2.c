#include <stdio.h>

// Anonymous strucure, Union, 
struct names  // tag
  {
    char first[20];
    char last[20];
     
  };


struct person
{
int id;
struct names name; // nested structure member
};


 
struct person1
{
int id;

struct {            // Anonymous strucure,      
  char first[20];
    char last[20];
    };
       
}; 
 


int main(void) {

//nested strucure
  struct person A ={1234,{"Oliver","Mount"}};
  printf("%d %s %s  \n",A.id,A.name.first,A.name.last);
 
//Anonoymous strc
  struct person1 B ={1234,{"Mount","Oliver"}};
  printf("%d %s %s",B.id,B.first,B.last);
  
  return 0;
}
