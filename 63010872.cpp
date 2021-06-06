#include<stdio.h>
#include <windows.h>
#include<conio.h>
#include<time.h>

void setcolor(int fg, int bg);
void gotoxy(int x, int y);
void draw_ship(int x, int y);
void erase_ship(int x, int y);
void draw_bullet(int x, int y);
void erase_bullet(int x, int y);
void setcursor(bool visible);
char cursor(int x, int y);
void point(int z);
int main()
{
	int score=0, i, j, shoot[20] = { 0 }, shooty[20] = { 0 };
	int x = 38, y = 20;
	int bx, by;
	int bullet = 0,star=0,tempx, tempy, su = 0;;
	char ch = '.';
	setcursor(0);
	draw_ship(x, y);
	srand(time(NULL));
	do {
		for (;star < 20;) 
		{
			tempx = rand() % 61 + 10;
			tempy = rand() % 4 + 2;
			for (j = 0; j < 20; j++) {
				if (tempx == shoot[j] && tempy == shoot[j]) {
					su = 1;
				}
			}
		}
			if (su == 0) {
				shoot[star] = tempx;
				shoot[star] = tempy;
				gotoxy(shootx[star],shooty[star]);
				printf("*");
				star += 1;
			}
		if (_kbhit()) {
			ch = _getch();
			if (ch == 'a' && x > 0) {
				erase_ship(x, y);
				draw_ship(--x, y); 
			}
			if (ch == 's' && x < 75) {
				erase_ship(x, y);
				draw_ship(++x, y); 
			}
			if (bullet != 1 && ch == ' ') { 
				Beep(700, 100);
				bullet = 1; 
				bx = x + 2; 
				by = y - 1; 
			}
			fflush(stdin);
		}
		if (bullet == 1) {
			erase_bullet(bx, by);
			if (by == 2) { 
				bullet = 0; 
			}
			else { 
				if (cursor(bx, by-1)=='*') {
					bullet = 0;
					erase_bullet(bx, by);
					erase_bullet(bx, by-1);
					for (int s = 0; s < 20; s++) {
						if (shootx[s]==bx&&shooty[s]==by-1) {
							shootx[s] = 0;
						    shooty[s] = 0;
						}
					}
					star -= 1;
					Beep(700, 100);
					score++;
				}
				else {
					draw_bullet(bx, --by);
				}
			}
		}
		point(score);
		Sleep(100);
	} while (ch != 'x');
	return 0;
}

void setcolor(int fg, int bg)
{
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, bg * 16 + fg);
}
void gotoxy(int x, int y) {
    COORD c = { x, y };
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), c);
}

void draw_ship(int x, int y) {
    setcolor(2, 4);
    gotoxy(x, y);
    printf("{<-0->}");
}

void erase_ship(int x, int y) {
    gotoxy(x, y);
    setcolor(0, 0);
    printf("       ");
}

void draw_bullet(int x, int y) {
    setcolor(8, 0);
    gotoxy(x, y);
    printf("|^|");
}

void erase_bullet(int x, int y) {
    gotoxy(x, y);
    setcolor(0, 0);
    printf("   ");
}

void setcursor(bool visible)
{
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO lpCursor;
    lpCursor.bVisible = visible;
    lpCursor.dwSize = 20;
    SetConsoleCursorInfo(console, &lpCursor);
}

char cursor(int x, int y) {
    HANDLE hStd = GetStdHandle(STD_OUTPUT_HANDLE);
    char buf[2]; COORD c = { x,y }; DWORD num_read; 
    if (
        !ReadConsoleOutputCharacter(hStd, (LPTSTR)buf, 1, c, (LPDWORD)&num_read))

        return '\0';
    else
        return buf[0];

}
void point(int z)
{
    setcolor(8, 0);
    gotoxy(73,1);
    printf("Score : %d", z);
}

