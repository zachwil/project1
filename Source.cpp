#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>

/*This program displays 3 types of chairs and asks the user to specify the amount
of chairs that they intend to purchase. It then calculates the total price for each
type of chair and outputs the information to the user*/

using namespace std;

int main()
{
	//define variables 
	double  acamount, actotal;
	double  modamount, modtotal;
	double  fcamount, fctotal;
	double total;

	//set pricing

	double acprice = 85.00;
	double modprice = 57.50;
	double fcprice = 127.75;

	//output the Types of chairs and their prices
	cout << setw(18) << "STYLE:" << "\tPRICE:" << endl;
	cout << setw(18) << left << "American Colonial:" << "\t $" << fixed << setprecision(2) << showpoint << acprice << endl;
	cout << setw(18) << left << "Modern:" << "\t $" << fixed <<setprecision(2)<<showpoint << modprice << endl;
	cout << setw(18) << left << "French Classical:" << "\t $" << setprecision(2) << showpoint << fcprice << endl; 
	cout << endl << endl << endl;

	//collect the amount of each chair the user is intending to buy
	cout << "Enter the number of American Colonial chairs: " << endl;
	cin >> acamount;
	cout << "Enter the number of Modern chairs: " << endl;
	cin >> modamount;
	cout << "Enter the number of French Classical chairs: " << endl;
	cin >> fcamount;
	cout << endl << endl << endl;

	//calculate all of the totals
	actotal = acprice * acamount;
	modtotal = modprice * modamount;
	fctotal = fcprice * fcamount;
	total = actotal + modtotal + fctotal;

	//output the sales receipt
	cout << left << setw(46) << "The total sales for American Colonial Chairs: " << right << setw(5) << " $" << fixed << setprecision(2) << showpoint << actotal << endl;
	cout << left << setw(46) << "The total sales for Modern Chairs: " << right << setw(5) << " $" << fixed << setprecision(2) << showpoint << modtotal << endl;
	cout << left << setw(46) << "The total sales for French Classical Chairs: " << right << setw(5) << " $" << fixed << setprecision(2) << showpoint << fctotal << endl;
	cout << endl << endl; 
	cout << left << setw(46) << "The total sales for all chairs: " << right << setw(5) << " $" << fixed << setprecision(2) << showpoint << total << endl;

	return 0;
}
