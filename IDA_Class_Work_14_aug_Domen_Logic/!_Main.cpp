//class template version 5.0 //07.07.2023//
#include <iostream>
#include <string>
#include <windows.h>
#include <time.h>
#include <algorithm>
#include <conio.h>
#include <set>
//My own headers
#include "Service functions.h"
#include "Crupier.h"


// Class Work 14.08.2023 -------------------------------------------	

/// Доменная логика -> модель пргораммирования

/**

1. Проект системы классов
2. Схема взаимодействия:
	2.1 Что хранят (классы)?
	2.2 Кто и как ими (классами) пользуется?

*/

/// Процесс проектирования системы классов
/**

1. Создать набор абстрактных сущностей, дублирующих моделируемую систему
2. Определить отношения в первом приближении: "Кто кем/чем пользуется"
3. Описать состав классов и методов


*DTO - data transfer object - структура для обмена данными между классами

*/

//Task 1 Приложение с карточными играми: 1) дурак 2) 101
void Task_1()
{	
	Crupier crupier_obj;
	std::set<Player*> players_set{ new Player, new Player, new Player };

	
	crupier_obj.Start_Game_Session(GameType::Fool, players_set);

}
//Task 2
void Task_2()
{
	
}
//Task 3
void Task_3()
{

}


// MAIN ------- MAIN ------- MAIN ------- MAIN ------- MAIN --------
int main()
{
srand(time(NULL));
		
	
Task_1();
Task_2();
Task_3();





std::cout << "\n\n";
//system("pause");	
_getch();
}


