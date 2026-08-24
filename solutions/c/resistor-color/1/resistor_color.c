#include "resistor_color.h"

int color_code(resistor_band_t color) {
    return color; 
}

const resistor_band_t* colors(void) {
    // 'static' keeps the array alive in memory after the function returns
    static const resistor_band_t color_arr[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    
    return color_arr; // Returns a pointer to the start of the array
}
