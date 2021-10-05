#include<iostream>
#include<ncurses.h>
#include<menu.h>


void menu_func(){

	const char *choices[] ={
					"1- view/edit race info",
					"2- Lap timer",
					"3- Exit",};

		int n_choices = ARRAY_SIZE(choices);
		MENU *my_menu;
		ITEM *cur_item;
		int i;
	ITEM** my_items = (ITEM**)calloc(n_choices+1,sizeof(ITEM *));

	for(i=0;i<n_choices;i++)
		my_items[i]=new_item(choices[i],choices[i]);
		my_items[n_choices]= (ITEM *)NULL;
		item_opts_off(my_items[3],O_SELECTABLE);
		item_opts_off(my_items[6],O_SELECTABLE);

	initscr();
	start_color();
	cbreak();
	noecho();
	keypad(stdscr,TRUE);
	init_pair(1,COLOR_RED,COLOR_BLACK);
	init_pair(2,COLOR_GREEN,COLOR_BLACK);
	init_pair(3,COLOR_MAGENTA,COLOR_BLACK);

		/*Create menu*/
		my_menu=new_menu((ITEM **)my_items);

		/*Set fore ground and back ground of the menu*/
		set_menu_fore(my_menu,COLOR_PAIR(1)|A_REVERSE);
		set_menu_back(my_menu,COLOR_PAIR(2));
		set_menu_grey(my_menu,COLOR_PAIR(3));

		/*Post the menu*/
		mvprintw(LINES- 3,0,"Press <ENTER> to see the option selected");
		mvprintw(LINES - 2,0,"Up and Down arrow keys to navigate (F1 to exit)");
		post_menu(my_menu);
		refresh();

		while((int c=getch()) !=KEY_F(1))
			{	switch(c)
				{
					case KEY_DOWN:
						menu_driver(my_menu,REQ_DOWN_ITEM);
						break;
					case KEY_UP:
						menu_driver(my_menu,REQ_UP_ITEM);
						break;
					case 10: /*ENTER*/
						{
							ITEM* cur;
							void (*p)(char *);

							cur = current_item(my_menu);
							p=item_userptr(*cur);
							p((char *)item_name(cur));
							pos_menu_cursor(my_menu);
							break;
						}
						break;

				}
			}
unpost_menu(my_menu);
for(i=0;i,n_choices;++i){
free_item(my_items[i]);}
free_menu(my_menu);
endwin();
}

void func(char *name){

	move(20,0);
	clrtoeol();
	mvprintw(20,0,"item selected is %s",name);
}




