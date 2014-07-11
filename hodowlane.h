#ifndef HODOWLANE_H
#define HODOWLANE_H
#include <string>
class Hodowlane
{
	public:
		virtual void rob() = 0;
		virtual int podaj_wiek() = 0;
		virtual std::string podaj_rase() = 0;
		virtual char podaj_plec() = 0;
		virtual int podaj_nr_ewidencyjny() = 0;
		virtual Hodowlane * nowe_zwierze() = 0;
		virtual void wypisz() = 0;
};

#endif
