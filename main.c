#include "Blocks.h"
#include "Controller.h"
#include "Screen.h"
#include "ConsoleCursor.h"

void main() {
	CursorView(false);
	system("mode con cols=76 lines=27 | title â�ǽǹ�������Ʈ_��Ʈ���� �ǽ�");

	while (true) {
		GameTitle();
		GameProcess();
	}
}