#pragma once
#include "PatientAccount.h"

class Pharmacy
{
public:
	Pharmacy();
	~Pharmacy();

	void addPharmacyCharge(PatientAccount&);
	void getPharmacy(int);

private:
	double charge;
};

