#pragma once
#include<string>

class Track
{
protected:
	std::string track_available[3]={"Spa-Francorchamps","Yas Marina","Albert Park"};
	std::string track_country[3]={"Belgium","United Arab Emirates","Australia"};
	float track_distance[3]={7.004,5.554,5.303};//total distance of track
	int track_turns[3]={20,21,16};//number of turns in track
	double track_fastest_lap[3]={87.7716,83.5698,74.475};//seconds
	double average_speed[3]={237.31,201.387,226.933};//average speed
	//double track_sector_1_time=track_fastest_lap/(2/5);//dividing fastest time by 3 for now
	//double track_sector_2_time=track_fastest_lap/(1/5);
	//double track_sector_3_time=track_fastest_lap/(2/5);

public:
	//constructors 

	Track();//default constructor, will randomise track selection
	Track(int track_choice);//chooses a specific track
	~Track();//destroyer constructor

	//variables
	int track_in_use;//stores track currently in use
	std::string track_used_name;
	std::string track_used_country;


	//functions	
	virtual std::string get_track_name();//returns track name
	virtual int get_track_turns();//returns track turns
	virtual double get_sector_times();//returns sector times
	virtual double get_fastest_lap();//returns fastest laps
	virtual std::string get_country();//returns country of track
	virtual double get_average_speed();//returns average speed of track
	virtual void load_track();//prints all elements of track at once
	virtual void change_track(int new_track_choice);//changes track choice
};
