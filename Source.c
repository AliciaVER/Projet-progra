#define _CRT_SECURE_NO_WARNINGS
#include "stdio.h"
#include"string.h"
#include"conio.h"
#include "math.h"
#include "..//module  pour projet/Lecture.h"
#include"../Projet.c/projet.h"
#include "string.h"
#define TAILLE_MAX 10000



main()
{
	char* chaine;
	char entier1[TAILLE_MAX] = "+4567", entier2[TAILLE_MAX] = "+5786544";
	int   c, grandentier, nombre=1;
	char* inverse;
	char** tab;
	
	chaine = Lire_Chaine_Dynamique("encodez un entier:");
	printf("%s\n", chaine);
	c = Lire_Grand_Entier(chaine);
	tab=LireTableauGrandsEntier(4);
	
	return 0;                                                                                                           
   }