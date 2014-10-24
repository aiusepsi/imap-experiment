#include <boost/asio.hpp>
#include <iostream>

using namespace std;

int blah(int i);

int main()
{
	auto f = [](string s){ cout << s << endl; };
	f("Hello, world!");
	return blah(-1);
}
