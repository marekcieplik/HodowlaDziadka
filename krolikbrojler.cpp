#include "krolikbrojler.h"
#include <string>
#include <iostream>

int KrolikBrojler::licznik = 0;

KrolikBrojler::KrolikBrojler(std::string r, char p, int w)
{
	rasa = r;
	plec = p;
	wiek = w;
	licznik++;
	nr_ewidencyjny = licznik;
	std::cout << "\nNowy krolik brojler o numerze: " << nr_ewidencyjny;
}

KrolikBrojler::~KrolikBrojler()
{
	std::cout << "\nUsunieto krolika brojlera numer: " << nr_ewidencyjny;
	licznik --;
}

void KrolikBrojler::			rob(){
			std::cout << "\nCo mam robic?!";
		}
int KrolikBrojler:: 			podaj_wiek(){
			return wiek;
		}
std::string KrolikBrojler::	podaj_rase(){
			return rasa;
		}
char KrolikBrojler::			podaj_plec(){
			return plec;
		}
int KrolikBrojler::podaj_nr_ewidencyjny(){
			return nr_ewidencyjny;
		}
Hodowlane * KrolikBrojler::	   nowe_zwierze(){
	Hodowlane * pHodowlane = new KrolikBrojler;
		return pHodowlane;
		}
void KrolikBrojler::wypisz(){
	std::cout << "\n" << rasa << " nr: " << nr_ewidencyjny << " wiek: " << wiek << " plec:" << plec;
}
