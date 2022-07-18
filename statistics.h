#pragma once
#include <list>
#include <string>
#include "popular_request.h"

#include <iostream>

class statistics
{
private:
	std::list<popular_request> requests;
public:
	statistics();
	statistics(popular_request request);
	statistics(std::string request, size_t request_number);

	void add_request(popular_request request);
};

