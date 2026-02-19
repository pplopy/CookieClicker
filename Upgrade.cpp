#include "Upgrade.hpp"
#include <iostream>
#include <windows.h>
using namespace std;

void Upgrade::cookiesPerClick() {			
		cookies += levelUpgrade1;
	}

	void Upgrade::buyAutoClickerUpgrade() {
		if(cookies >= cost2) {
			levelUpgrade2++;
			cookies -= cost2;
			cost2 *= 2;
			hasAutoClicker = true;
			}
		}
	
	bool hasAutoClicker = false;
	
	void Upgrade::autoClicker() {
		if(hasAutoClicker == true) {
			cookies += levelUpgrade2;
			cout << "[Auto] Cookies: " << cookies << "\n";
			Sleep(1000);
		}
	}
							
	void Upgrade::buyClickPowerUpgrade() {
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