#include <iostream>
#include <string>
#include <ctime>
int main()
{
    using namespace std;
    setlocale(LC_ALL, "ru");
    string name;
    cout <<"input name:";
    string nameofenemies="";
    string print;
    //you
    cin >> name;
    string input;
    int number=0;
    int randnumber=0;
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
        numberfreez=number;
        while(battle)
        {
            numberofenemies=0;//как посчитать?
            i=0;
            for(i;i<numberfreez;0)
            {
                if(i+1==numberfreez)
                {
                    numberofenemies+=1;
                    nameofenemies+='1';
                    i+=1;
                }
                else
                {
                    randnumber=rand();
                    randnumber=(randnumber%2)+1;
                    if(randnumber==1)
                    {
                        numberofenemies+=1;
                        nameofenemies+='1';
                        i+=1;
                    }
                    else
                    {
                        numberofenemies+=2;
                        nameofenemies+='2';
                        i+=2;
                    }
                }    
            }
            i=0;
            int *enemies=new int[(numberofenemies*4)];
            //внесение в массив врагов
            for(i;i<numberofenemies;0)
            {
                if(nameofenemies[i]=='1')
                {
                    enemies[i*4]=enemyrat;
                    enemies[i*4+1]=attackRangeRat;
                    enemies[i*4+2]=maxattackRat;
                    enemies[i*4+3]=bloodRat;
                    i+=1;
                }
                else
                {
                    if(nameofenemies[i]=='2')
                    {
                        enemies[i*4]=enemyfatrat;
                        enemies[i*4+1]=attackRangefatRat;
                        enemies[i*4+2]=maxattackfatRat;
                        enemies[i*4+3]=bloodfatRat;
                        i+=1;
                    }
                    else
                    {
                        cout<<i<<"numberofenemies==error"<<endl;
                        i+=1;
                    }
                }
                
            }
            for(int i=0;i<numberofenemies;0)
            {
                print+=to_string(enemies[i*4])+"\n";
                print+="attackRangefatRat:"+to_string(enemies[i*4+1])+"\n";
                print+="maxattackfatRat:"+to_string(enemies[i*4+2])+"\n";
                print+="bloodfatRat:"+to_string(enemies[i*4+3])+"\n";
                i+=1;
            }
            cout<<print<<endl;
            //сдесь должен быть бой
            blood=0;
            if(blood<=0)
            {
                live=false;
                battle=false;
            }
            delete[] enemies;
        }
    }
    
    cout<<"The end \n"<<name<<" dead\nNumberAttack:"<<NumberAttack<<endl;
}
