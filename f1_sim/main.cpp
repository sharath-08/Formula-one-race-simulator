
#include<iostream>
#include"teams.h"
#include<string>
#include<vector>

using namespace std;

int main(){
/*cout<<"Enter 1-softs, 2-inter, 3-medium,4-hard for tire_choice"<<endl;
cin>> tire_choice;
team ferrari(Ferrari,Sebastian Vettel,Michael Schumacher,Red);
team mclaren(Mclaren,Fernando Alonso, Ayrton Senna,Orange);
ferrari.newcar(5);
mclaren.newcar(1);*/

//std::vector<Team>team_list;
//Team* team_list= new Team[2];
	Team team_list[2];
team_list[0]=Team("Mclaren","Seidl","Orange","Alonso","Senna");
team_list[1]=Team("Honda","Alonso","BLue","Max","Seb");
cout<<team_list[1].get_team_name()<<endl;
//cout<<team_list[1].get_team_name()<<endl;
//cout<<team_list[0].get_team_principal()<<endl;
//cout<<team_list[1].get_team_color()<<endl;
}

