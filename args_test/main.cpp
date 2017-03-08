#include <iostream>
#include <string>
using namespace std;
#include <getopt.h>

int main(int argc, char** argv)
{
	string y = "yay\n";
	int option_index = 0;
	int c;
	static struct option long_options[] = {{"test",   required_argument,      0,  0 },{0,         0,                 0,  0 }};
	
	c = getopt_long(argc, argv, "DdFn", long_options, &option_index);
	int x = -1;
	if(c != x)
	{
		cout<<optarg<<endl;
	}
	
	return 0;
}
