#include <iostream>
#include <windows.h>
#include <thread>
using namespace std;

class Upgrade {
public:
	int cost1 = 50;
	int cost2 = 500;
	int levelUpgrade1 = 1;
	int levelUpgrade2 = 0;
	int cookies = 0;

	void cookiesPerClick() {			
		cookies += levelUpgrade1;
	}

	void buyAutoClickerUpgrade() {
		if(cookies >= cost2) {
			levelUpgrade2++;
			cookies -= cost2;
			cost2 *= 2;
			hasAutoClicker = true;
			}
		}
	
	bool hasAutoClicker = false;
	
	void autoClicker() {
		if(hasAutoClicker == true) {
			cookies += levelUpgrade2;
			cout << "[Auto] Cookies: " << cookies << "\n";
			Sleep(1000);
		}
	}
							
	void buyClickPowerUpgrade() {
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
	thread autoClicker([&upgrade]() {
		while(true) {
			upgrade.autoClicker();
		}
	});
	autoClicker.detach();
	while(true) {
		cout<<"Welcome to my Cookie Clicker!\n";
		cout<<"Press 1, 2 or 3 to choose\n";
		cout<<"1.Play\n";
		cout<<"2.Shop\n";
		cout<<"3.Quit\n";
	

		int choice; 
		cin>>choice;
		if(choice == 1) {	
			system("cls");
			while(true) {
				cout<<"You have "<<upgrade.cookies<<" cookies\n";
				cout<<"Press K to get more cookies!\n";
				cout<<"Press Q to go back to main menu\n";
				char Click;
				cin>>Click;
				if(Click== 'k' || Click == 'K') {
					upgrade.cookiesPerClick();
					system("cls");
		}
				else if(Click == 'q' || Click == 'Q') {
					system("cls");
					break;
		}	
	}
}

		else if(choice == 2) {
			system("cls");
			cout<<"Welcome to the cookie shop where you can buy upgrades for your cookie factory!!\n";
			cout<<"Press p to go back\n";
			cout<<"1.Click Power (cost: " <<upgrade.cost1<<" cookies)\n";
			cout<<"2.Auto Clicker (cost: " <<upgrade.cost2<<" cookies)\n";
		
		int buy;
		cin>>buy;
		if(buy == 1) {
			system("cls");
			upgrade.buyClickPowerUpgrade();
			}
		else if(buy == 2) {
			system("cls");
			upgrade.buyAutoClickerUpgrade();
		}
		}

		else if(choice == 3 || choice == 3) {
			cout<<"See you next time!";
			Sleep(3000);
			break;
	}
}}