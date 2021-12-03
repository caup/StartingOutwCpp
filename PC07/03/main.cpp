// Widget Factory
#include <iostream>

class Widget
{
public:
	Widget();
	~Widget();

	void setWidgets(int w)
	{
		widgets = w;
	}

	void calcWidgets();

private:
	const int MAX_PER_DAY = 160;
	int widgets;
};

Widget::Widget()
{
}

Widget::~Widget()
{
}

void Widget::calcWidgets()
{
	std::cout << "Days: " << static_cast<double>(widgets) / MAX_PER_DAY;
}

int main()
{
	Widget production;
	int num;

	std::cout << "How many widgets do you want produced? ";
	std::cin >> num;

	production.setWidgets(num);
	production.calcWidgets();

	return 0;
}