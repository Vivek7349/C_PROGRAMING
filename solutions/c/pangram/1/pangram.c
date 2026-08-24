#include "pangram.h"
#include<stdio.h>
#include<string.h>
#include<ctype.h>
bool is_pangram(const char *sentence){
    if(sentence == NULL)
        return 0;
    if(strcmp(sentence, "")==0)
        return 0;
    size_t len = strlen(sentence);
    char alpha = 'A';
    while(alpha<91){
         size_t i;
        for(i =0; i<len; i++){
            if(sentence[i]==alpha || sentence[i]==(alpha+32) ){
                alpha++;
                break;
            }
        }
         if (i == len) 
            return 0;
        
    }
    if(alpha==91)
        return 1;
    else
        return 0;

    return 0;
}