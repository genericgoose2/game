#include<iostream>

using namespace std;

int main()
{
    char input;
    int coward = 0, death = 0, curse = 0, gold = 0;
    cout<<"Пещера\nВойти?\n";
    scanf(" %c", &input);
    if (input == 'y')
    {
        cout<<"Сильный Монстр\nНапасть?\n";
        
        scanf(" %c", &input);
        if (input == 'y')
        {
            cout<<"Поражение\n";
            death = 1;
        }
        else
        {
            cout<<"Обход\nСокровище\nВзять?\n";
            scanf(" %c", &input);
            if(input == 'y')
            {
                cout<<"Тяжёлое\n";
                gold = 1;
            }
            cout<<"Река\nПлыть?";
            scanf(" %c", &input);
            if(input == 'y')
            {
                if(gold == 1)
                {
                cout<<"Сокровище утонуло\n";
                gold = 0;
                }
                cout<<"Вы доплыли до дома\n";
            }
            else
            {
                cout<<"Долгий путь\nСвернуть?";
                scanf(" %c", &input);
                if(input == 'y')
                {
                    cout<<"Нищий\nЩедрость?\n";
                    scanf(" %c", &input);
                    
                    if(gold == 1)
                    {
                    if(input == 'y')
                    {
                        cout<<"Нищий благословил вас на долгую, счастливую жизнь\n";
                        gold = 0;
                        curse = -1;
                    }
                    else
                    {
                        cout<<"Нищий проклял вас, и ваше золото обратилось в пыль\n";
                        gold = 0;
                        curse = 1;
                    }
                    }
                    else
                    {
                        cout<<"Вы встретили нищего, но вам нечего ему дать\n";
                    }
                }
            }
        }
    }
    else
    {
        cout<<"Испугавшись, вы убежали";
        coward = 1;
    }
    
                if(coward == 1 || death == 1)
                {
                    return 0;
                }
                cout<<"После долгого пути, вы добрались до дома ";
                if(gold == 1)
                {
                    cout<<"с золотом\n";
                }
                if(curse == 1)
                {
                    cout<<"с проклятием\n";
                }
                if(curse == -1)
                {
                    cout<<"с благословением\n";
                }
                if(gold == 0 && curse == 0)
                {
                    cout<<"ни с чем\n";
                }
    
    return 0;
}
