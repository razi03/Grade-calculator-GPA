#include <iostream>
using namespace std;
int main()
{
	float GP;
	int Grade;
	cout << "Enter your grade points: \n";
	cin >> GP;
	if (GP >= 3.67)
	{
		cout << "Your grade is A+ \n";
		return 0;
	}
	else{
		if (GP >= 3.33)
		{
			cout << "Your grade is A- \n";
			return 0;
		}
		else
		{
			if (GP>=3.00)
			{
				cout << "Your grade is B \n";
				return 0;
			}
			else
			{
				if (GP>=2.67)
				{
					cout << "Your grade is B- \n";
					return 0;
				}
				else
				{
					if (GP>=2.33)
					{
						cout << "Your grade is C+ \n";
						return 0;
					}
					else
					{
						if (GP>=2.00)
						{
							cout << "Your grade is C \n";
							return 0;
						}
						else
						{
							if (GP>=1.00)
							{
								cout << "Your grade is D \n";
								return 0;
							}
							else
							{
								if (GP>=0.00)
								{
									cout << "Your grade is F \nBetter luck next time! \n";
									return 0;
								}
							}
						}
					}
				}
			}
		}
	}

}