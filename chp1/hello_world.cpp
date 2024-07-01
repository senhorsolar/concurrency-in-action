#include <iostream>
#include <thread>
#include <vector>

void hello (int i)
{
	std::cout << "Hello concurrent world: " << i << "\n";
}

int main ()
{
	int n = 10;
	std::vector<std::thread> ts;

	for (int i=0; i<n; ++i) {
		ts.emplace_back (hello, i);
	}
	for (int i=0; i < n; ++i) {
		ts.at (i).join ();
	}
}
