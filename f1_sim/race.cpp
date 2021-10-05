#include"race.h"
#include"cars.h"
#include"track.h"
#include"driver.h"
#include<iostream>
#include<string>
#include<math.h>	//allows for use of floor()
#include<iomanip>	//allows for use of std::setprecision()

Race::Race(int track_choice,int number_of_laps){
	for(int i=0;i<5;i++){
		driver_list[i]=new driver(driver_names[i],car_numbers[i],team_names[i],skill_levels[i]);
		car_list[i]=new cars(car_numbers[i],driver_names[i]);
		std::cout<<driver_names[i]<<"created"<<std::endl;
		std::cout<<car_numbers[i]<<"created"<<std::endl;
	}
	track_used.change_track(track_choice);
	laps=number_of_laps;
	car_lap_times=new double[laps][5];
}

Race::~Race(){
	std::cout<<"Race deleted"<<std::endl;
}

void Race::simulate_race(){
	for(int lap_c=0;lap_c<laps;lap_c++){//keeps track of laps
		for(int j=0;j<5;j++){	//keeps track of car/driver
			float fuel_const=(car_list[j]->fuel_deg(laps))/1000;//to factor as 0.1
			float tire_const=1-(car_list[j]->tire_deg(laps))/1000;
			float skill_const=driver_list[j]->get_skill_level();
			car_lap_times[lap_c][j]=track_used.get_fastest_lap()+(((fuel_const+tire_const+skill_const)/3)*track_used.get_fastest_lap());
			std::cout<<driver_names[j]<<" lap number"<<lap_c<<car_lap_times[lap_c][j];		
		}
	}
}

void Race::print_lap_times(){
	for(int i=0;i<laps;i++){
		for(int j=0;j<5;j++){
			double minute=0;
			double seconds=0;
			minute=car_lap_times[i][j]/60;
			seconds=(minute-floor(minute))*60;
			std::cout<<int(minute)<<":"<<std::setprecision(3)<<seconds<<std::endl;
		}
	}
}

//void Race::print_driver_list(){
//	for(int i=0;i<5;i++){
//		std::cout<<driver_list[i]<<std::endl;
//	}
//}
