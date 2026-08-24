#include "hamming.h"


int compute(const char *lhs, const char *rhs){
    int len1= strlen(lhs);
    int len2 = strlen(rhs);
    if(len1 != len2)
        return -1;
    int count =0;
    for(int i =0; lhs[i]!= '\0'; i++){
        if(lhs[i] != rhs[i])
            count++;
    }
    return count;
}