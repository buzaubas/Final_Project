#include "statistics.h"

statistics::statistics()
{
}

statistics::statistics(popular_request request)
{
	requests.push_back(request);
}

statistics::statistics(std::string request, size_t request_number)
{
	requests.push_back(popular_request(request, request_number));
}

void statistics::add_request(popular_request request)
{
	for (auto it = requests.begin(); it != requests.end(); it++)
	{
		if ((*it).get_request() == request.get_request())
		{
			(*it).add_one();
			return;
		}
	}
	requests.push_back(request);
}
