#include "ConsoleCursor.h"

void GotoXY(int x, int y) {
	COORD Pos;
	Pos.X = x;
	Pos.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
}
	COORD getCursor(void) {
		COORD Pos;
		CONSOLE_SCREEN_BUFFER_INFO curlnfo;
		GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &curlnfo);
		Pos.X = curlnfo.dwCursorPosition.X;
		Pos.Y = curlnfo.dwCursorPosition.Y;
		return Pos;
	}


void CursorView(boolean show) {
	CONSOLE_CURSOR_INFO ConsoleCursor;
	ConsoleCursor.bVisible = show;
	ConsoleCursor.dwSize = 10;
	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &ConsoleCursor);
}