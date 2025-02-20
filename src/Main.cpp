// Below is C++ program
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
	system("cls");
	
	int sec; // second

	cout << "set timer: ";
	cout << "set timer: ";
	cin >> sec;

	
	for (int i = sec; i > 0 ; --i)
	{
		system("cls");

		cout << "timer " << sec << " seconds" << endl;
		cout << i << "s" << endl;

		this_thread::sleep_for(chrono::seconds(1));
	}

	for (int i = 0; true; ++i)
	{
		system("cls");

		if (i == 0)
		{
			cout << "timer " << sec << " seconds" << endl;
			cout << i << "s" << " [time's up]" << endl;
		} else {
			cout << "timer " << sec << " seconds" << endl;
			cout << "-" << i << "s" << " [time's up]" << endl;
		}

		this_thread::sleep_for(chrono::seconds(1));
	}

	system("cls");
	cout << "time's up" << endl;

	return 0;
}
