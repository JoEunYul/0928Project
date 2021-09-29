#include<iostream>
#include <windows.h> //windows 헤더파일 include

using namespace std;
//d엔진 개발자가 구현       
char Input();
void Process(char Key);
void Render();

//개발자가 구현하는 Process
void CustomProcess(char Key);

//개발자가 구현하는 Render
void CustomRender();

int Gold = 0;

bool bGameState = true;
// 꺼짐
// ▲▲▲▲▲▲▲▲ 선언 
int main()
{   
    // Game engine
    // 사용자의 입력을 받는다. Input
    // 그림을 그린다. (가상 사진 찍는다) Render
    // 오브젝트를 배치한다. Process

    while (bGameState) // 끝을 알수 없을때 사용
    {

        char Key = Input();
        Process(Key);
        Render();

    }

    return 0;
}

//    ▽▽▽▽▽▽반환
char Input() // 엔진 코드
{
    //단순히 콘솔 입력
    //조이스틱, 조이패드
    // 터치패드, 마우스 등
    char Key;

    cin >> Key;

    return Key;
}
void Process(char Key)
{
    cout << Key << endl; //log

    if (Key == 'q'|| Key == 'Q')
    {
        bGameState = false;  //상단에 while 문에 충족
    }

    if (Key == 'G' || Key == 'g')
    {
        Gold++;
    }

}
void Render()
{
    // 프로그램에 사용하지 말것 
    system("cls"); //콘솔창 clear
    cout << "그린다." << endl;

    CustomRender();
}
void CustomProcess(char Key)
{
   
}
void CustomRender()
{
    cout << "Gold : " << Gold << endl;
}