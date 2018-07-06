/*********************************************************
// What is new in this version?
    -> This is the second version of 'prime search engine'
    -> It can determines if the incoming number is a prime
    -> Now it can handle numbers under 2

// Problems with this version
    -> It need to be optimized since on the case of large
       numbers the algorithm is very slow
*********************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    /****************************************************
    //  Variables
    *****************************************************/
    int num;    /// the number, that we read from std in.
    int iter;   /// the iterator

    /****************************************************
    //  Reading an integer from standard input
    *****************************************************/
    printf("Please give an integer number, then press ENTER! ");
    scanf("%d", &num);

    /****************************************************
    //  Handle the number if it's less then 2
    *****************************************************/
    if ( num < 2)
    {
        printf("Error! The incoming number must not be less than 2!\n");
        return 0;
    }

    /*****************************************************
    //  Searching the first number, with that we can
    //  divide the 'num'
    *****************************************************/
    for(iter = 2; (iter <= num) && (num%iter != 0); iter++);

    /*****************************************************
    //  iter = num means, that 'num' is can be only divided
    //  with number 'num', so the 'num' is prime
    *****************************************************/
    if (iter == num) printf("Number %d is a prime!\n", num);
    else printf("Number %d is NOT a prime!\n", num);

    return 0;
}
