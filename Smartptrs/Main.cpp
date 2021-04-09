#include <iostream>
#include <string>
#include <memory>
#include "Report.h"
using namespace std;

int main() {
	{
		auto_ptr<Report>ps(new Report("using auto_ptr"));
		ps->comment();
	}
	{
		shared_ptr<Report>ps(new Report("using shared_ptr"));
		ps->comment();
	}
	{
		unique_ptr<Report>ps(new Report("using unique_ptr"));
		ps->comment();
	}
	return 0;
}