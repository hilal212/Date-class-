# include <iostream>

using namespace std;

const char* months[] = { "", "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December" };

class Date
{
public:
	// constructor with all needed parameters
	Date(int _day, int _month, int _year)
		: day(_day)
		, month(_month)
		, year(_year)
	{}

	void Print1() const
	{
		cout << month << "/" << day << "/" << year << "\n";
	}

	void Print2() const
	{
		cout << months[day] << " " << day << ", " << year << "\n";
	}

	void Print3() const
	{
		cout <<  day <<" " << months[day] << " " << year << "\n";
	}

private:
	int month;
	int day;
	int year;
};

int main()
{
	// variables store day, month and year
	int day = -1, month = -1 ,year;

	// input day until it's valid
	while (!(day >= 1 && day <= 31))
	{
		cout << "Please enter day: ";
		cin >> day;
	}

	// input month until it's valid
	while (!(month >= 1 && month <= 12))
	{
		cout << "Please enter month: ";
		cin >> month;
	}

	cout << "Please enter year: ";
	cin >> year;

	// construct Date object and print it
	Date date(day, month, year);
	
	date.Print1();
	date.Print2();
	date.Print3();
}
	
