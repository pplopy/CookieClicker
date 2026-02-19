#ifndef Upgrade_hpp
#define Upgrade_hpp

class Upgrade {
public:
	int cost1 = 50;
	int cost2 = 500;
	int levelUpgrade1 = 1;
	int levelUpgrade2 = 0;
	int cookies = 0;

	void cookiesPerClick();
	void buyAutoClickerUpgrade() ;
	bool hasAutoClicker = false;
	void autoClicker();				
	void buyClickPowerUpgrade();
};

#endif
