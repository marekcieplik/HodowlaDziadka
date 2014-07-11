#ifndef KROLIKBROJLER_H
#define KROLIKBROJLER_H
#include <string>
#include "hodowlane.h"

class KrolikBrojler : public Hodowlane
{
	public:
		virtual void 			rob();
		virtual int  			podaj_wiek();
		virtual std::string 	podaj_rase();
		virtual char 			podaj_plec();
		virtual int 			podaj_nr_ewidencyjny();
		virtual Hodowlane *		nowe_zwierze();
		virtual void			wypisz();
		
		KrolikBrojler(std::string = "Krolik Brojler", char = '\0', int = 0);
		~KrolikBrojler();
	protected:
	private:
		int wiek;
		std::string rasa;
		char plec;
		int nr_ewidencyjny;
		static int licznik;
};

#endif
