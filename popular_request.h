#pragma once
#include <string>

class popular_request
{
private:
	std::string request;
	size_t request_number = 0;
public:
	popular_request();
	popular_request(std::string request);

	std::string get_request();
	size_t get_request_number();
	
	void add_one();
};

