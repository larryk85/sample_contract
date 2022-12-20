#include <eosio/eosio.hpp>
using namespace eosio;

CONTRACT sample : public contract {
   public:
      using contract::contract;

      ACTION hi( name nm, uint32_t n );

      using hi_action = action_wrapper<"hi"_n, &sample::hi>;
};