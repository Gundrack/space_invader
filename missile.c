/*
 * missile.c
 *
 *  Created on: 4 mars 2020
 *      Author: allan
 */
#include "missile.h"

uint8_t missile(uint8_t x, uint8_t y) {
	vt100_move(x, y);
	serial_putchar(' ');
	y--;
	vt100_move(x, y);
	serial_putchar('.');

	return y;
}
