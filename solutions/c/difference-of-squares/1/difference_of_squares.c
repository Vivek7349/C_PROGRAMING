#include "difference_of_squares.h"


unsigned int sum_of_squares(unsigned int number){
    if(number == 1)
        return number*number;
    else{
        return (number*number) + sum_of_squares(number-1);
    }
}

unsigned int square_of_sum(unsigned int number){
    unsigned int i;
    unsigned int sum =0;
    for( i = number; i >= 1; i --)
        sum = sum + i;
    return sum * sum;
}

unsigned int difference_of_squares(unsigned int number){
    int a = square_of_sum(number) ;
    int b = sum_of_squares(number);
    if (a>b)
        return a-b;
    else 
        return b-a;
}