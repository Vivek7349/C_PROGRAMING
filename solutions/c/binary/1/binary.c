#include "binary.h"

int convert(const char *input){
    int dec =0;
    int len = strlen(input)-1;
    
    for(int i=len; i>=0; i--){
        if(input[i] != '1' && input[i]!= '0')
            return -1;
        if(input[i] == '1')
            dec = dec + 1*pow(2,len-i);
        else
            dec = dec + 0;
        
    }
    return dec;
}