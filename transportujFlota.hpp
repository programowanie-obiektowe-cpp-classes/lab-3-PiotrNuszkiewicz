#pragma once

#include "Stocznia.hpp"

unsigned int transportujFlota(unsigned int towar)
{

    unsigned int przetransportowano_lacznie = 0;

    unsigned int liczba_zaglowcow = 0;

    Stocznia     stocznia{};

    while (przetransportowano_lacznie < towar) {

        Statek*nowy_statek= stocznia();

        unsigned int ilosc_przetransportowana = nowy_statek->transportuj();

        przetransportowano_lacznie += ilosc_przetransportowana;

        if (dynamic_cast< Zaglowiec* >(nowy_statek) != nullptr) {
            liczba_zaglowcow++;
        }
        delete nowy_statek;
    }
    return liczba_zaglowcow;

    // Twoja implementacja tutaj
    return 0;
}