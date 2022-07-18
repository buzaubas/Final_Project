#include "logs.h"

logs::logs()
{
}

logs::logs(entry log)
{
	this->entries.push_back(log);
}

void logs::add_log(entry log)
{
	this->entries.push_back(log);

	statistics.add_request(popular_request(log.get_request_line(), 0)));
}
