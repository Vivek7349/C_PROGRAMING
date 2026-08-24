#include "resistor_color_trio.h"
#include <string.h>


resistor_value_t color_code(resistor_band_t band[]){
    int num=0;
    resistor_value_t result;
    if(band[1]== BLACK){
        num = band[0];
        result.value = num;
    }
    else{
        num = band[1];
        num = num + band[0]*10;
        result.value=num;
    }

    switch(band[2]){
        case BLACK:
            result.unit =OHMS;
            break;
        case BROWN:
            result.unit =OHMS;
             result.value= result.value*10;
            break;
        case RED:
            result.unit= KILOOHMS;
            break;
        case ORANGE:
            result.unit= KILOOHMS;
            break;
        case YELLOW:
            result.unit= KILOOHMS;
            result.value= result.value*10;
            break;
         case GREEN:
            result.unit =KILOOHMS;
            result.value= result.value*100;
            break;
        case BLUE:
            result.unit= MEGAOHMS;
            break;
         case VIOLET:
            result.unit= MEGAOHMS;
            result.value= result.value*10;
            break;
        case GREY:
            result.unit= MEGAOHMS;
            result.value= result.value*100;
            break;
        case WHITE:
            result.unit =GIGAOHMS;
            break;
    }
    return result;
}