#include "perfect_numbers.h"

kind classify_number(int num){
    int sum =0;
    if(num ==1 )
        return 3;
    if(num < 1)
        return -1;
    for(int i =1; i<num; i++){
        if(num%i==0)
            sum = sum+i;
    }
    if(sum == num)
        return 1;
    else if(sum > num)
        return 2;
    else if(sum <num)
        return 3;
    else 
        return -1;
        
}