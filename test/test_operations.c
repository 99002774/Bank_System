#include <CUnit/Basic.h>
#include <CUnit/CUnit.h>

/* Modify these two lines according to the project */
#include <header.h>
#define PROJECT_NAME    "Function"

/* Prototypes for all the test functions */
int test_view(void);
int test_addmoney(void);
int test_withdraw(void);

/* Start of the application test */
int main() {
/* Note: Do not edit START*/
  /*Initialize and setup the Test Framework */
  if (CUE_SUCCESS != CU_initialize_registry())
    return CU_get_error();
  CU_pSuite suite = CU_add_suite(PROJECT_NAME, 0, 0);
/* Note: Do not edit END */
  
  
  /* Add your test functions in this format for testing*/
  CU_add_test(suite, "view", test_view);
  CU_add_test(suite, "addmoney", test_addmoney);
  CU_add_test(suite, "withdraw", test_withdraw);
  

/* Note: Do not edit START*/
  /* Setup Test Framework to output the result to Screen */
  CU_basic_set_mode(CU_BRM_VERBOSE);
  
  /* run the unit test framework*/
  CU_basic_run_tests();
  
  /* Cleaning the Resources used by Unit test framework */
  CU_cleanup_registry();
/* Note: Do not edit END */
  return 0;
}

/* Write all the test functions */ 

int test_view(void) {
  CU_ASSERT(3000 == viewaccount(1000));
  
  /* Dummy fail*/
  CU_ASSERT(10000 == viewaccount(7500));
}


int test_addmoney(void) {
  CU_ASSERT(3000 == addmoney(1000));
  
  /* Dummy fail*/
  CU_ASSERT(10000 == addmoney(7500));
}

int test_withdraw(void) {
  CU_ASSERT( 2000== withdraw(2000));
  
  /* Dummy fail*/
  CU_ASSERT(1000 == withdraw(4000));
}
