#include "eliuds_eggs.h"


int egg_count(const int dec){
    if(dec == 0)
        return 0;
    if(dec == 1)
        return 1;
    int num = dec;
    int count = 0;
    while(num > 1){
        if(num % 2 ==1)
            count++;
        num = num /2;
    }
    return count+1;
}