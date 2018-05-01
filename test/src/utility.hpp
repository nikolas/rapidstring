#ifndef UTILITY_HPP_ECB97D42D011D625
#define UTILITY_HPP_ECB97D42D011D625

#include "rapid_string.h"
#include <catch.hpp>

#define CMP_STR(s, cmp)					   \
	REQUIRE(rs_size(s) == cmp.length());		   \
	REQUIRE(rs_data(s) == cmp);			   \
							   \
	if (rs_is_heap(s))				   \
		REQUIRE(rs_capacity(s) >= cmp.length());	   \
	else						   \
		REQUIRE(rs_capacity(s) == RS_STACK_CAPACITY)

#define CMP_STR_RC(rc, s, cmp) \
	REQUIRE(!rc);	       \
	CMP_STR(s, cmp)

#endif // !UTILITY_HPP_ECB97D42D011D625
