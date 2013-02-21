#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>
#include "between_date.h"

void test_between_ymd_0010(void);
void test_between_ymd_0020(void);
void test_between_ymd_0030(void);
void test_between_ymd_0040(void);
void test_between_ymd_0050(void);
void test_between_ymd_0060(void);
void test_between_ymd_0070(void);

int main(int argc, char *argv[])
{
	CU_pSuite between_ymd_suite;
	CU_initialize_registry();
	between_ymd_suite = CU_add_suite("Between ymd and ymd", NULL, NULL);

	CU_add_test(between_ymd_suite, "test_0010", test_between_ymd_0010);
	CU_add_test(between_ymd_suite, "test_0020", test_between_ymd_0020);
	CU_add_test(between_ymd_suite, "test_0030", test_between_ymd_0030);
	CU_add_test(between_ymd_suite, "test_0040", test_between_ymd_0040);
	CU_add_test(between_ymd_suite, "test_0050", test_between_ymd_0050);
	CU_add_test(between_ymd_suite, "test_0060", test_between_ymd_0060);
	CU_add_test(between_ymd_suite, "test_0070", test_between_ymd_0070);

	CU_console_run_tests();
	CU_cleanup_registry();
	return EXIT_SUCCESS;
}

void test_between_ymd_0010(void)
{
	int i_response = between_ymd("20121231", "20121231");
	CU_ASSERT(i_response == 0);
}

void test_between_ymd_0020(void)
{
	int i_response = between_ymd("20121231", "20130101");
	CU_ASSERT(i_response == 1);
}

void test_between_ymd_0030(void)
{
	int i_response = between_ymd("20121231", "20130131");
	CU_ASSERT(i_response == 31);
}

void test_between_ymd_0040(void)
{
	int i_response = between_ymd("20130101", "20121231");
	CU_ASSERT(i_response == -1);
}

void test_between_ymd_0050(void)
{
	int i_response = between_ymd("20121231", "20131231");
	CU_ASSERT(i_response == 365);
}

void test_between_ymd_0060(void)
{
	int i_response = between_ymd("20131231", "20141231");
	CU_ASSERT(i_response == 365);
}

void test_between_ymd_0070(void)
{
	int i_response = between_ymd("20111231", "20121231");
	CU_ASSERT(i_response == 366);
}
