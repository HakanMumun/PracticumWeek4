// ConsoleApplication43.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;


int _tmain(int argc, _TCHAR* argv[])
{  /*
	Task 1
		int number;
	cout << "Enter number between 5 and 20: " << endl;
	cin >> number;
	int result;
	if (number >= 5 && number <= 20)
	{
		result = number % 2;
		switch (result)
		{
		case 0: cout << "The number is even" << endl; break;
		case 1: cout << "The number is odd" << endl; break;

		}
	}
	else
	{
		cout << "Invalid number!" << endl;
	}

	Task 2
		double a, b, c;
	cout << "a=";
	cin >> a;
	cout << "b=";
	cin >> b;
	cout << "c=";
	cin >> c;
	if ((a + b)>c && (b + c)>a && (a + c)>b)
	{
		cout << "Triangle exists" << endl;
		if ((a == b) && (b == c) && (a == c))
		{
			cout << "equilateral" << endl;
		}
		else if ((a == b) || (b == c) || (a == c))
		{
			cout << "isosceles " << endl;
		}
		else
		{
			cout << "scalene" << endl;
		}

	}
	else
	{
		cout << "Triangle doesn't exists" << endl;
	}

	Task 3
		int number;
	cout << "number=";
	cin >> number;
	if (number > 99 && number <1000)
	{
		int a, b, c;
		a = number / 100;
		b = number / 10 % 10;
		c = number % 10 % 10;
		int multiplied = a*b*c;
		int sum = a + b + c;
		if (multiplied >99 && multiplied <1000)
		{
			cout << "Yes" << " " << multiplied - sum << endl;
		}
		else
		{
			cout << "No" << " " << multiplied << endl;
		}

	}
	else
	{
		cout << "Not a three-digit number !" << endl;
	}
	Task 4
		int n;
	cin >> n;
	int currentNum;
	int maxNum = numeric_limits<int>::min();
	for (int i = 0; i <= n; i++)
	{
		cin >> currentNum;
		if (currentNum > maxNum && currentNum<0)
		{
			maxNum = currentNum;
		}

	}
	cout << maxNum << endl;


	Task 5
		int number;
	cout << "number=";
	cin >> number;
	if (!cin)
	{
		cout << "Error.Bad Input!" << endl;
		return 1;
	}
	if (number <= 0)
	{
		cout << "Incorrect Input!" << endl;
		return 1;
	}
	int fact = 1;
	for (int i = 1; i <= number; i++)
	{
		fact *= i;
	}
	cout << number << "!=" << fact << endl;




	Task 6
		int number;
	cout << "Please introduce number:";
	cin >> number;
	for (int i = 0; i < number; i++)
	{
		int ai;
		ai = (i*i) + (3 * i);
		cout << "ai=" << ai << endl;
	}




	Bonus Task
		int n;
	cout << "n=";
	cin >> n;
	int fib0 = 0;
	int fib1 = 1;
	int fibonacci;
	for (int i = 0; i <= n; i++)
	{
		cout << fib1 << "" << endl;
		fibonacci = fib0 + fib1;
		fib0 = fib1;
		fib1 = fibonacci;
	

			return 0;
	}  */
	
