#include <stdio.h>

union intParts {
  int theInt;  // signed charcter(+ -)
  char bytes[sizeof(int)]; //   signed character here
};

// Exmaple 2
union Coins {
    struct {
        int quarter;
        int dime;
        int nickel;
        int penny;
    }; // anonymous struct acts the same way as an anonymous union, members are on the outer container
  
  int coins[4];
};


// Exmaple 3

union hiddenMessage {
        int  ints[6];
        char chars[21]; // 
    };
  

int main(void) {

  union intParts parts;
parts.theInt = 1231256;  //00000000 00100101 1001001 10011000

char  *p=(char *)&parts.theInt;
//int *p=&parts.theInt; Way 1
printf("The int is %d\nThe bytes are [%d, %d, %d, %d]\n",
parts.theInt, parts.bytes[3], parts.bytes[2], parts.bytes[1], parts.bytes[0]);


//way 1
//printf("The bytes address is %d\n %d\n %d\n %d\n",*((char *)p),*((char *)p +1),//*((char *)p+2),*((char *)p+3));
printf("The bytes address is %d\n %d\n %d\n %d\n",*p,*(p +1),*(p+2),*(p+3));

   
// Exmaple 2

union Coins change;

change.dime=100;
printf("Stc. dime is %d \n",change.dime);

 int *ptr=&change.coins[0];

 // printf("Enter the coins \n");
 //   for(int i = 0; i < sizeof(change) / sizeof(int); ++i)
 //       {
 //   scanf("%d", ptr+i);  
 //   }

//printf("There are %d quarters, %d dimes, %d nickels, and %d pennies\n",
  //  change.quarter, change.dime, change.nickel, change.penny);
 
// Exmaple 3

 union hiddenMessage intCharacters = {{1853169737, 1936876900, 1684955508, 1768838432, 561213039, 0}};
// 01101110 01110101 00100000 01001001
 int *q=intCharacters.ints;
    
        printf("[");
         for(int i = 0; i < 20; ++i)
         printf("%c, ", intCharacters.chars[i]);

printf("\n %s \n",intCharacters.chars);
printf("assda %d\n",*((char *)q));
printf("%c",73);


  return 0;
}
