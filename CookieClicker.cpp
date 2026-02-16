#include <iostream>
using namespace std;

int cookies=0;

int main() {
	while(true) {
		cout<<"Welcome to my Cookie Clicker!\n";
		cout<<"Press 1, 2 or 3 to choose\n";
		cout<<"1.Play\n";
		cout<<"2.Shop\n";
		cout<<"3.Quit\n";
	

		int Play; 
		cin>>Play;
		if(Play==1) {	
	while(true) {
		cout<<"You have "<<cookies<<" cookies\n";
		cout<<"Press K to get more cookies!\n";
		cout<<"Press Q to go back to main menu\n";
		char Click;
		cin>>Click;
		if(Click=='k' || Click=='K')
		cookies++;
		char mainMenu;
		cin>>mainMenu;
		if(mainMenu=='Q' || mainMenu=='q')
		break;	
	}
}

		int Shop;
		cin>>Shop;
		if(Shop==2)
		cout<<"add upgrades\n";

		int Quit;
		cin>>Quit;
		if(Quit==3)
		break;
	}
}