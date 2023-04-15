#include <stdio.h>
#include <conio.h>

// 상하좌우 상수값 설정
#define UP 72
#define DOWN 80
#define LEFT 75
#define RIGHT 77

int main(void) 
{
    char c;
    for (;;) 
	{
        if (_kbhit()) 
		{        
            c = _getch();      
            if (c == -32) 
			{
                c = _getch();  
                switch (c) 
				{
                case LEFT:
                    printf("왼쪽으로 이동\n");
                    break;
                case RIGHT:
                    printf("오른쪽으로 이동\n");
                    break;
                case UP:
                    printf("위로 이동\n");
                    break;
                case DOWN:
                    printf("아래로 이동\n");
                    break;
                }
            }
        }
    }
    return 0;
}

