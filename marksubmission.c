#include <stdio.h>
#include <math.h>

int main()


{
int a;


printf("Please Submit your marks\t");
scanf("%d",& a);

if (a>=90) { printf("A\n");}
else if (a>=87 && a<=89) { printf("B+\n");}
else if (a>=84 && a<=86) { printf("B");}
else if (a>=80 && a<=83) { printf("B-");}
else if (a>=77 && a<=79) { printf("C");}
else if (a>=74 && a<=76) { printf("C+");}
else if (a>=70 && a<=73) { printf("C-");}
else if (a>=65 && a<=69) { printf("D+");}
else if (a>=60 && a<=64) { printf("D");}
else if (a<60 ) { printf("F");}
else { printf("ALien");}








return(0);
}
