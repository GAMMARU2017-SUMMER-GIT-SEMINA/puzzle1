#include "game.h"
#include <stdio.h>
#include <stdbool.h>

void Make_UI();
void Update_UI();

void mk_map();// �� �Ѹ���
void mk_property();// Ŭ�� Ƚ���� Ŭ���� ���� �����ֱ�

void up_map();// �� ������Ʈ
void up_property();// Ŭ�� Ƚ���� Ŭ���� ���� ������Ʈ

bool purpose = false; // ������ �ϼ� �ߴ°�?
int input; // input���� ���� �����մϴ�.

int main(){

	Ingame_flow();

	return 0;
}

void Ingame_flow(){
	Make_UI();
	while (1){

		if (input == 'w'){
			//y--;
		}
		else if (input == 'a'){
			//x--;
		}
		else if (input == 's'){
			//y++;
		}
		else if (input == 'd'){
			//x++
		}
		else if (input == " "){//�����̽� ��ǲ�� �޾��� ���
			delete_block();//����� ������(����)
			Update_UI();
		}

		if (purpose == true)
			break;
	}
}


void Make_UI(){// UI����
	mk_map();
	mk_property();
}
//�ʿ��Ѱ�?

void Update_UI(){// UI������Ʈ
	up_map();
	up_property();
}

// �׳� �غ���
/*	int x = 1, y = 1; 
int input;
while (1){
int c = kbhit();

if (c != 0){
input = getch();

gotoxy(x, y);
printf(" ");


if (input == 'w')
y--;
else if (input == 'a')
x--;
else if (input == 's')
y++;
else if (input == 'd')
x++;

gotoxy(x, y);
printf("x");
}

}*/
