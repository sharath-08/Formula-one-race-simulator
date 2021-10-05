#pragma once
#include<string>
#include<menu.h>
#include<ncurses.h>

class Menu_UI{
public: 
	Menu_UI();
	~Menu_UI();
	void print_menu();

	ITEM **my_items;
	int c;
	MENU *my_menu;
	int n_choices,i;
	ITEM *cur_item;
};