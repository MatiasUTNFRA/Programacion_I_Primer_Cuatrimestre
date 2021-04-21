
#ifndef INPUTOUTPUT_H_
#define INPUTOUTPUT_H_

typedef struct
{
	char nombre [30];
	int golesMetidos;
	int partidosJugados;
	float promedioGoles;

}eDatoCompuesto;

int GetInt (char mensaje []);
float GetFloat (char mensaje []);
void GetStrings (char cadena [], int cantidad, char mensaje []);
eDatoCompuesto GetStructure ();
void ShowStructure (eDatoCompuesto TipoDato);

#endif
