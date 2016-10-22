#include<iostream>
#include<cstdlib>
#include<ctime>

struct player{
  int most;
  int wins;
  int losses;
  int ties;
  int rounds;

  //variables for selection count
  int rockS;
  int paperS;
  int scissorS;
};

struct computer{
  int wins;
  int losses;
  int ties;
};

int getUserInput();
void initTest(int choice, int random, player& chara, computer& machine);
void stats(player& chara, computer& machine);
