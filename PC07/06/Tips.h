#pragma once
class Tips
{
public:
	Tips(double tax);
	~Tips();

	double computeTip(double total, double tipRate);

private:
	double taxRate;
};

inline Tips::Tips(double tax = 0.085)
{
	taxRate = tax;
}

inline Tips::~Tips()
{
}

inline double Tips::computeTip(double total, double tipRate)
{
	return (tipRate / 100) * (total / (1 + taxRate));
}							// calculates pre-tax total
