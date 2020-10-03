#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <cstdlib>
#include <cstdio>
#include <cstdlib>
#include <windows.h>
using namespace std;
#define size 95000000
class morsecode{
private:
    string text;
    char msg[101];
    char decode[101];
    char check[101];

public:

    void choose();
    void convert();
    void translate();
    void exit();

    void pause(int p){
        for(int i=0;i<p;i++){
            for(long int j=0;j<size;j++){

            }
        }
    }

};
void morsecode::choose(){
    system("CLS");
    cout << "1.Convert message\n";
    cout << "2.Translate message\n";
    cout << "3.Exit\n";
    cout << "\nEnter the option you want to choose:";
    int a;
    cin >> a;
    if(a==1){
        convert();
    }
    else if(a==2){
        translate();
    }
    else if(a==3){
        exit();
    }
    else{
        system("CLS");
        cout << "Wrong input. Please enter again...\n";
        pause(5);
        choose();
    }
}

void morsecode::convert(){
    system("CLS");
    ofstream converter;
    converter.open("Converted Message.txt");
    cout << "Enter the message you want to convert to morse code:\n";
    cin.ignore(1);
    getline(cin,text);
    int len=text.length();
    cout << "\n\nThe converted message in morse code is:\n";
    converter << "The converted message in morse code is:\n";
    for(int t=0;t<len;t++){
        switch (text[t]){
            case 'A' : case 'a':{
                cout << ".- ";
                converter << ".- ";
                break;
            }
            case 'B' : case 'b':{
                cout << "-... ";
                converter << "-... ";
                break;
            }
            case 'C' : case 'c':{
                cout << "-.-. ";
                converter << "-.-. ";
                break;
            }
            case 'D' : case 'd':{
                cout << "-.. ";
                converter << "-.. ";
                break;
            }
            case 'E' : case 'e':{
                cout << ". ";
                converter << ". ";
                break;
            }
            case 'F' : case 'f':{
                cout << "..-. ";
                converter << "..-. ";
                break;
            }
            case 'G' : case 'g':{
                cout << "--. ";
                converter << "--. ";
                break;
            }
            case 'H' : case 'h':{
                cout << ".... ";
                converter << ".... ";
                break;
            }
            case 'I' : case 'i':{
                cout << ".. ";
                converter << ".. ";
                break;
            }
            case 'J' : case 'j':{
                cout << ".--- ";
                converter << ".--- ";
                break;
            }
            case 'K' : case 'k':{
                cout << "-.- ";
                converter << "-.- ";
                break;
            }
            case 'L' : case 'l':{
                cout << ".-.. ";
                converter << ".-.. ";
                break;
            }
            case 'M' : case 'm':{
                cout << "-- ";
                converter << "-- ";
                break;
            }
            case 'N' : case 'n':{
                cout << "-. ";
                converter << "-. ";
                break;
            }
            case 'O' : case 'o':{
                cout << "--- ";
                converter << "--- ";
                break;
            }
            case 'P' : case 'p':{
                cout << ".--. ";
                converter << ".--. ";
                break;
            }
            case 'Q' : case 'q':{
                cout << "--.- ";
                converter << "--.- ";
                break;
            }
            case 'R' : case 'r':{
                cout << ".-. ";
                converter << ".-. ";
                break;
            }
            case 'S' : case 's':{
                cout << "... ";
                converter << "... ";
                break;
            }
            case 'T' : case 't':{
                cout << "- ";
                converter << "- ";
                break;
            }
            case 'U' : case 'u':{
                cout << "..- ";
                converter << "..- ";
                break;
            }
            case 'V' : case 'v':{
                cout << "...- ";
                converter << "...- ";
                break;
            }
            case 'W' : case 'w':{
                cout << ".-- ";
                converter << ".-- ";
                break;
            }
            case 'X' : case 'x':{
                cout << "-..- ";
                converter <<  "-..- ";
                break;
            }
            case 'Y' : case 'y':{
                cout << "-.-- ";
                converter << "-.-- ";
                break;
            }
            case 'Z' : case 'z':{
                cout << "--.. ";
                converter << "--.. ";
                break;
            }
            case ' ':{
                cout << "    ";
                converter << "    ";
                break;
            }
            case '.':{
                cout << ".-.-.- ";
                converter << ".-.-.- ";
                break;
            }
            case ',':{
                cout << "--..-- ";
                converter << " ";
                break;
            }
            case '?':{
                cout << "..--.. ";
                converter << "..--.. ";
                break;
            }
            case '/':{
                cout << "-..-. ";
                converter << "-..-. ";
                break;
            }
            case '@':{
                cout << ".--.-. ";
                converter << ".--.-. ";
                break;
            }
            case '1':{
                cout << ".---- ";
                converter << ".---- ";
                break;
            }
            case '2':{
                cout << "..--- ";
                converter << "..--- ";
                break;
            }
            case '3':{
                cout << "...-- ";
                converter << "...-- ";
                break;
            }
            case '4':{
                cout << "....- ";
                converter << "....- ";
                break;
            }
            case '5':{
                cout << "..... ";
                converter << "..... ";
                break;
            }
            case '6':{
                cout << "-.... ";
                converter << "-.... ";
                break;
            }
            case '7':{
                cout << "--... ";
                converter << "--... ";
                break;
            }
            case '8':{
                cout << "---.. ";
                converter << "---.. ";
                break;
            }
            case '9':{
                cout << "----. ";
                converter << "----. ";
                break;
            }
            case '0':{
                cout << "----- ";
                converter << "----- ";
                break;
            }

        }
    }
    cout << "\n\n\n\nFor copying this convert text, go to the file 'Converted message'.\n";
    cout << "The location of this file is the same place where ";
    cout << "this program is saved.";
    converter.close();
    cout << "\n\n\n\nChoose your option:\n" << "1. Convert again\n" << "2. translate message\n" << "3. Exit\n\n\n";

    int a;
    cin >> a;
    if(a==1){
        convert();
    }
    else if(a==2){
        translate();
    }
    else if(a==3){
        exit();
    }
    else{
        system("CLS");
        cout << "Wrong input. Please enter again...\n";
        pause(5);
        choose();
    }

}

void morsecode::translate(){
    system("CLS");
    int i,j,k,t,len,len_msg;
    fstream translator("Translate message.txt", ios::in | ios::out);
    translator << "Put the morse code below for translating it...";
    while(translator >> msg){
        len_msg=strlen(msg);
        msg[len_msg]='\0';
        strcpy(check,msg);
        len = strlen(check);
        check[len]=' ';
        check[len+1]='\0';
//                if(check[0=='\0'] || check[1]==' ' || check[2]=='\0')
//                    decode[t]='  ';
//
//                if(check[0]==' ' && check[1]==' ' && check[2]==' ' && check[3]==' ' && check[4]==' ')
//                    decode[t]='  ';

                if(check[0]=='.' && check[1]=='-' && check[2]==' ')
                    decode[t]='A';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='.' && check[3]=='.' && check[4]==' ')
                    decode[t]='B';

               else if(check[0]=='-' && check[1]=='.' && check[2]=='-' && check[3]=='.' && check[4]==' ')
                    decode[t]='C';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='.' && check[3]==' ')
                    decode[t]='D';

               else  if(check[0]=='.' && check[1]==' ')
                    decode[t]='E';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='-' && check[3]=='.' && check[4]==' ')
                    decode[t]='F';

               else  if(check[0]=='-' && check[1]=='-' && check[2]=='.' && check[3]==' ')
                    decode[t]='G';

               else  if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]=='.' && check[4]==' ')
                    decode[t]='H';

                else if(check[0]=='.' && check[1]=='.' && check[2]==' ')
                    decode[t]='I';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='-' && check[3]=='-' && check[4]==' ')
                    decode[t]='J';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='-' && check[3]==' ')
                    decode[t]='K';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='.' && check[3]=='.' && check[4]==' ')
                    decode[t]='L';

                else if(check[0]=='-' && check[1]=='-' && check[2]==' ')
                    decode[t]='M';

                else if(check[0]=='-' && check[1]=='.' && check[2]==' ')
                    decode[t]='N';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='-' && check[3]==' ')
                    decode[t]='O';

               else  if(check[0]=='.' && check[1]=='-' && check[2]=='-' && check[3]=='.' && check[4]==' ')
                    decode[t]='P';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='.' && check[3]=='-' && check[4]==' ')
                    decode[t]='Q';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='.' && check[3]==' ')
                    decode[t]='R';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]==' ')
                    decode[t]='S';

                else if(check[0]=='-' && check[1]==' ')
                    decode[t]='T';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='-' && check[3]==' ')
                    decode[t]='U';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]=='-' && check[4]==' ')
                    decode[t]='V';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='-' && check[3]==' ')
                    decode[t]='W';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='.' && check[3]=='-' && check[4]==' ')
                    decode[t]='X';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='-' && check[3]=='-' && check[4]==' ')
                    decode[t]='Y';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='.' && check[3]=='.' && check[4]==' ')
                    decode[t]='Z';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='.' && check[3]=='-' && check[4]=='.' && check[5]=='-' && check[6]==' ')
                    decode[t]='.';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='.' && check[3]=='.' && check[4]=='-' && check[5]=='-' && check[6]==' ')
                    decode[t]=',';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='-' && check[3]=='-' && check[4]=='.' && check[5]=='.' && check[6]==' ')
                    decode[t]='?';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='.' && check[3]=='-' && check[4]=='.' && check[5]==' ')
                    decode[t]='/';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='-' && check[3]=='.' && check[4]=='-' && check[5]=='.' && check[6]==' ')
                    decode[t]='@';

                else if(check[0]=='.' && check[1]=='-' && check[2]=='-' && check[3]=='-' && check[4]=='-' && check[5]==' ')
                    decode[t]='1';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='-' && check[3]=='-' && check[4]=='-' && check[5]==' ')
                    decode[t]='2';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]=='-' && check[4]=='-' && check[5]==' ')
                    decode[t]='3';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]=='.' && check[4]=='-' && check[5]==' ')
                    decode[t]='4';

                else if(check[0]=='.' && check[1]=='.' && check[2]=='.' && check[3]=='.' && check[4]=='.' && check[5]==' ')
                    decode[t]='5';

                else if(check[0]=='-' && check[1]=='.' && check[2]=='.' && check[3]=='.' && check[4]=='.' && check[5]==' ')
                    decode[t]='6';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='.' && check[3]=='.' && check[4]=='.' && check[5]==' ')
                    decode[t]='7';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='-' && check[3]=='.' && check[4]=='.' && check[5]==' ')
                    decode[t]='8';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='-' && check[3]=='-' && check[4]=='.' && check[5]==' ')
                    decode[t]='9';

                else if(check[0]=='-' && check[1]=='-' && check[2]=='-' && check[3]=='-' && check[4]=='-' && check[5]==' ')
                    decode[t]='0';

                else
                    decode[t]='   ';
            t++;
        }
        decode[t]='\0';
        int p,l=strlen(decode);
        char message[101];
        for(p=0;p<l;p++){
            message[p]=decode[p+2];
        }
        cout << "The Decoded message is:\n\n";
        cin.ignore();
        cout << message << endl;

    translator.close();
    cout << "\n\n\n\nChoose your option:\n" << "1. Convert again\n" << "2. translate message\n" << "3. Exit\n\n\n";

    int a;
    cin >> a;
    if(a==1){
        convert();
    }
    else if(a==2){
        translate();
    }
    else if(a==3){
        exit();
    }
    else{
        system("CLS");
        cout << "Wrong input. Please enter again...\n";
        pause(5);
        choose();
    }
}

void morsecode::exit(){
    system("CLS");
    cout << "Press any key for closing the command prompt...";
}

int main(){
    morsecode obj1;
    obj1.choose();

    cout << "\n\n\n\n\n\n\n\n\n\n\n\n";
return 0;
}
