#include <stdio.h>
int main(int argc, char const *argv[])
{
    int n,lastdigit;
    int sum,original;
    printf("Armstrong numbers between 1 and 500 is\n");
  
  
    for (int n = 1; n <= 500; n++)
    {
     original = n;
     sum =0;
        while (original!=0)
    {
      lastdigit=original%10;
      sum=sum+(lastdigit*lastdigit*lastdigit);
    original=original/10;
    }
     if( sum==n)
    printf("%d\n",n);
 
   
    }
    
 
    
    return 0;
}



// #include <stdio.h>
// int main()
// {
//     int n, num, rem, sum;

//     printf("Armstrong numbers between 1 and 500 are:\n");

//     for (n = 1; n <= 500; n++)
//     {
//         num = n;      // store the number to compare later
//         sum = 0;      // reset sum for each new number

//         while (num != 0)
//         {
//             rem = num % 10;            // get last digit
//             sum = sum + (rem * rem * rem);  // cube and add
//             num = num / 10;            // remove last digit
//         }

//         if (sum == n)
//             printf("%d\n", n);  // print Armstrong number
//     }

//     return 0;
// }
