//============================================================================
// Name        : cpp-KT_ld1.cpp
// Author      : Tobias Gion <tgion>
// Version     :
// Copyright   : Your copyright notice
// Description : KT Übungsblatt LD1 - Strukturen
//============================================================================

#include <string>
#include <iostream>
#include <ostream>

#include "mensch.hpp"

Mensch::Mensch (std::string name, int alter, double gewicht, double hoehe) :
        name_ {name}, alter_ {alter}, gewicht_ {gewicht}, hoehe_ {hoehe} {

        std::cout	<< "***\n";
        std::cout 	<< name_
                        << " wurde geboren.\n";
        std::cout	<< "***\n";
}

void Mensch::essen (double gewicht) {
        this->gewicht_ += gewicht;

        std::cout	<< this->name_
                        << " hat "
                        << gewicht
                        << " kg gegessen.\n";
}

std::ostream& Mensch::status_drucken (std::ostream& out) {
        return out    	<< this->name_
                        << " ist "
                        << this->alter_
                        << " Jahre alt, wiegt "
                        << this->gewicht_
                        << " kg und ist "
                        << this->hoehe_
                        << " groß.\n";
}
