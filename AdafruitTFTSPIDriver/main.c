#include "adafruit_tft_spi_driver.h"


int main(void){
    tft_vars lcd;
    lcd.width = 300;
    tft_init(&lcd);
    drawPixel(12, 40, 0xffff, &lcd);


}
