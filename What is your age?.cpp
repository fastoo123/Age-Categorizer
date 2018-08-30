//Made by Ariel Esparza

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int age;
	cout << "How old are you?\n";
	cin >> age;
	if (age > 17) {
		cout << "You are an adult.";
	}
	else if (age > 12) {
		cout << "You are a teenager.";
	}
	else if (age > 3) {
		cout << "You are a child.";
	}
	else if (age > 0) {
		cout << "You are a toddler.";
	}
	else if (age == 0) {
		cout << "You are a newborn.";
	}
	else cout << "This age is invalid.";
	return 0;
}
