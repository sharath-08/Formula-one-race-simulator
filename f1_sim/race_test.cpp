//#include"acutest.hpp"
#include"race.h"
#include"cars.h"
#include"driver.h"
#include<string>
#include<iostream>

using namespace std;


//void test_race_constructor(){
int main(){
	Race example(1,1);
	example.simulate_race();
	//example.print_lap_times();


	for(int i =0;i<5;i++){//loop to delete objects inside the array
		//delete example.driver_list[i];
		//delete example.car_list[i];
		delete[] example.car_lap_times[i];
	}
	//delete example.driver_list;	//deleting the arrays after deleting objects
	//delete example.car_list;		
	delete[] example.car_lap_times;
}

	//example.print_driver_list();




//TEST_LIST={
//	{"Race(int track_choice,int number_of_laps);",test_race_constructor},
//	{0}
//};