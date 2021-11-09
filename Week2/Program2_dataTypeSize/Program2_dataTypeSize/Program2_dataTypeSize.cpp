#include <iostream>
int main()
{
	std::cout << "Size of char: " << sizeof(char) << " bytes" << std::endl;
	std::cout << "Size of int: " << sizeof(int) << " bytes" << std:: endl;
	std::cout << "Size of short int: " << sizeof(short int) << " bytes" << std::endl;
	std::cout << "Size of long int: " << sizeof(long int) << " bytes" << std::endl;
	std::cout << "Size of float: " << sizeof(float) << " bytes" << std::endl;
	std::cout<<"Size of double: "<<sizeof(double)<<" bytes"<<std::endl;

	typedef int date;
	date currentDate;

	enum Month
	{
		January=1,
		FEBRUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};
	Month currntMonth;

	int myNum;
	myNum = 5;

	double myNum1 = 4.0, myNum2 = 4.32, myNum3;

	const float kUniversalGravity = 6.67408f;
	//this is a variable that cannot be changed


}