#include <stdio.h>
#include <stdlib.h>
#include <CUnit/CUnit.h>
#include <CUnit/Console.h>
#include "between_date.h"

void test_between_ymd_0010(void);

int main(int argc, char *argv[])
{
	CU_pSuite between_ymd_suite;
	CU_initialize_registry();
	between_ymd_suite = CU_add_suite("Between ymd and ymd", NULL, NULL);

	CU_add_test(between_ymd_suite, "test_0010", test_between_ymd_0010);

	CU_console_run_tests();
	CU_cleanup_registry();
	return EXIT_SUCCESS;
}

void test_between_ymd_0010(void)
{
	int i_rc = between_ymd("20121231", "20121231");
	CU_ASSERT(i_rc == 0);
}
