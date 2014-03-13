#include "CheckInput.h"

class Plorg
{
private:
	char name_[19];
	int CI_;
public:
	Plorg(char name[19] = "Plorga", int CI = 50);
	~Plorg();
	void changeCI(int CI);
	void showPlorg();
};