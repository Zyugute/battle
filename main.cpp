#include <iostream>
#include <string>
#include <ctime>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru");
    string name;
    cout <<"input name:";
    
    //you
    cin >> name;
    string input;
    int number=0;
    int numberfreez=0;
    int NumberAttack=1;
    bool live=true;
    int blood=100;
    int heal=5;
    int bleeding=0;
    int xp=0;
    int maxxp=10;
    int lvl=0;
    int money=0;
    
    int i=0;
    int numberofenemies=0;//количество врагов
    int enemies;
    //rat
    int enemyrat=1;
    int attackRangeRat=10;
    int maxattackRat=10;//1-10
    int bloodRat=30;
    //fatRat
    int enemyfatrat=2;
    int attackRangefatRat=5;
    int maxattackfatRat=15;
    int bloodfatRat=60;
    
    
    while(live)
    {
        //savezone
        bool battle=false;
        while(!battle)
        {
            cout<<"shop\nbattle max:"<<NumberAttack<<endl;
            cin>>input;
            if(input=="shop")
            {
                cout<<"You go to the shop."<<endl;
            }
            else
            {
                if(input=="battle")
                {
                    cout<<"difficulty number:";
                    cin>>number;
                    if(number>=NumberAttack)
                    {
                        number=NumberAttack;
                        battle=true;
                    }
                    else
                    {
                        if(number<=1)
                        {
                            number=1;
                            battle=true;
                        }
                        battle=true;
                    }
                    
                    
                }
                else
                {
                    cout<<"error input"<<endl;
                }
            }
            
        }
        //clear cmd and konsole
        cout<<"battle "<<number<<endl;
        /*while(battle)
        {
            numberofenemies=0;//как посчитать?
            for i in range(number)
            {
                if(number>1)
                {
                    
                }
                int *enemies=new int[(numberofenemies*4)]
                //сдесь должен быть бой
                blood=0;
                if(blood<=0)
                {
                    live=false;
                    battle=false;
                }
            }
            
        }*/
        
        
        
    }
    cout<<"The end \n"<<name<<" dead\nNumberAttack:"<<NumberAttack<<endl;
}
