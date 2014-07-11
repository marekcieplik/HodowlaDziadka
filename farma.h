#ifndef FARMA_H
#define FARMA_H
#include <set>
#include <vector>
#include <string>
#include "hodowlane.h"

class Farma
{
	public:
		Farma(Hodowlane * = nullptr, int = 1);
		~Farma();
		void dodaj_zwierze(Hodowlane & zwierze, int );
		bool dodaj_rase(std::string = "");
		void wypisz_statystyke();
	protected:
		Hodowlane * zwierze;
		std::set<std::string> rasy_hodowane_tu;
		std::vector<Hodowlane*> spis;
		int rok_firmy;

		//do obslugi <set>
		std::set<int>::iterator it;
		std::pair<std::set<int>::iterator,bool> ret;
};

#endif
