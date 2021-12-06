#pragma once
class PayRoll
{
public:
	PayRoll();
	~PayRoll();

	void setPayRate(double p);
	void setHoursWorked(double h);
	double calcGrossPay();
private:
	double payRate,
		hoursWorked;
};

