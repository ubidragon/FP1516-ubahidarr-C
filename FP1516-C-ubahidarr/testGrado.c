/*
 * testGrado.c
 *
 *  Created on: 7 de may. de 2016
 *      Author: Ubidragon
 */

#include "grado.h"
#include "cadena.h"
#include <stdio.h>


void testInicializaGrado();
void testInicializaGrado2();
void testInicializaGrado3();


int main (void){

void testInicializaGrado();
void testInicializaGrado2();
void testInicializaGrado3();

return 0;

}


void testInicializaGrado(){
	printf("Inicializar grado\n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;

	int res;
	int i;

	g.minimoCreditosOptativas = 120.0;
	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);

	for(i = 0; i < g.numOptativas; ++i){
	 	/* code */
	 	optativas[i].creditos = 6.0;
	 } 

	 res =inicializaGrado(&g, "test", "test",obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	 if (res==-1)
	 {
	 	/* code */
	 	printf("Problema al crear el grado \n");
	 }else{
	 	printf("Grado creado correctamente \n");
	 	muestraGrado(g);
	 }

}

void testInicializaGrado2(){
	printf("Inicializar grado\n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;

	int res;
	

	g.minimoCreditosOptativas = 6.0;
	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);

	 res =inicializaGrado(&g, "test", "test",obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	 if (res==-1)
	 {
	 	/* code */
	 	printf("Problema al crear el grado \n");
	 }else{
	 	printf("Grado creado correctamente \n");
	 	muestraGrado(g);
	 }

}

void testInicializaGrado3(){
	printf("Inicializar grado\n");
	ArrayAsignaturas obligatorias;
	ArrayAsignaturas optativas;
	Grado g;

	int res;
	int i;

	g.minimoCreditosOptativas = 12.0;
	g.numObligatorias = leeAsignaturasFichero("./res/asignaturas.txt", obligatorias);
	g.numOptativas = leeAsignaturasFichero("./res/asignaturas.txt", optativas);

	for (i = 0; i < g.numOptativas; i++){
	 	/* code */
	 	optativas[i].creditos = 6.0;
	 } 

	 res =inicializaGrado(&g, "test", "test",obligatorias, g.numObligatorias, optativas, g.numOptativas, g.minimoCreditosOptativas);

	 if (res==-1)
	 {
	 	/* code */
	 	printf("Problema al crear el grado \n");
	 }else{
	 	printf("Grado creado correctamente \n");
	 	muestraGrado(g);
	 }

}
