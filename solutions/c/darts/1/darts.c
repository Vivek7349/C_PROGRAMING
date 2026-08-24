#include "darts.h"


uint8_t score(coordinate_t landing_position){
    
    float r = sqrt(square(landing_position.x)+square(landing_position.y));
    if(r>=0 && r<=1)
        return 10;
    if(r>1 && r<=5)
        return 5;
    if(r>5 && r<=10)
        return 1;
    else
        return 0;
}