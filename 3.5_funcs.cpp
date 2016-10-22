#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
#include"proj3.5.h"

int getUserInput(){
  int choice;
  cout << "Enter 1 for Rock, 2 for Paper, or 3 for Scissors." << endl;
  cin >> choice;
  return choice;
}

void initTest(int choice, int random, player& chara, computer& machine){
  player you;
  computer cpu;
  int go;
  if(random == choice)
  {
    cout << "Both you and the computer have chosen the same hand." << endl;
    cout << "It's a tie!" << endl;
    if(choice == 1)
    {
      you.rockS++;
    }
    else if(choice == 2)
    {
      you.paperS++;
    }
    else if(choice == 3)
    {
      you.scissorS++;
    }

    cpu.ties++;
    you.ties++;
  }
  else if(random == 1 && choice == 2)
  {
    cout << "The computer chose [rock] and you chose [paper]." << endl;
    cout << "You win!" << endl;
    cpu.losses++;
    you.wins++;
    you.paperS++;
  }
  else if(random == 2 && choice == 1)
  {
    cout << "The computer chose [paper] while you chose [rock]." << endl;
    cout << "You lose ):" << endl;
    cpu.wins++;
    you.losses++;
    you.rockS++;
  }
  else if(random == 3 && choice == 1)
  {
    cout << "The computer chose [scissors] while you chose [rock]." << endl;
    cout << "You win!" << endl;
    cpu.losses++;
    you.wins++;
    you.rockS++;
  }
  else if(random == 2 && choice == 3)
  {
    cout << "The computer chose [paper] while you chose [scissors]." << endl;
    cout << "You win!"<< endl;
    cpu.losses++;
    you.wins++;
    you.scissorS++;
  }
  else if(random == 3 && choice == 2)
  {
    cout << "The computer chose [scissors] while you chose [paper]." << endl;
    cout << "You lose ):" << endl;
    cpu.wins++;
    you.losses++;
    you.paperS++;
  }
  else if(random == 1 && choice == 3)
  {
    you.rounds++;
    cout << "The computer chose [rock] while you chose [scissors]." << endl;
    cout << "You lose ):" << endl;
    cpu.wins++;
    you.losses++;
    you.scissorS++;
  }
  cout<<"<<<<<<<<<<<<<<<<"<<endl;
  cout<<you.rockS<<endl;
}

void stats(player& chara, computer& machine){
  player you;
  computer cpu;

  cout << "\n" << endl;

  //who won the most rounds
  cout << "With " << you.ties << " tie(s), you scored " << you.wins << " while the computer scored " << cpu.wins << "." << endl;
  if(you.wins>cpu.wins)
  {
    cout << "You're a winner!" << endl;

      if(you.rockS == you.paperS && you.rockS > you.scissorS && you.paperS > you.scissorS)
      {
        cout << "You won by playing rock and paper the most." << endl;
      }
      if(you.rockS == you.scissorS && you.rockS > you.paperS && you.scissorS > you.paperS)
      {
        cout << "You won by playing rock and scissors the most." << endl;
      }
      if(you.paperS == you.scissorS && you.paperS > you.rockS && you.scissorS > you.rockS)
      {
        cout << "You won by playing paper and scissors the most." << endl;
      }

      if(you.rockS > you.paperS && you.rockS > you.scissorS)
      {
        //mostUsed = you.rockS;
        cout << "You won the most rounds while playing rock." << endl;
      }
      else if(you.paperS > you.rockS && you.paperS > you.scissorS)
      {
        //mostUsed = you.paperS;
        cout << "You won the most rounds while playing paper." << endl;
      }
      else if(you.scissorS > you.rockS && you.scissorS > you.paperS)
      {
        //mostUsed = you.scissorS;
        cout << "You won the most rounds while scissors." << endl;
      }
  }
  else if(you.wins<cpu.wins)
  {
    cout << "I'm sorry, you lost. The computer won more rounds." << endl;
  }
  else if(you.wins==cpu.wins)
  {
    cout << "You and the computer have tied." << endl;
  }

  cout << "\n" << endl;
  cout << "*Stats*" << endl;

  // most used object
  if(you.rockS == you.paperS && you.rockS > you.scissorS && you.paperS > you.scissorS)
  {
    cout << "Most used: Rock and paper" << endl;
  }
  if(you.rockS == you.scissorS && you.rockS > you.paperS && you.scissorS > you.paperS)
  {
    cout << "Most used: Rock and scissors" << endl;
  }
  if(you.paperS == you.scissorS && you.paperS > you.rockS && you.scissorS > you.rockS)
  {
    cout << "Most used: Paper and scissors" << endl;
  }

  if(you.rockS > you.paperS && you.rockS > you.scissorS)
  {
    //mostUsed = rockSelect;
    cout << "Most used: Rock" << endl;
  }
  else if(you.paperS > you.rockS && you.paperS > you.scissorS)
  {
    //mostUsed = paperSelect;
    cout << "Most used: Paper" << endl;
  }
  else if(you.scissorS > you.rockS && you.scissorS > you.paperS)
  {
    //mostUsed = scissorSelect;
    cout << "Most used: Scissors" << endl;
  }


  cout << "Rounds played: " << you.rounds << endl;
  cout << "Wins: " << you.wins << endl;
  cout << "Losses: " << you.losses << endl;
  cout << "Ties: " << you.ties << endl;
  cout << "Rock input: " << you.rockS << endl;
  cout << "Paper input: " << you.paperS << endl;
  cout << "Scissor input: " << you.scissorS << endl;

cout << "\n" << endl;
}
