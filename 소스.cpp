#include<iostream>
#include <windows.h> //windows ������� include

using namespace std;

void Input();
void Process();
void Render();

bool bGameState = true; 
// ����

char Key;

int main()
{   
    // Game engine
    // ������� �Է��� �޴´�. Input
    // �׸��� �׸���. (���� ���� ��´�) Render
    // ������Ʈ�� ��ġ�Ѵ�. Process

    while (bGameState) // ���� �˼� ������ ���
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
        bGameState = false;  //��ܿ� while ���� ����
    }
}
void Render()
{
    // ���α׷��� ������� ���� 
    system("cls"); //�ܼ�â clear
    cout << "�׸���." << endl;
}