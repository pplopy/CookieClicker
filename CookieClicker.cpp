#include <iostream>
#include <windows.h>
#include <thread>
#include "Upgrade.hpp"
#include "Upgrade.cpp"
using namespace std;	

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

		else if(choice == 3) {
			cout<<"See you next time!";
			Sleep(3000);
			break;
	}
}}