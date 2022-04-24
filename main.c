/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a = 12, b = 6, c,result,*x,num=212,i;
    // arthemetic operators
c = a + b;
printf("a+b = %d \n", c);
c = a - b;
printf("a-b = %d \n", c);
c = a *b;
printf("a*b = %d \n", c);
c = a / b;
printf("a/b = %d \n", c);
c = a % b;
// relational operators
printf("Remainder when a divided by b = %d \n", c);
printf("%d == %d = %d \n", a, b, a == b); // true
printf("%d == %d = %d \n", a, c, a == c); // false
printf("%d > %d = %d \n", a, b, a > b); //false
printf("%d > %d = %d \n", a, c, a > c); //false
printf("%d < %d = %d \n", a, b, a < b); //false
printf("%d < %d = %d \n", a, c, a < c); //true
printf("%d != %d = %d \n", a, b, a != b); //false
printf("%d != %d = %d \n", a, c, a != c); //true
printf("%d >= %d = %d \n", a, b, a >= b); //true
printf("%d >= %d = %d \n", a, c, a >= c); //false
printf("%d <= %d = %d \n", a, b, a <= b); //true
printf("%d <= %d = %d \n", a, c, a <= c); //true
// logical operators
result = (a == b) && (c > b);
printf("(a == b) && (c > b) equals to %d \n", result);
result = (a == b) && (c < b);
printf("(a == b) && (c < b) equals to %d \n", result);
result = (a == b) || (c < b);
printf("(a == b) || (c < b) equals to %d \n", result);
result = (a != b) || (c < b);
printf("(a != b) || (c < b) equals to %d \n", result);
result = !(a != b);
printf("!(a == b) equals to %d \n", result);
result = !(a == b);
printf("!(a == b) equals to %d \n", result);
// assignment operators
c =  a;
   printf("Line 1 - =  Operator Example, Value of c = %d\n", c );

   c +=  a;
   printf("Line 2 - += Operator Example, Value of c = %d\n", c );

   c -=  a;
   printf("Line 3 - -= Operator Example, Value of c = %d\n", c );

   c *=  a;
   printf("Line 4 - *= Operator Example, Value of c = %d\n", c );

   c /=  a;
   printf("Line 5 - /= Operator Example, Value of c = %d\n", c );

   c <<=  2;
   printf("Line 7 - <<= Operator Example, Value of c = %d\n", c );

   c >>=  2;
   printf("Line 8 - >>= Operator Example, Value of c = %d\n", c );

   c &=  2;
   printf("Line 9 - &= Operator Example, Value of c = %d\n", c );

   c ^=  2;
   printf("Line 10 - ^= Operator Example, Value of c = %d\n", c );

   c |=  2;
   printf("Line 11 - |= Operator Example, Value of c = %d\n", c );
   
   c %= a;     // c = 0
    printf("c = %d\n", c);
    
    //bitwise operator
    printf("Output = %d", a&b);
    printf("Output = %d", a|b);
    printf("Output = %d", a^b);
    printf("Output = %d\n",~35);
    printf("Output = %d\n",~-12);
    for (i=0; i<=2; ++i)
        printf("Right shift by %d: %d\n", i, num>>i);

     printf("\n");

     for (i=0; i<=2; ++i) 
        printf("Left shift by %d: %d\n", i, num<<i);
        
    // special operators
    printf("size of int %lu\n",sizeof(c));
    printf("address of c %p\n",&c);
    x = &a;
    printf("value pointed by pointer x is %d\n",*x);
    //conditional Operator
    int age;  // variable declaration  
    printf("Enter your age");  
    scanf("%d",&age);   // taking user input for age variable  
    (age>=18)? (printf("eligible for voting")) : (printf("not eligible for voting"));  // conditional operator
    
return 0;
}
