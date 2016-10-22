#include<iostream>
#include<cstdlib>
#include<ctime>
#include"proj3.5.h"
using namespace std;

int main(){
  player chara;
  computer cpu;
  int choice = getUserInput();
  srand(time(NULL));
  int random = rand()%3+1;
  int go;
  bool yes=true;

  initTest(choice, random, chara);
  cout << "Want to play again?(Enter 1 for yes or 2 for no)" << endl;
  cin >> go;
  if(go==1){
    yes = true;
  }
  else{
    yes = false;
  }
  while(yes){
    choice = getUserInput();
    initTest(choice, random, chara);
    cout << "Want to play again?(Enter 1 for yes or 2 for no)" << endl;
    cin >> go;
    if(go==1){
      yes = true;
    }
    else{
      yes = false;
    }
  }
  stats();
  return 0;
}