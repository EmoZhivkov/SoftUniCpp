// 05. MinMax.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int num, min, max, a;
	min = 0, max = 0;
	cin >> a;

	for (int i = 1; i <= a; i++)
	{ 
		if (i == 1)
		{
			cin >> num;
			min = num;
			max = num;
		}
		else 
		{
			cin >> num;
			if (num < min)
			{
				min = num;
			}
			if (num > max)
			{
				max = num;
			}
		}
	}
	cout << min << " " << max << endl;
    return 0;
}

