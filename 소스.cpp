#include<iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;

void Input();
void Process();
void Render();

bool bGameState = true; 
// 꺼짐

char Key;

int main()
{   
    // Game engine
    // 사용자의 입력을 받는다. Input
    // 그림을 그린다. (가상 사진 찍는다) Render
    // 오브젝트를 배치한다. Process

    while (bGameState) // 끝을 알수 없을때 사용
    {

        Input();
        Process();
        Render();
    }

    return 0;
}
void Input()
{
    cin >> Key;
}
void Process()
{
    if (Key == 'q'|| Key == 'Q')
    {
        bGameState = false;  //상단에 while 문에 충족
    }
}
void Render()
{
    // 프로그램에 사용하지 말것 
    system("cls"); //콘솔창 clear
    cout << "그린다." << endl;
}