#include "py/mphal.h"

void Diymore_F407VG_board_early_init(void) {
    //There's no external SPI flash on this board
    // set SPI flash CS pin high
/*
    mp_hal_pin_output(pin_A15);
    mp_hal_pin_write(pin_A15, 1);
*/
}
