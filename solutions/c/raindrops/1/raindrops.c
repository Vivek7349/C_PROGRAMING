#include "raindrops.h"
#include <string.h>
#include <stdio.h>
void convert(char result[], int drops){
    
    if(drops%3==0 && drops%5!=0 && drops%7!=0)
        strcpy(result, "Pling");
    else if(drops%3!=0 && drops%5==0 && drops%7!=0)
        strcpy(result, "Plang");
    else if(drops%3!=0 && drops%5!=0 && drops%7==0)
        strcpy(result, "Plong");
    else if(drops%3==0 && drops%5==0 && drops%7!=0)
       strcpy(result, "PlingPlang");
    else if(drops%3==0 && drops%5!=0 && drops%7==0)
       strcpy(result, "PlingPlong");
    else if(drops%3!=0 && drops%5==0 && drops%7==0)
       strcpy(result, "PlangPlong");
    else if(drops%3==0 && drops%5==0 && drops%7==0)
        strcpy(result, "PlingPlangPlong");
    else
        sprintf(result, "%d", drops);
}