#pragma once
#include "PatientAccount.h"

class Surgery
{
public:
	Surgery();
	~Surgery();

	void addSurgeryCharge(PatientAccount&);
	void getSurgery(int choice);

private:
	double charge;
};

