#include <stdio.h>
#include <conio.h>

// �����¿� ����� ����
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
                    printf("�������� �̵�\n");
                    break;
                case RIGHT:
                    printf("���������� �̵�\n");
                    break;
                case UP:
                    printf("���� �̵�\n");
                    break;
                case DOWN:
                    printf("�Ʒ��� �̵�\n");
                    break;
                }
            }
        }
    }
    return 0;
}

