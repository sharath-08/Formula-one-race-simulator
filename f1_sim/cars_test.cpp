#include "acutest.hpp"
#include "cars.h"
#include<string.h>

//unit test to check if tires change properly
void test_change_tires(void){
	cars ferrari(3,2,"S. VETTEL");
	ferrari.change_tires(3);
	TEST_CHECK_(ferrari.tire_in_use==3,"change_tires(%d)=%d",2,ferrari.tire_in_use);
	TEST_MSG("Checking if tire changing OK");
	TEST_MSG("EXPECTED: %d", 2);
	TEST_MSG("Produced: %d",ferrari.tire_in_use);
}
//unit test to check if tires change when unexpected value entered
void test_change_tires_extreme(void){
	cars ferrari(3,2,"S.VETTEL");
	ferrari.change_tires(6);//checking extreme case beyone 
	TEST_CHECK_(ferrari.tire_in_use==2,"change_tires(%d)=%d",6,ferrari.tire_in_use);
	TEST_MSG("Checking tire changing-extereme values");
	TEST_MSG("EXPECTED: %d",3);
	TEST_MSG("PRODUCED:%d", ferrari.tire_in_use);
}

//unit test to check if driver name is storing properly
void test_car_driver(void){
	cars ferrari(3,2,"S.VETTEL");

	ferrari.change_driver("M.SCHUMACHER");
	std::string driver_test= "M.SCHUMACHER";
	TEST_CHECK_(driver_test==ferrari.get_driver(),"change_driver(std::string)");
	TEST_MSG("EXPECTED: %s",driver_test);
	TEST_MSG("RECEIVED: %s",ferrari.get_driver());
}



TEST_LIST = {
	{"void cars::change_tires(int);",test_change_tires},
	{"void cars::change_tires(int;",test_change_tires_extreme},
	{"void cars::change_driver(std::string)",test_car_driver},
	{0}
};
