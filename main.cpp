#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;
int funstr1(char*T);

int main()
{
    char T[80];
    int k=0;
   gets(T);//функция ввода строки
      do
    {
    k+=funstr1(T);
    gets(T);
    }
    while(!strstr(T,"***"));
    cout<<k;
    getch();
    return 0;
}
int funstr1(char*T)
{
    char*p=T;
    int k=0;
    char rasd[]=" ,;?!:)(-";
    bool rstart;
    int l1,l2;

    do{l1=strspn(p,rasd);//возвращает количество символов(вподрядидущих),которые есть в строке rasd ,просмотр строки начинается с адреса p
      p=p+l1;//переход на начло слова
      rstart=false;
      if(strchr("aeyuoiAEYUOI",*p))//первое вхождение символа в строку
        rstart=true;
        l2=strcspn(p,rasd);//возвращает количество вподряд идущих символов ,которых нет в строке rasd
        p+=l2;
        if(rstart && strchr("aeyuoiAEYUOI",*(p-1)))
        k++;

    }
    while(*p);
    return k;
}
