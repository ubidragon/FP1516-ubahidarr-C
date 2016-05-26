/*
 * cadena.c
 *
 *  Created on: 11/5/2015
 *      Author: Francisco
 */

#include "cadena.h"

void quitaSaltoDeLinea(Cadena c) {
	int l = strlen(c);
	if(c[l-1] == '\n') {
		c[l-1] = '\0';
	}
}
