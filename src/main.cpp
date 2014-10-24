#include "boost_disable_warnings.hpp"
#include <boost/asio.hpp>
#include "boost_enable_warnings.hpp"

#include <iostream>

using namespace std;

int blah(int i);

int main()
{
	auto f = [](string s){ cout << s << endl; };
	f("Hello, world!");
	return blah(-1);
}
