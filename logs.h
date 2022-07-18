#pragma once
#include <list>
#include "entry.h"

#include "popular_request.h"
#include "statistics.h"

class logs
{
private:
	std::list<entry> entries;
public:
	logs();
	logs(entry log);

	void add_log(entry log);
};

