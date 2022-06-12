#pragma once
#include "Adresa.h"
#include "Abonament.h"
#include <string>;
#include "Date.h"

using std::string;

class Client
{
private:
	Adresa adresa;
	string nume, prenume, CNP;
	Abonament abonament;
	Date data_expirare;

public:
	Client(Adresa adresa, string nume, string prenume, string CNP,  Abonament abonament, Date data) {
		this->adresa = adresa;
		this->nume = nume;
		this->prenume = prenume;
		this->abonament = abonament;
		this->CNP = CNP;
		this->data_expirare = data;
	}

	Adresa getAdresa() { return this->adresa; }

	string getNume() { return this->nume; }

	string getPrenume() { return this->prenume; }

	Abonament getAbonament() { return this->abonament; }

	void setAdresa(string oras, string strada, string numar, string detalii) {
		this->adresa.setStrada(strada);
		this->adresa.setOras(oras);
		this->adresa.setNumar(numar);
		this->adresa.setDetalii(detalii);

	}

	void setNume(string nume) {
		this->nume = nume;
	}

	void setPrenume(string prenume) {
		this->prenume = prenume;
	}

	void setAbonament(Abonament ot){
		this->abonament = ot;
	}






};

