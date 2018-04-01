#include <iostream>

using namespace std;

class human{
public:
    float health=600;
    float armor=5;
    float magic_resistance=5;
};

class orc{
public:
    float health=800;
    float armor=7;
    float magic_resistance=1;
};

class elf{
public:
    float health=400;
    float armor=2;
    float magic_resistance=7;
};




class human_knight : public human{
public:
    string damage_type="physical";
    float damage=150;
    human_knight(){
        health+=1000;
        armor+=10;
        magic_resistance-=4;
    }
};

class human_mercenary : public human{
public:
    string damage_type="physical";
    float damage=220;
    human_mercenary(){
        health+=800;
        armor+=5;
        magic_resistance-=2;
    }
};

class human_warrior : public human{
public:
    string damage_type="physical";
    float damage=200;
    human_warrior(){
        health+=900;
        armor+=7;
        magic_resistance-=3;
    }
};

class human_herald : public human{
public:
    string damage_type="physical";
    float damage=150;
    human_herald(){
        health+=550;
        armor+=10;
        magic_resistance+=2;
    }
};

class human_thief : public human{
public:
    string damage_type="physical";
    float damage=220;
    human_thief(){
        health+=500;
        armor+=3;
        magic_resistance+=1;
    }
};

class human_assasin : public human{
public:
    string damage_type="physical";
    float damage=270;
    human_assasin(){
        health+=400;
        armor+=2;
        magic_resistance-=2;
    }
};

class human_sorcerer : public human{
public:
    string damage_type="magic";
    float damage=200;
    human_sorcerer(){
        health+=600;
        armor-=1;
        magic_resistance+=5;
    }
};

class human_pyromancer : public human{
public:
    string damage_type="magic";
    float damage=250;
    human_pyromancer(){
        health+=400;
        armor-=2;
        magic_resistance+=4;
    }
};

class human_cleric : public human{
public:
    string damage_type="magic";
    float damage=120;
    human_cleric(){
        health+=850;
        armor+=8;
        magic_resistance+=6;
    }
};
/*
class human_necromancer : public human{
public:
    string damage_type="magic";
    float damage=150;
    human_knight(){
        health+=1000;
        armor+=10;
        magic_resistance-=4;
    }
}
*/

class orc_knight : public orc{
public:
    string damage_type="physical";
    float damage=150;
    orc_knight(){
        health+=1000;
        armor+=10;
        magic_resistance-=4;
    }
};

class orc_mercenary : public orc{
public:
    string damage_type="physical";
    float damage=220;
    orc_mercenary(){
        health+=800;
        armor+=5;
        magic_resistance-=2;
    }
};

class orc_warrior : public orc{
public:
    string damage_type="physical";
    float damage=200;
    orc_warrior(){
        health+=900;
        armor+=7;
        magic_resistance-=3;
    }
};

class orc_herald : public orc{
public:
    string damage_type="physical";
    float damage=150;
    orc_herald(){
        health+=550;
        armor+=10;
        magic_resistance+=2;
    }
};

class orc_thief : public orc{
public:
    string damage_type="physical";
    float damage=220;
    orc_thief(){
        health+=500;
        armor+=3;
        magic_resistance+=1;
    }
};

class orc_assasin : public orc{
public:
    string damage_type="physical";
    float damage=270;
    orc_assasin(){
        health+=400;
        armor+=2;
        magic_resistance-=2;
    }
};

class orc_sorcerer : public orc{
public:
    string damage_type="magic";
    float damage=200;
    orc_sorcerer(){
        health+=600;
        armor-=1;
        magic_resistance+=5;
    }
};

class orc_pyromancer : public orc{
public:
    string damage_type="magic";
    float damage=250;
    orc_pyromancer(){
        health+=400;
        armor-=2;
        magic_resistance+=4;
    }
};

class orc_cleric : public orc{
public:
    string damage_type="magic";
    float damage=120;
    orc_cleric(){
        health+=850;
        armor+=8;
        magic_resistance+=6;
    }
};

class elf_knight : public elf{
public:
    string damage_type="physical";
    float damage=150;
    elf_knight(){
        health+=1000;
        armor+=10;
        magic_resistance-=4;
    }
};

class elf_mercenary : public elf{
public:
    string damage_type="physical";
    float damage=220;
    elf_mercenary(){
        health+=800;
        armor+=5;
        magic_resistance-=2;
    }
};

class elf_warrior : public elf{
public:
    string damage_type="physical";
    float damage=200;
    elf_warrior(){
        health+=900;
        armor+=7;
        magic_resistance-=3;
    }
};

class elf_herald : public elf{
public:
    string damage_type="physical";
    float damage=150;
    elf_herald(){
        health+=550;
        armor+=10;
        magic_resistance+=2;
    }
};

class elf_thief : public elf{
public:
    string damage_type="physical";
    float damage=220;
    elf_thief(){
        health+=500;
        armor+=3;
        magic_resistance+=1;
    }
};

class elf_assasin : public elf{
public:
    string damage_type="physical";
    float damage=270;
    elf_assasin(){
        health+=400;
        armor+=2;
        magic_resistance-=2;
    }
};

class elf_sorcerer : public elf{
public:
    string damage_type="magic";
    float damage=200;
    elf_sorcerer(){
        health+=600;
        armor-=1;
        magic_resistance+=5;
    }
};

class elf_pyromancer : public elf{
public:
    string damage_type="magic";
    float damage=150;
    elf_pyromancer(){
        health+=400;
        armor-=2;
        magic_resistance+=4;
    }
};

class elf_cleric : public elf{
public:
    string damage_type="magic";
    float damage=120;
    elf_cleric(){
        health+=850;
        armor+=8;
        magic_resistance+=6;
    }
};

template <class T,class M>
void fight(T first,M second){
    float pure_damage1,pure_damage2;
    if(first.damage_type=="magic"){
        pure_damage1=first.damage*(100-(5*second.magic_resistance))/100;
    }
    else
        pure_damage1=first.damage*(100-(5*second.armor))/100;
    if(second.damage_type=="magic"){
        pure_damage2=second.damage*(100-(5*first.magic_resistance))/100;
    }
    else
        pure_damage2=second.damage*(100-(5*first.armor))/100;
    while((first.health>0) && (second.health>0)){
        cout <<"your hero health:"<<first.health<<"         "<<"enemy health:"<<second.health<<endl;
        first.health-=pure_damage2;
        second.health-=pure_damage1;
    }
};


int main()
{
    human_warrior hero;
    elf_pyromancer enemy;
    fight(hero,enemy);
    /*
    int n,k;
    cout << "choose your race"<<endl<<"1-human"<<endl<<"2-orc"<<endl<<"3-elf"<<endl;
    cin >>n;
    cout <<endl<< "choose your class" << endl<<"1-knight"<<endl<<"2-mercenary"<<endl<<"3-warrior"<<endl<<"4-herald"<<endl<<"5-thief"<<endl<<"6-assasin"<<endl<<"7-sorcerer"<<endl<<"8-pyromancer"<<endl<<"9-cleric"<<endl;
    cin >>k;
    switch (n) {
    case 1:
        switch (k){
            case 1:
                {human_knight hero;break;}
            case 2:
                {human_mercenary hero;break;}
            case 3:
                {human_warrior hero;break;}
            case 4:
                {human_herald hero;break;}
            case 5:
                {human_thief hero;break;}
            case 6:
                {human_assasin hero;break;}
            case 7:
                {human_sorcerer hero;break;}
            case 8:
                {human_pyromancer hero;break;}
            case 9:
                {human_cleric hero;break;}
        }
        break;
    case 2:
        switch (k){
            case 1:
                {orc_knight hero;break;}
            case 2:
                {orc_mercenary hero;break;}
            case 3:
                {orc_warrior hero;break;}
            case 4:
                {orc_herald hero;break;}
            case 5:
                {orc_thief hero;break;}
            case 6:
                {orc_assasin hero;break;}
            case 7:
                {orc_sorcerer hero;break;}
            case 8:
                {orc_pyromancer hero;break;}
            case 9:
                {orc_cleric hero;break;}
        }
        break;
    case 3:
        switch (k){
            case 1:
                {elf_knight hero;break;}
            case 2:
                {elf_mercenary hero;break;}
            case 3:
                {elf_warrior hero;break;}
            case 4:
                {elf_herald hero;break;}
            case 5:
                {elf_thief hero;break;}
            case 6:
                {elf_assasin hero;break;}
            case 7:
                {elf_sorcerer hero;break;}
            case 8:
            {elf_pyromancer hero;break;}
            case 9:
                {elf_cleric hero;break;}
        }
        break;
}



    cout <<endl<< "choose your enemy race"<<endl<<"1-human"<<endl<<"2-orc"<<endl<<"3-elf"<<endl;
    cin >>n;
    cout <<endl<< "choose your enemy class" << endl<<"1-knight"<<endl<<"2-mercenary"<<endl<<"3-warrior"<<endl<<"4-herald"<<endl<<"5-thief"<<endl<<"6-assasin"<<endl<<"7-sorcerer"<<endl<<"8-pyromancer"<<endl<<"9-cleric"<<endl;
    cin >>k;
    switch (n) {
    case 1:
        switch (k){
            case 1:
                {human_knight enemy;break;}
            case 2:
                {human_mercenary enemy;break;}
            case 3:
                {human_warrior enemy;break;}
            case 4:
                {human_herald enemy;break;}
            case 5:
                {human_thief enemy;break;}
            case 6:
                {human_assasin enemy;break;}
            case 7:
                {human_sorcerer enemy;break;}
            case 8:
                {human_pyromancer enemy;break;}
            case 9:
                {human_cleric enemy;break;}
        }
        break;
    case 2:
        switch (k){
            case 1:
                {orc_knight enemy;break;}
            case 2:
                {orc_mercenary enemy;break;}
            case 3:
                {orc_warrior enemy;break;}
            case 4:
                {orc_herald enemy;break;}
            case 5:
                {orc_thief enemy;break;}
            case 6:
                {orc_assasin enemy;break;}
            case 7:
                {orc_sorcerer enemy;break;}
            case 8:
                {orc_pyromancer enemy;break;}
            case 9:
                {orc_cleric enemy;break;}
        }
        break;
    case 3:
        switch (k){
            case 1:
                {elf_knight enemy;break;}
            case 2:
                {elf_mercenary enemy;break;}
            case 3:
                {elf_warrior enemy;break;}
            case 4:
                {elf_herald enemy;break;}
            case 5:
                {elf_thief enemy;break;}
            case 6:
                {elf_assasin enemy;break;}
            case 7:
                {elf_sorcerer enemy;break;}
            case 8:
                {elf_pyromancer enemy;break;}
            case 9:
                {elf_cleric enemy;break;}
        }
        break;
    }
    fight(hero,enemy);
    */
};
