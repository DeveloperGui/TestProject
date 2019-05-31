// testing_containers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <deque>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

void test_dequeue(void);
void test_vector(void);
void test_list(void);

int main()
{
    std::cout << "Testing containers\n"; 

	for (auto i = 0; i < 100; ++i)
		test_dequeue();
	for (auto i = 0; i < 100; ++i)
		test_vector();
	for (auto i = 0; i < 100; ++i)
		test_list();
}

void test_dequeue(void)
{
	std::cout << "Testing deque\n";

	// Create a deque containing integers
	std::deque<int> d = { 7, 5, 16, 8 };

	// Add an integer to the beginning and end of the deque
	d.push_back(13);
	d.push_back(25);


	for (auto it = d.begin(); it != d.end(); ++it) {
		if (*it == 5) {
			it = d.erase(it);
			break;
		}
	}

	for (auto it = d.begin(); it != d.end(); ++it) {
		cout << *it << endl;
	}
}

void test_vector(void)
{
	std::cout << "Testing vector\n";

	// Create a vector containing integers
	std::vector<int> v = { 7, 5, 16, 8 };

	// Add an integer to the beginning and end of the vector
	v.push_back(13);
	v.push_back(25);

	for (auto it = v.begin(); it != v.end(); ++it) {
		if (*it == 5) {
			it = v.erase(it);
			break;
		}
	}

	for (auto it = v.begin(); it != v.end(); ++it) {
		cout << *it << endl;
	}
}
void test_list(void)
{
	std::cout << "Testing list\n";

	// Create a list containing integers
	std::list<int> l = { 7, 5, 16, 8 };

	// Add an integer to the beginning and end of the vector
	l.push_back(13);
	l.push_back(25);

	for (auto it = l.begin(); it != l.end(); ++it) {
		if (*it == 5) {
			it = l.erase(it);
			break;
		}
	}

	for (auto it = l.begin(); it != l.end(); ++it) {
		cout << *it << endl;
	}
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
