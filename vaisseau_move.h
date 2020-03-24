/*
 * vaisseau_move.h
 *
 *  Created on: 4 mars 2020
 *      Author: allan
 */

#ifndef VAISSEAU_MOVE_H_
#define VAISSEAU_MOVE_H_

#include "serial.h"
#include "vt100.h"
#include <stdbool.h>

uint8_t vaisseau_move(uint8_t x, uint8_t y, bool new_x);

#endif /* VAISSEAU_MOVE_H_ */
