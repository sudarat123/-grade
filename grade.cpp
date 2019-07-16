/* Program calcurate grade */
#include <iostream>
using namespace std;
int main()
{
	int score;
	cout << "Enter score (0-100) : ";
	cin >> score;
	if((score >=0) && ( score <= 100 ))
	{
		if ((score >=90) && ( score <= 100 ))
		{
			cout <<"You get grade A\n";
			cout <<"You so excllent!!!\n";
		}
		else if ((score >=80) && ( score <= 89 ))
		{
			cout <<"You get grade B\n";
			cout <<"You so good!!\n";
		}
		else if  ((score >=70) && ( score <= 79 ))
		{
			cout <<"You get grade C\n";
			cout <<"You can attemp.\n";
		}
		else if  ((score >=60) && ( score <= 69 ))
		{
			cout <<"You get grade D\n";
			cout <<"Danger!!.\n";
		}
		else if  ((score >=0) && ( score <= 59 ))
		{
			cout <<"You get grade F\n";
			cout <<"So sad.\n";
		}
		
	}
	else 
	cout << "Plese enter score 0-100.\n";
	return 0;
}