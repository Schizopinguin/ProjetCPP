#ifndef C_LECTURE_H
#define C_LECTURE_H

#include <string>
#include <iostream>
#include <fstream>
#include <cstring>


class CLecture
{
private:
	char* pLECnomFichier;

	unsigned int uiLECnbLignes;

	unsigned int uiLECnbColonnes;

	double** pLECtabValeurs;

	char* pLECnomType;


public:
	CLecture();

	CLecture(char* pnF);

	CLecture(CLecture &LEClecture);

	~CLecture();

	int LECGetNbLignes();

	int LECGetnbColonne();

	char* LECGetnomType();

	double** LECGetTabValeurs();

	void LECSetNbLigne();

	void LECSetNbColonne();

	void LECSetNomType();

	void LECSetTabValeurs();

};
#endif
