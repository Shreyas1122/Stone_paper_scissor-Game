//THIS IS  STONE,PAPER,SCISSOR GAME FOR TWO PLAYERS
#include<iostream>
#include<string>
using namespace std;

int main(){
try{

	
	cout<<"\t\t\t\t\tIts a stone,paper,scissor game.\n\n";
	cout<<"please enter from stone,paper,scissor its your turn now LOWERCASE EXPECTED\n";
	string play_1;
	cout<<"player 1:";
	cin>>play_1;
	system("cls");  //for clear screen
	
	
	


		cout<<"please enter from stone,paper,scissor its your turn now LOWERCASE EXPECTED\n";
	string play_2;
	cout<<"player 2:";
	cin>>play_2;
	system("cls");
	if(play_1=="STONE"||play_1=="PAPER"||play_1=="SCISSOR"){
	throw 1;
}
else if(play_2=="STONE"||play_2=="PAPER"||play_2=="SCISSOR"){
	throw 2;
}
	
	
	if(play_1==play_2){
		cout<<"Its a tie\n";
		cout<<"Lets play agian\n";
			cout<<"please enter from stone,paper,scissor its your turn now LOWERCASE EXPECTED\n";
	string play_1;
	cout<<"player 1:";
	cin>>play_1;
	system("cls");  //for clear screen
		cout<<"please enter from stone,paper,scissor its your turn now LOWERCASE EXPECTED\n";
	string play_2;
	cout<<"player 2:";
	cin>>play_2;
	system("cls");
	if(play_1==play_2){
		cout<<"Its a tie again\n";
		cout<<"match withdraw\n";
	}
		else if(play_1=="stone"&&play_2=="paper"){
		cout<<"player 2 wins";
	}
		else if(play_1=="paper"&&play_2=="scissor"){
		cout<<"player 2 wins";}
			else if(play_1=="scissor"&&play_2=="paper"){
		cout<<"player 1 wins";}
			else if(play_1=="paper"&&play_2=="stone"){
		cout<<"player 1 wins";}
			else if(play_1=="stone"&&play_2=="scissor"){
		cout<<"player 1 wins";}
			else if(play_1=="scissor"&&play_2=="stone"){
		cout<<"player 2 wins";}
		else cout<<"Invalid Input From Users\n";
		
		
		
	}
	
	else if(play_1=="stone"&&play_2=="paper"){
		cout<<"player 2 wins";
	}
		else if(play_1=="paper"&&play_2=="scissor"){
		cout<<"player 2 wins";}
			else if(play_1=="scissor"&&play_2=="paper"){
		cout<<"player 1 wins";}
			else if(play_1=="paper"&&play_2=="stone"){
		cout<<"player 1 wins";}
			else if(play_1=="stone"&&play_2=="scissor"){
		cout<<"player 1 wins";}
			else if(play_1=="scissor"&&play_2=="stone"){
		cout<<"player 2 wins";}
		else cout<<"Invalid Input From Users\n";
	}
	catch(...){
		cout<<"please enter the lowercase character"<<endl;
		cout<<"AND start Again"<<endl;
	}
		
	
	
	
	
	return 0;
}