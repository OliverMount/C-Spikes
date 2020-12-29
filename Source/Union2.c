#include <stdio.h>

struct testscope
{ 
    union // Anonymous union
    {
    char testChar[4]; // signed -128 to 127
    int testNum;  // signed int 
    int testNum1;
    };
};

struct Employee1  //size = 37 byte
	  {
			 int Id;
			 char Name[25];
			 long Salary;
	  };

 union Employee2  // size = 25 byte
	  {
			 int Id;
			 char Name[25];
			 long Salary;
	  };


int main(void) {

struct testscope ts;
ts.testNum =97;
// Note that members of union are accessed directly
printf("testchar = %c, testnum = %d,testnum2 = %d", ts.testChar[0], ts.testNum,ts.testNum1);


  
  return 0;
}
