#include "high_scores.h"


/// Return the latest score.
int32_t latest(const int32_t *scores, size_t scores_len){
    return scores[scores_len-1];
}

/// Return the highest score.
int32_t personal_best(const int32_t *scores, size_t scores_len){
    int32_t high =0;
    for(size_t i=0 ; i < scores_len; i++){
        if(scores[i]>high){
            high = scores[i];
        }
    }
    return high;
}

size_t personal_top_three(const int32_t *scores, size_t scores_len, int32_t *output)
{
    int32_t first = INT32_MIN;
    int32_t second = INT32_MIN;
    int32_t third = INT32_MIN;

    for (size_t i = 0; i < scores_len; i++)
    {
        int32_t value = scores[i];

        if (value > first)
        {
            third = second;
            second = first;
            first = value;
        }
        else if (value > second)
        {
            third = second;
            second = value;
        }
        else if (value > third)
        {
            third = value;
        }
    }

    size_t count = 0;

    if (scores_len >= 1)
    {
        output[count] = first;
        count++;
    }

    if (scores_len >= 2)
    {
        output[count] = second;
        count++;
    }

    if (scores_len >= 3)
    {
        output[count] = third;
        count++;
    }

    return count;
}