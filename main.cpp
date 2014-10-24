#include <boost/asio.hpp>
#include <iostream>
//#include <functional>

using namespace std;

int main()
{
	auto f = [](string s){ cout << s << endl; };
	f("Hello, world!");
	return 0;
}
