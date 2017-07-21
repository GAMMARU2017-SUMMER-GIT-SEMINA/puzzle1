#include "game.h"
#include <stdio.h>
#include <stdbool.h>

void Make_UI();
void Update_UI();

void mk_map();// 맵 뿌리기
void mk_property();// 클릭 횟수와 클리어 목적 보여주기

void up_map();// 맵 업데이트
void up_property();// 클릭 횟수와 클리어 목적 업데이트

bool purpose = false; // 목적을 완수 했는가?
int input; // input받은 것을 저장합니다.

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
		else if (input == " "){//스페이스 인풋을 받았을 경우
			delete_block();//블록을 터지기(삭제)
			Update_UI();
		}

		if (purpose == true)
			break;
	}
}


void Make_UI(){// UI제작
	mk_map();
	mk_property();
}
//필요한가?

void Update_UI(){// UI업데이트
	up_map();
	up_property();
}

// 그냥 해본거
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
