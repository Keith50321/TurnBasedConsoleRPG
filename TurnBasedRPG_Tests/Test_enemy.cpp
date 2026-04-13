#include "doctest.h"
#include "Enemy.h"
#include "Drop.h"

TEST_CASE("Enemy without a drop has no drop") {
	Enemy e{ "Dummy",100 ,50 };
	CHECK(!e.hasDrop());
}
TEST_CASE("Enemy with drop reports is correctly"){
	Drop d{ "iron Shard",10 };
	Enemy e{ "Golem" , 200,100, d };

	SUBCASE("hasDrop return true") {
		CHECK(e hasDrop());
	}
	SUBCASE

