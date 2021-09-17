#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>
#include<iomanip>
using namespace std;

string rps(string s1,string s2) {
	if (s1==s2) return "TIE!";

	if (s1=="rock") {
		if (s2=="scissors")
	 return "Player 1 wins!";
		return "Player 2 wins!";
	}

	if (s1=="paper") {
		if (s2=="rock")
	 return "Player 1 wins!";
		return "Player 2 wins!";
	}

	if (s1=="scissors") {
		if (s2=="paper")
	 return "Player 1 wins!";
		return "Player 2 wins!";
	}



}





int main(int argc,char**argv)
{
	int score1=0,score2=0;
	int winstreak1=0,winstreak2=0;
	int best_of1=0,best_of2=0,round=1;
	char ch;
	string a,c;
	int b;
	do {
		srand(time(NULL));
	b=rand()%3;
	cout<<"Your wins: "<<score1<<setw(100);
	cout<<"Computer wins: "<<score2;
	cout<<"\nRounds won: "<<best_of1<<setw(100)<<"Rounds won: "<<best_of2;
	cout<<"\n\n\n                                       Rock, Paper, Scissors\n\nList of choice:\n\n----rock----\n----paper----\n----scissors----\n\nYour choice: ";
	cin.clear();
	getline(cin,a);
	if ( a.empty()) { getline(cin,a);}
	else if ( a!="paper" && a!="scissors" && a!="rock") { cout<<"\n\nWrong input!\n"<<a; system("pause");exit(0);}
	switch(b) {
case (0) :
	c="rock";
	break;

case (1) :
	c="paper";
break;

case (2) :
	c="scissors";
	break;
}
	cout<<"\n\n\nThe computer chose: "<<c;

	if (best_of1==2) { cout<<"\nPlayer wins the game!!";score1=0;score2=0;best_of1=0;best_of2=0;round=0;winstreak1=0;winstreak2=0;}
	if ( best_of2==2) { cout<<"\nComputer wins the game!!";score1=0;score2=0;best_of1=0;best_of2=0;round=0;winstreak1=0;winstreak2=0;}

	cout<<endl<<rps(a,c);
	


	if (rps(a,c) == "Player 1 wins!") { score1++;winstreak1++;winstreak2=0;}
	else if ( rps(a,c) == "Player 2 wins!") { score2++;winstreak2++;winstreak1=0;}

	if ( winstreak1) { cout<<"\n\n    Winstreak on player: "<<winstreak1;}
	if ( winstreak2) { cout<<"\n\n    Winstreak on PC: "<<winstreak2;}


	if (score1==5) { cout<<"\n\n\nPlayer won round "<<round; score1=0;score2=0;best_of1++;round++;}
	if (score2==5) { cout<<"\n\n\nPC won round "<<round;  score1=0;score2=0;best_of2++;round++;}


	cout<<"\nAnother try?  (Y/N)\n ";
	cin>>ch;

	
	system("cls");
}while(ch!='y' || ch!='Y');

	cout<<endl;system("pause");return 0;
}