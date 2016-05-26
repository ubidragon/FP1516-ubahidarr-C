/*
 * testEspacio.c
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#include "espacio.h"
#include "cadena.h"

void testLeeEspaciosFichero(const Cadena nombreFichero); 
void testInicializaEspacio();
void testInicializaEspacio2();

int main (void){

	void testLeeEspaciosFichero(const Cadena nombreFichero);
void testInicializaEspacio();
void testInicializaEspacio2();

return 0;
}


void testLeeEspaciosFichero(const Cadena nombreFichero){
	printf("Testear \n");
	ArrayEspacios espacios;

	int nE;
	nE = leeEspaciosFichero("./res/espacios.txt", espacios);
	muestraEspacios(espacios, nE);

} 

void testInicializaEspacio(){
	printf("Testear \n");
	Espacio esp;

	int res = inicializaEspacio(&esp, "A1.10", 1, -1);

	if(res == -1){
		printf("Problema con la inicializacion\n");
	}else{
		printf("Espacio inicializado correctamente\n");
		muestraEspacio(esp);
	}

}

void testInicializaEspacio2(){
	printf("Testear \n");
	Espacio esp;

	int res = inicializaEspacio(&esp, "A1.10", 1, 100 );

	if(res == -1){
		printf("Problema con la inicializacion\n");
	}else{
		printf("Espacio inicializado correctamente\n");
		muestraEspacio(esp);
	}

}
