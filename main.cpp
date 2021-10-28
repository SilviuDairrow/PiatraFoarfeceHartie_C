#include <bits/stdc++.h>
#include <fstream>
#include <windows.h>
#include <ctime>
#include <stdlib.h>

using namespace std;

int scor[4];
bool sw;

void Credits()
{
    cout << "Un joc de Piatra-Foarfece-Hartie in C++ creat de Dairrow";
    Sleep(2300);
}

int Random()
{
    int x;
    srand(time(NULL));
    x=rand()%3+1;
    return x;
}

void AfisAlegeri()
{
    cout << "           P/p - Piatra\n";
    cout << "           F/f - Foaie \n";
    cout << "           H/h - Hartie\n";
    if(sw==1)
    {
        cout << "           X/x - Inchidere\n";
        cout << "           D/d - Credits\n";
    }
    cout << "\n       Alegere: ";
}

void Start1()
{
    cout << "   Introdu litera specifica alegerii tale:\n\n";
    Sleep(500);
}

void AfisScor()
{
    cout << "                      Score Tab: Victorii - " << scor[1] << "     Egaluri = " << scor[2] << "     Infrangeri = " << scor[3] << "\n\n";
}

void AfisWin()
{
    cout << "\n";
    cout << "+===========================================================+\n\n";
    cout << "                  Felicitari, ai castigat!\n";
    if(scor[1]==1) cout << "                 Acum ai o singura victorie.\n\n";
    else cout << "                    Acum ai " << scor[1] << " victorii.\n\n";
    cout << "+===========================================================+\n\n";
    Sleep(2500);
    system("CLS");
}

void AfisLose()
{
    cout << "\n";
    cout << "+===========================================================+\n\n";
    cout << "                       Infrangere!\n";
    if(scor[3]==1) cout << "               Acum ai o singura infrangere.\n\n";
    else cout << "                  Acum ai " << scor[3] << " infrangeri.\n\n";
    cout << "+===========================================================+\n\n";
    Sleep(2500);
    system("CLS");
}

void AfisEgal()
{
    cout << "\n";
    cout << "+===========================================================+\n\n";
    cout << "                       Egal!\n";
    if(scor[2]==1) cout << "            Acum ai o singura egalitate.\n\n";
    else cout << "                 Acum ai " << scor[2] << " egaluri.\n\n";
    cout << "+===========================================================+\n\n";
    Sleep(2500);
    system("CLS");
}
int main()
{   cout << "                                 Joc de Piatra-Hartie-Foarfece\n\n";
    char aleg[2],ai;
    if(sw==1)AfisScor();
    Start1();
    AfisAlegeri();
    cin.getline(aleg,2);
    if(aleg[0] != 'f' && aleg[0] != 'F' && aleg[0] != 'h' && aleg[0] != 'H' && aleg[0] != 'p' && aleg[0] != 'P' && aleg[0] != 'x' && aleg[0] != 'X' && aleg[0] != 'd' && aleg[0] != 'D')
    {
        cout << "\n   Optiune invalida, selecteaza litera corezpunzatoarea alegerii dvs.\n";
        Sleep(2000);
        system("CLS");
        main();
    }
    else
    {
        cout << "\n";
        if(aleg[0]=='x'||aleg[0]=='X')return 0;
        sw=1;
        if(aleg[0]=='d' || aleg[0] == 'D')
        {
            Credits();
            Sleep(1000);
            scor[1]=99999;
            system("CLS");
            main();
        }
        ai=Random();
        if(aleg[0] == 'p' || aleg[0] == 'P')
        {
            if(ai==1)
            {
                scor[2]++;
                AfisEgal();
            }
            else
            {
                    if(ai==2)
                {
                    scor[1]++;
                    AfisWin();
                }
                    else
                {
                    scor[3]++;
                    AfisLose();
                }
            }
        }
        else
        {
            if(aleg[0] == 'f' || aleg[0] == 'F')
        {
               if(ai==1)
            {
                scor[3]++;
                AfisLose();
            }
                else
            {
                    if(ai==2)
                {
                    scor[2]++;
                    AfisEgal();
                }
                    else
                {
                    scor[1]++;
                    AfisWin();
                }
            }
        }
            else
            {
                if(ai==1)
            {
                scor[1]++;
                AfisWin();
            }
            else
            {
                    if(ai==2)
                {
                    scor[3]++;
                    AfisLose();
                }
                    else
                {
                    scor[2]++;
                    AfisEgal();
                }
            }
            }
        }
        main();
    }
    return 0;
}
