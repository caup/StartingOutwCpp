#pragma once
class PatientAccount
{
public:
	PatientAccount();
	~PatientAccount();

	void calcDaysCharge(int d);
	double getCharges();
	void addToCharges(double);

private:
	double charges, dailyRate;
};

