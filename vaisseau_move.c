/*
 * vaisseau_move.c
 *
 *  Created on: 4 mars 2020
 *      Author: allan
 */


#include "vaisseau_move.h"

uint8_t vaisseau_move(uint8_t x, uint8_t y, bool new_x) {
	vt100_move(x, y);
	serial_putchar(' ');
	//si le vaisseau atteint la limite en 1 de l'ecran
	if ((x == 1) && (new_x == false)) {
			vt100_move(1, y);
			serial_putchar('^');
		}
	//si le vaiseau atteind la limite en 80 de l'ecran
	else if ((new_x == true) && (x == VT100_SCREEN_WIDTH))
	{
			vt100_move(80, y);
			serial_putchar('^');
	}
	//si le vaisseau le touche pas le bors de l'ecran
	else {
		if (new_x == true) {
			x++;
		} else if (new_x == false) {
			x--;
		}
		vt100_move(x, y);
		serial_putchar('^');
	}
	return x;
}
