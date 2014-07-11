#include <iostream>
#include <cstdio>
#include "hodowlane.h"
#include "farma.h"
#include "krolikbrojler.h"

int main(){
	KrolikBrojler kb1;
	Hodowlane * zwierze;
	zwierze = & kb1;
	Farma f1(zwierze);

	f1.dodaj_zwierze(*zwierze,10);

	f1.wypisz_statystyke();

	std::getchar();	
	
	return 0;
}
