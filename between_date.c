#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#include "between_date.h"

int to_time_t(time_t *t_ymd, char *ymd)
{
	char			yyyy[4+1];
	char			mm[2+1];
	char			dd[2+1];
	struct tm	s_tm;

	strncpy(yyyy, ymd, 4);
	strncpy(mm, ymd+4, 2);
	strncpy(dd, ymd+6, 2);

	s_tm.tm_year	= atoi(yyyy) - 1900;	
	s_tm.tm_mon		= atoi(mm) - 1;	
	s_tm.tm_mday	= atoi(dd);
	s_tm.tm_hour	= 0;
	s_tm.tm_min		= 0;
	s_tm.tm_sec		= 0;
	s_tm.tm_isdst	= -1;

	*t_ymd = mktime(&s_tm);

	return EXIT_SUCCESS;
}

int between_ymd(char *from_ymd, char *to_ymd)
{
	time_t t_from;
	time_t t_to;

	to_time_t(&t_from,	from_ymd);
	to_time_t(&t_to,		to_ymd);

	int i_diff =  difftime(t_to, t_from)/60/60/24;
	return i_diff;
}

