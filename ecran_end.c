/*
 * ecran_init.c
 *
 *  Created on: 4 mars 2020
 *      Author: allan
 */

#include "ecran_end.h"

uint8_t ecritur(uint8_t chaine_char) {
	uint8_t taille_char;
	taille_char = chaine_char;
	taille_char = VT100_SCREEN_WIDTH - taille_char;
	return taille_char / 2;
}

void ecran_end(void) {
	uint8_t chaine_char_2[] = "thanks for playing";
	uint8_t chaine_char_3[] = "Space invader";
	uint8_t chaine_char_4[] = "please restart";
	uint8_t taille_char;

	vt100_clear_screen();

	taille_char = ecritur(sizeof(chaine_char_3));
	vt100_move(taille_char, 5);
	serial_puts((char *) chaine_char_3);

	taille_char = ecritur(sizeof(chaine_char_2));
	vt100_move(taille_char, 7);
	serial_puts((char *) chaine_char_2);

	taille_char = ecritur(sizeof(chaine_char_4));
	vt100_move(taille_char, 10);
	serial_puts((char *) chaine_char_4);

	while (1) {
		/*Nothing to do*/
	}
}
