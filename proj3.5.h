#include<iostream>
#include<cstdlib>
#include<ctime>

struct player{
  int rock=0;
  int paper=0;
  int scissor=0;
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
  int rock=0;
  int paper=0;
  int scissors=0;
  int most=0;
  int wins=0;
  int losses=0;
  int ties=0;
};

int getUserInput();
void initTest(int choice, int random, player& chara);
void stats();
