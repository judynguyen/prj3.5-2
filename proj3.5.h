#include<iostream>
#include<cstdlib>
#include<ctime>

struct player{
  int most=0;
  int wins=0;
  int losses=0;
  int ties=0;
  int rounds=0;

  //variables for selection count
  int rockS=0;
  int paperS=0;
  int scissorS=0;
};

struct computer{
  int wins=0;
  int losses=0;
  int ties=0;
};

int getUserInput();
void initTest(int choice, int random, player& chara, computer& machine);
void stats(player& chara, computer& machine);
