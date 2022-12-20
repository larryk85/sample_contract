#include <sample.hpp>
#include <core.hpp>
#include <something.h>
#include <test.hpp>

ACTION sample::hi( name nm, uint32_t n ) {
   /* fill in action body */
   print_f("Name : %\n",nm);
   uint32_t num = core_func(n);
   num = something_func(num);
   num = test_func(num);
   print_f("N : %\n", num);
}