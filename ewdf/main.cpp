//
//  main.cpp
//  Sonya
//
//  Created by Evgenii Golgovskikh on 13/06/2019.
//  Copyright © 2019 Evgenii Golgovskikh. All rights reserved.
//

#include<iostream>
#include<stdlib.h>
#include<clocale>
#include<Windows.h>
#include<stdio.h>
#include<string.h>
#include<iomanip>
#include<conio.h>
#include<cstdio>
#include<cstring>

using namespace std;
using std::fgets;
using std::strcpy;
using std::strncat;


#define L 200 // Ã‡ÍÒËÏ‡Î¸ÌÓÂ ÍÓÎË˜ÂÒÚ‚Ó ÒËÏ‚ÓÎÓ‚ ‚ ÒÚÓÍÂ
char nJ[L][L];
char fnAV[L][L];
char nAV[L][L];
char nazv[L][L];
int n[L];
int year[L];
char *nameJ = nJ[L];
char* fnameAV = fnAV[L];
char* nameAV = nAV[L];
char* nazvS = nazv[L];
int nom = n[L];
int year1 = year[L];

int k = 0;
char buffname[L][L];
char stringCopy[L];
char stringCopy2[L];

struct artical
{
    char* nameJ; // Õ‡Á‚‡ÌËÂ ÊÛÌ‡Î‡
    char* fnameAV; // ‘‡ÏËÎËˇ ‡‚ÚÓ‡
    char* nameAV; // »Ïˇ ‡‚ÚÓ‡
    char* nazvS; // Õ‡Á‚‡ÌËÂ ÒÚ‡Ú¸Ë
    int nom;// ÌÓÏÂ ÊÛÌ‡Î‡
    int year1;// „Ó‰ ‚˚ÔÛÒÍ‡
};

artical Newartical(int k) {
    
    cout << "Õ‡Á‚‡ÌËÂ ÊÛÌ‡Î‡ " << endl;
    fgets(nJ[k], L, stdin);
    cout << "ÕÓÏÂ" << endl;
    cin >> n[k];
    cout << "√Ó‰ " << endl;
    cin >> year[k];
    cout << "‘‡ÏËÎËˇ ‡‚ÚÓ‡ " << endl;
    fgets(fnAV[k], L, stdin);
    cout << "»Ïˇ ‡‚ÚÓ‡" << endl;
    fgets(nAV[k], L, stdin);
    cout << "Õ‡Á‚‡ÌËÂ ÒÚ‡Ú¸Ë " << endl;
    fgets(nazv[k], L, stdin);
    artical buffer{ nJ[k],n[k],year[k], fnAV[k], nAV[k], nazv[k] };
    return buffer;
}

void print(int g, artical *newartical)
{
    cout << "∆ÛÌ‡Î - " << g << endl;
    cout << "__________________________________________________________" << endl;
    cout << setfill(' ') << setw(20) << left << "Õ‡Á‚‡ÌËÂ ÊÛÌ‡Î‡ " << '|' << setfill(' ') << setw(37) << newartical[g].nameJ << right << '|' << endl;
    cout << "----------------------------------------------------------" << '|' << endl;
    cout << setfill(' ') << setw(20) << left << "ÕÓÏÂ " << '|' << setfill(' ') << setw(37) << newartical[g].nom << right << '|' << endl;
    cout << "----------------------------------------------------------" << '|' << endl;
    cout << setfill(' ') << setw(20) << left << "√Ó‰ " << '|' << setfill(' ') << setw(37) << newartical[g].year << right << '|' << endl;
    cout << "----------------------------------------------------------" << '|' << endl;
    cout << setfill(' ') << setw(20) << left << "‘‡ÏËÎËˇ ‡‚ÚÓ‡ " << '|' << setfill(' ') << setw(37) << newartical[g].fnameAV << right << '|' << endl;
    cout << "----------------------------------------------------------" << '|' << endl;
    cout << setfill(' ') << setw(20) << left << "»Ïˇ ‡‚ÚÓ‡ " << '|' << setfill(' ') << setw(37) << newartical[g].nameAV << right << '|' << endl;
    cout << "----------------------------------------------------------" << '|' << endl;
    cout << setfill(' ') << setw(20) << left << "Õ‡Á‚‡ÌËÂ ÒÚ‡Ú¸Ë" << '|' << setfill(' ') << setw(37) << newartical[g].nazv << right << '|' << endl;
    cout << "__________________________________________________________" << '|' << endl;
    
}
void AVfind(char *buffname, artical *newartical)
{
    for (int z = 0; z < k; z++) {
        strcpy(stringCopy, fnAV[z]);
        char probel[] = " ";
        strncat(fnAV[z], probel, L);
        strncat(fnAV[z], nAV[z], L);
        if (strcmp(buffname, fnAV[z]) == 0)
        {
            
        }
        else {
            strcpy(fnAV[z], stringCopy);
            print(z, newartical);
            
        }
        
        strcpy(fnAV[z], stringCopy);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    artical *newartical = new artical[L];
    artical *newartical1 = new artical[L];
    artical *newartical2 = new artical[L]
    
    ;
    
    int i = 10;
    while (i != 0)
    {
        
        cout << fixed << setprecision(5) << " ƒÓ·‡‚ËÚ¸ ÒÚ‡Ú¸˛" << "......................1" << endl;
        cout << fixed << setprecision(5) << " –‡ÒÔÂ˜‡Ú‡Ú¸ ËÌÙÓÏ‡ˆË˛ Ó ÒÚ‡Ú¸Â" << "............2" << endl;
        cout << fixed << setprecision(5) << " Õ‡ÈÚË ‚ÒÂ ÒÚ‡Ú¸Ë ‡‚ÚÓ‡" << ".....3" << endl;
        cout << fixed << setprecision(5) << " Õ‡ÈÚË ‚ÒÂı ‡‚ÚÓÓ‚" << ".........4" << endl;
        cout << fixed << setprecision(5) << " ¬˚ÈÚË ËÁ ÔÓ„‡ÏÏ˚" << "..........................0" << endl;
        cout << fixed << setprecision(5) << " =============================================" << endl;
        cout << fixed << setprecision(5) << " ¬‚Â‰ËÚÂ ÌÓÏÂ ÙÛÌÍˆËË ";
        
        cin >> i;
        
        if (i == 1)
        {
            cin.ignore(L, '\n'); // Ò·ÓÒ ·ÛÙÂ‡ ‚‚Ó‰‡ ÍÓÌÒÓÎË
            newartical[k] = Newartical(k);
            cout << "∆ÛÌ‡Î - " << k << endl;
            k++;
            cin.ignore(L, '\n'); // Ò·ÓÒ ·ÛÙÂ‡ ‚‚Ó‰‡ ÍÓÌÒÓÎË
        }
        if (i == 2)
        {
            cin.ignore(L, '\n'); // Ò·ÓÒ ·ÛÙÂ‡ ‚‚Ó‰‡ ÍÓÌÒÓÎË
            if (k != 0)
            {
                int g;
                
                if (k - 1 == 0)
                {
                    cout << "≈ÒÚ¸ ÊÛÌ‡Î 0" << endl;
                }
                else {
                    cout << "≈ÒÚ¸ ÊÛÌ‡Î˚ Ò ÌÓÏÂ‡ÏË ÓÚ 0 ‰Ó " << k - 1 << endl;
                }
                cout << "¬‚Â‰ËÚÂ ÌÓÏÂ ÊÛÌ‡Î‡ ";
                
                cin >> g;
                print(g, newartical);
                cout << endl;
            }
            else {
                cout << "∆ÛÌ‡ÎÓ‚ ÌÂÚ" << endl;
            }
        }
        
        if (i == 3)
        {
            cin.ignore(L, '\n'); // Ò·ÓÒ ·ÛÙÂ‡ ‚‚Ó‰‡ ÍÓÌÒÓÎË
            cout << "¬‚Â‰ËÚÂ ËÏˇ ‡‚ÚÓ‡ ‚ ÙÓÏ‡ÚÂ ‘¿Ã»À»ﬂ »Ãﬂ " << endl;
            
            fgets(buffname[0], L, stdin);
            
            AVfind(buffname[0], newartical);
            cin.ignore(L, '\n'); // Ò·ÓÒ ·ÛÙÂ‡ ‚‚Ó‰‡ ÍÓÌÒÓÎË
            
        }
        
        
        system("pause");
        
        return 0;
    }
