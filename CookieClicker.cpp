#include <iostream>
#include <windows.h>
using namespace std;

class Upgrade {
public:
	int cost1 = 50;
	int levelUpgrade1 = 1;
	int cookies = 1;

	void cookiesPerClick() {			
		cookies += levelUpgrade1;
	}				

	void buyUpgrade() {
		if(cookies >= cost1) {
		levelUpgrade1++;
		cookies -= cost1;
		cost1 *= 2;
		cout<<"You purchased the first upgrade!\n";
		}
		else {
		cout<<"You don't have enough cookies\n";
		}
	}
};	


int main() {
	Upgrade upgrade;
	while(true) {
		cout<<"Welcome to my Cookie Clicker!\n";
		cout<<"Press 1, 2 or 3 to choose\n";
		cout<<"1.Play\n";
		cout<<"2.Shop\n";
		cout<<"3.Quit\n";
	

		int choice; 
		cin>>choice;
		if(choice==1) {	
	while(true) {
		cout<<"You have "<<upgrade.cookies<<" cookies\n";
		cout<<"Press K to get more cookies!\n";
		cout<<"Press Q to go back to main menu\n";
		char Click;
		cin>>Click;
		if(Click=='k' || Click=='K')
		upgrade.cookiesPerClick();
		else if(Click=='Q' || Click=='q')
		break;	
	}
}

		else if(choice==2) {
		cout<<"Welcome to the cookie shop where you can buy upgrades for your cookie factory!!\n";
		cout<<"Press 3 to go back\n";
		cout<<"1.clickPower (cost: " <<upgrade.cost1<<" cookies)\n";
		
		int buy;
		cin>>buy;
		if(buy == 1)
		upgrade.buyUpgrade();
		}

		else if(choice==3) {
		cout<<"See you next time!";
		Sleep(2000);
		break;
	}
}}