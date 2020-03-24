/*
 * ecran_init.c
 *
 *  Created on: 4 mars 2020
 *      Author: allan
 */

#include "ecran_init.h"

uint8_t ecriture(uint8_t chaine_char) {
	uint8_t taille_char;
	taille_char = chaine_char;
	taille_char = VT100_SCREEN_WIDTH - taille_char;
	return taille_char / 2;
}

void ecran_init(void) {
	uint8_t chaine_char[] = "press S to start";
	uint8_t chaine_char_2[] = "by Lazes Allan";
	uint8_t chaine_char_3[] = "Space invader";
	uint8_t chaine_char_4[] = "screen required 80x24";
	uint8_t taille_char;

	taille_char = ecriture(sizeof(chaine_char_3));
	vt100_move(taille_char, 5);
	serial_puts((char *) chaine_char_3);

	taille_char = ecriture(sizeof(chaine_char_2));
	vt100_move(taille_char, 7);
	serial_puts((char *) chaine_char_2);

	taille_char = ecriture(sizeof(chaine_char_4));
	vt100_move(taille_char, 20);
	serial_puts((char *) chaine_char_4);

	taille_char = ecriture(sizeof(chaine_char));
	vt100_move(taille_char, 12);
	serial_puts((char *) chaine_char);
}
