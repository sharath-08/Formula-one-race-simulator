#include"acutest.hpp"
#include"track.h"
#include<string>

void test_random_constructor(){
Track random_track;
TEST_CHECK_(random_track.track_in_use==0 || random_track.track_in_use==1||random_track.track_in_use==2,"track_in_use = %d",random_track.track_in_use);
TEST_MSG("EXPECTED: track_in_use = %d or %d or %d",1,2,3);
TEST_MSG("PRODUCED: track_in_use = %d]",random_track.track_in_use);
}


void test_constructor_argument(){
	Track test_t(4);
	TEST_CHECK_(test_t.track_in_use==2,"track_in_use= %d",2);
	TEST_MSG("EXPECTED: track_in_use = %d",2);
	TEST_MSG("PRODUCED: track in use = %d",test_t.track_in_use);
}

void test_change_track(){
	Track test_t(1);
	test_t.change_track(555);
	TEST_CHECK_(test_t.track_in_use==2,"change_track");
	TEST_MSG("EXPECTED: track_in_use = %d",2);
	TEST_MSG("PRODUCED: track in use = %d",test_t.track_in_use);
}


TEST_LIST={
{"Track::Track()",test_random_constructor},
{"void Track::Track(int)",test_constructor_argument},
{"void Track::change_track(int)",test_change_track},
{0}
};


