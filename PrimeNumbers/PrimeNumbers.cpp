// PrimeNumbers.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <vector>

void isPrime(std::vector<int>&, int*);

int main()
{
	int HowMany = 0;
	int* HowManyPointer = &HowMany;
	std::cout << "How many prime numbers do you want?" << std::endl;
	std::cin >> HowMany;
	std::vector<int>PrimeNumberVector;

	for (int i = 0; i < HowMany; i++)
	{
		PrimeNumberVector.push_back(i); // creating vector to store numbers to be checked if they are prime numbers
	}

	isPrime(PrimeNumberVector, HowManyPointer); // call to function

	system("pause");
	return 0;
}

	
void isPrime(std::vector<int>& PrimeNumberVector, int* HowManyPointer)
{

	for (int i = 2; i < *HowManyPointer; i++)
	{

		for (int j = 0; j < *HowManyPointer; j++)
		{
			if (2 > PrimeNumberVector[j]) //prime number must be bigger then 1
			{
				std::cout << "Not prime number! " << PrimeNumberVector[j] << std::endl;
			}
			else if (PrimeNumberVector[j] % i == 0)
			{
				std::cout << "Prime number: " << PrimeNumberVector[j] << std::endl;
			}
			else (std::cout << "Not Prime number as well :D ") << PrimeNumberVector[j] << std::endl;

		}
	}

}
