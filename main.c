#include "function.h"

int main() {

	initiallize();

	while (1) {		
//		if (isGameOver()) break;		moveChar에서 구현
		

		processKeyInput();
		while (1) {
			if (gravity() == 1) {
				break;
			}	
			if (checkg_fatigue())
			{
				isGameOver();
				return 0;
			}
		}

	}
	

	getchar();
	return 0;
}