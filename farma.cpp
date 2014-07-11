#include "farma.h"
#include "hodowlane.h"
#include <iostream>
#include <set>

Farma::Farma(Hodowlane * zwierze, int pierwszy_zakup)
{
	if ((0 >= pierwszy_zakup)||(nullptr == zwierze)){
		std::cout << "\nDodaj zwierzeta do hodowli";
	}	else if (1 == pierwszy_zakup){
		dodaj_rase(zwierze->podaj_rase());
		//dodaj_zwierze(zwierze, pierwszy_zakup);
		spis.push_back(zwierze);
	}else if (1 < pierwszy_zakup){
		dodaj_zwierze(*(zwierze->nowe_zwierze()), (pierwszy_zakup ));
	}
	rok_firmy = 1;
}

Farma::~Farma()
{
	std::cout << "\nGratulacje! To byl dobry dzien! Farma zabezpieczona.";
	std::cout << "\nSpis zawiera: " << spis.size() << " pozycji";

}

void Farma::dodaj_zwierze(Hodowlane & zwierze, int ile){
	for(int i = 0; i < ile; i++){
		Hodowlane * to =  zwierze.nowe_zwierze();
		spis.push_back(to);			
	}
}

bool Farma::dodaj_rase(std::string nowa_rasa_hodowlana){
	if ("" == nowa_rasa_hodowlana){
		std::cout << "\nPodaj now¹ rase do twojej hodowli.";
		return false;
	}else {
		rasy_hodowane_tu.insert(nowa_rasa_hodowlana);
		if(false == ret.second){
			std::cout << "\nRasa " << nowa_rasa_hodowlana <<" juz jest w hodowli";
		}
		return true;
	}
}
void Farma::wypisz_statystyke(){
	for (int i = 0; i < spis.size(); i++)
		spis[i]->wypisz();
}