#include <iostream>
#include <string>
#include <random>
#include <ctime>

struct yourPokemon
{
    std::string pokemon;
    std::string Move1;
    int Power1;
    std::string Move2;
    int Power2;
    std::string Move3;
    int Power3;
    std::string Move4;
    int Power4;
    int HP = 100;
    int exp = 0;
    int lvl = 6;
};
struct Pidgey
{
    std::string pokemon;
    std::string Move1;
    int Power1;
    std::string Move2;
    int Power2;
    std::string Move3;
    int Power3;
    std::string Move4;
    int Power4;
    int lvl;
    int exp = 0;
    int HP = 0;
};

float distanceCalc(int x, int y, int Ex, int Ey)
{
    int DiffX = 0, DiffY = 0;
    float Distance;
    DiffX = Ex - x;
    DiffY = Ey - y;
    Distance = sqrt(DiffX * DiffX + DiffY * DiffY);
    return (Distance);
}

void displayPokemon()
{
    std::cout << "             _  " << std::endl;
    std::cout << "            | |    " << std::endl;
    std::cout << " _ __   ___ | | _____ _ __ ___   ___  _ __  " << std::endl;
    std::cout << "| '_ / / _ /| |/ / _ / '_ ` _ / / _ /| '_  / " << std::endl;
    std::cout << "| |_) | (_) |   <  __/ | | | | | (_) | | | |" << std::endl;
    std::cout << "| .__/ /___/|_|/_/___|_| |_| |_|/___/|_| |_|" << std::endl;
    std::cout << "| |                                         " << std::endl;
    std::cout << "|_|  " << std::endl;
}

void battleGraphic()
{
    int a = 100;

    _sleep(a);
    system("cls");
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|R    @     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;
    _sleep(a);
    system("cls");
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "| R   @     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;
    _sleep(a);
    system("cls");
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|  R  @     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;
    _sleep(a);
    system("cls");
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|   R @     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;
    _sleep(a);
    system("cls");
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|    R@     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;
}

int displayMap(int x, int y)
{
    int b = 0;
    std::cout << " ___________" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|     @     |" << std::endl;
    std::cout << "|           |" << std::endl;
    std::cout << "|___________|" << std::endl;

    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> Rocket(0, 10);
    int TeamRocket = Rocket(gen);
    if (TeamRocket == 7)
    {
        battleGraphic();
        b = 1;
    }
    else
    {
        std::mt19937 gen(time(0));
        std::uniform_int_distribution<> wild(0, 6);
        int wildPokemon = wild(gen);
        if (wildPokemon == 3)
        {
            b = 2;
        }
    }

    return (b);
}

int displayMap2(int x, int y)
{
    std::cout << "__________________________________________________________________________________________" << std::endl;
    std::cout << "| xxxxxxxxxxxxxxxx                                                                        |" << std::endl;
    std::cout << "| xxxxxxxxxxxxxxxx                                                                        |" << std::endl;
    std::cout << "|xxxxxxxxxxxxxxx                                                                          |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|                                                                                         |" << std::endl;
    std::cout << "|_________________________________________________________________________________________|" << std::endl;
}

int main()
{
    int random_integer = rand() % 101, currentPositionX = 20, currentPositionY = 20, Move = 0, damage = 0, OpponentHP = 0, potions = 1, key = 0;
    // std::cout << random_integer << std::endl;
    int Array[100][100];                                           // Initialising the grid
    std::fill_n(&Array[0][0], sizeof(Array) / sizeof(**Array), 0); // Filling grid with 0s

    // std::random_device time;
    std::mt19937 gen(time(0));
    std::uniform_int_distribution<> distrX(0, 100);
    std::uniform_int_distribution<> distrY(0, 100);
    int exitX = distrX(gen), exitY = distrY(gen); // Placing the exit
    // std::cout << exitX << "   " << exitY << std::endl; // comments out exit for testing
    Array[exitX][exitY] = 1; // assigning the exit value as 1
    // std::mt19937 gen(time(0));
    std::uniform_int_distribution<> keyX(0, 100);
    std::uniform_int_distribution<> keyY(0, 100);
    int SkeyX = keyX(gen), SkeyY = keyY(gen);
    Array[SkeyX][SkeyY] = 2;

    std::cout << "VALUE" << Array[0][1] << std::endl;
    char direction, pokemon, YNdecision;
    float Distance = 0; // setting up float value for the difference in distance

    std::string name; // Setting name for players name
    system("cls");

    displayPokemon();

    // std::cout << exitX << "   " << exitY << std::endl; // Showing exit location
    std::cout << "Enter your name: " << std::endl;      // Getting player to type name
    getline(std::cin, name);                            // getline gets a whole line of text ie. Name.
    system("cls");                                      // clears the screen before game play
    std::cout << "Hello Trainer " << name << std::endl; // Greet player
    std::cout << "Choose a starter Pokemon " << std::endl;
    std::cout << "b for Bulbasaur" << std::endl;
    std::cout << "c for Charmander" << std::endl;
    std::cout << "s for Squirtle" << std::endl;
    std::cin >> pokemon;
    struct yourPokemon P;
    struct Pidgey Pid;

    switch (pokemon)
    {
    case 'b':
        std::cout << "You have selected Bulbasaur" << std::endl;
        P.pokemon = "Bulbasaur";
        P.Move1 = "Tackle";
        P.Power1 = 2;
        P.Move2 = "Razor leaf";
        P.Power2 = 3;
        P.Move3 = "poison sting";
        P.Power3 = 2;
        P.Move4 = "leach seed";
        P.Power4 = 2;

        break;

    case 'c':
        std::cout << "You have selected Charmander" << std::endl;
        P.pokemon = "Charmander";
        P.Move1 = "Scratch";
        P.Power1 = 2;
        P.Move2 = "Ember";
        P.Power2 = 3;
        P.Move3 = "Metal Claw";
        P.Power3 = 3;
        P.Move4 = "Smokescreen";
        P.Power4 = 0;

        break;

    case 's':
        std::cout << "You have selected Squirtle" << std::endl;
        P.pokemon = "Squirtle";
        P.Move1 = "Tackle";
        P.Power1 = 2;
        P.Move2 = "Water gun";
        P.Power2 = 3;
        P.Move3 = "Ice beam";
        P.Power3 = 3;
        P.Move4 = "Rapid shell";
        P.Power4 = 2;

        break;
    }

    std::cout << "Would you like to see the moves your pokemon has? (State Y or N)" << std::endl;
    std::cin >> YNdecision;

    if (YNdecision == 'y')
    {
        std::cout << P.pokemon << " has the following moves: " << std::endl;
        std::cout << P.Move1 << std::endl;
        std::cout << P.Move2 << std::endl;
        std::cout << P.Move3 << std::endl;
        std::cout << P.Move4 << std::endl;
    }
    else
    {
        std::cout << "You must be wise in the art of Pokemon" << std::endl;
    }

    std::cout << "Would you like to enter the Kanto region? (Y/N)" << std::endl;
    std::cin >> YNdecision;

    if (YNdecision == 'y')
    {

        system("cls");
        displayPokemon();
        std::cout << "Welcome to the Kanto region " << name << std::endl;                 // Welcome player to grid
        std::cout << "In this game you will move using the following keys:" << std::endl; // Showing keys
        std::cout << "w for up" << std::endl;
        std::cout << "s for down" << std::endl;
        std::cout << "a for left" << std::endl;
        std::cout << "d for right" << std::endl;
        std::cout << "x to exit" << std::endl;
        std::cout << "m for map" << std::endl;
        std::cout << "b for bag" << std::endl;
        std::cout << "You must find the secret key and get out!" << std::endl;

        do
        {
            std::cout << "Which direction would you like to travel?" << std::endl;
            std::cin >> direction;
            system("cls");

            switch (direction)
            {
            case 'a':

                currentPositionX = currentPositionX - 1;
                if (currentPositionX == -1)
                {
                    currentPositionX = 100;
                }
                break;
            case 'w':

                currentPositionY = currentPositionY + 1;
                if (currentPositionY == 101)
                {
                    currentPositionY = 1;
                }

                break;
            case 'd':

                currentPositionX = currentPositionX + 1;
                if (currentPositionX == 101)
                {
                    currentPositionX = 1;
                }
                break;
            case 's':

                currentPositionY = currentPositionY - 1;
                if (currentPositionY == -1)
                {
                    currentPositionY = 100;
                }
                break;

            case 'm':
                Distance = distanceCalc(currentPositionX, currentPositionY, exitX, exitY);
                std::cout << "You are " << Distance << " away from the way out" << std::endl;
                if (key == 0)
                {
                    Distance = distanceCalc(currentPositionX, currentPositionY, SkeyX, SkeyY);
                    std::cout << "You are " << Distance << " away from the key" << std::endl;
                }

                break;
            case 'b':
                std::cout << "In your bag you have: " << std::endl
                          << "Potions *" << potions << std::endl;
                if (potions > 0)
                {
                    std::cout << " Would you like to use a potion? (Y/N) " << std::endl;
                    std::cin >> YNdecision;
                    switch (YNdecision)
                    {
                    case 'y':
                    {
                        P.HP = P.HP + 20;
                        potions = potions - 1;
                        std::cout << "HP is now: " << P.HP << std::endl;
                    }
                    break;

                    case 'n':
                    {
                        std::cout << "No health for you " << std::endl;
                    }
                    break;
                    }
                }
                break;
            }
            // std::cout << "position is "<< "X - " << currentPositionX << "Y - " << currentPositionY << std::endl; // Only needed for testing

            if (Array[currentPositionX][currentPositionY] == 2)
            {
                std::cout << "position is "
                          << "X - " << currentPositionX << "Y - " << currentPositionY << "Array: " << Array[currentPositionX][currentPositionY] << std::endl;
                std::cout << "You have found the key to get out!" << std::endl;
                key = 1;
            }

            if (Array[currentPositionX][currentPositionY] == 1)
            {
                std::cout << "position is "
                          << "X - " << currentPositionX << "Y - " << currentPositionY << "Array: " << Array[currentPositionX][currentPositionY] << std::endl;
                std::cout << "You have found the way out!" << std::endl;

                if (key == 1)
                {
                    std::cout << "GAME COMPLETE!" << std::endl;
                    direction = 'x';
                }
                else
                {
                    std::cout << "But you do not have the key!" << std::endl;
                }
            }

            int Battle = displayMap(currentPositionX, currentPositionY);

            if (Battle == 1)
            {

                std::mt19937 gen1(time(0));
                std::uniform_int_distribution<> rocketPokemon(0, 2);
                int OppPokemon = rocketPokemon(gen);

                switch (OppPokemon)
                {
                case 0:
                {
                    Pid.pokemon = "Pidgey";
                    Pid.Move1 = "gust";
                    Pid.Power1 = 2;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 2;
                    Pid.Move4 = "_";
                    Pid.Power4 = 2;
                    Pid.lvl = P.lvl - 2;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 5;

                    break;
                }

                case 1:
                {
                    Pid.pokemon = "Muk";
                    Pid.Move1 = "Poison Sting ";
                    Pid.Power1 = 1;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 3;
                    Pid.Move4 = "_";
                    Pid.Power4 = 0;
                    Pid.lvl = P.lvl - 1;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 6;

                    break;
                }
                case 2:
                {
                    Pid.pokemon = "Ekans";
                    Pid.Move1 = "bite";
                    Pid.Power1 = 2;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 3;
                    Pid.Move4 = "_";
                    Pid.Power4 = 2;
                    Pid.lvl = P.lvl;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 4;

                    break;
                }
                }

                std::cout << "Team rocket has found you!!" << std::endl;
                std::cout << "The Trainer chose a lvl " << Pid.lvl << " " << Pid.pokemon << std::endl;
                std::cout << "What move would you like " << P.pokemon << " to use? " << std::endl;

                do
                {

                    std::cout << P.Move1 << " (1)" << std::endl;
                    std::cout << P.Move2 << " (2)" << std::endl;
                    std::cout << P.Move3 << " (3)" << std::endl;
                    std::cout << P.Move4 << " (4)" << std::endl;
                    std::cin >> Move;

                    std::cout << "Go " << P.pokemon << " use ";
                    switch (Move)
                    {
                    case 1:
                        std::cout << P.Move1 << std::endl;
                        damage = P.Power1;
                        break;

                    case 2:
                        std::cout << P.Move2 << std::endl;
                        damage = P.Power2;
                        break;

                    case 3:
                        std::cout << P.Move3 << std::endl;
                        damage = P.Power3;
                        break;

                    case 4:
                        std::cout << P.Move4 << std::endl;
                        damage = P.Power4;
                        break;
                    }
                    Pid.HP = Pid.HP - damage * 1.5 * P.lvl;

                    if (Pid.HP > 0)
                    {
                        std::cout << Pid.pokemon << " used " << Pid.Move1 << std::endl;
                        P.HP = P.HP - Pid.lvl * Pid.Power1;
                        std::cout << "Your HP is " << P.HP << std::endl;
                        if (P.HP < 1)
                        {
                            std::cout << "Your Pokemon has fainted and you were caught by team rocket.. " << std::endl;
                            std::cout << "Better luck next time .. " << std::endl;
                            std::cout << "Bye!";
                            direction = 'x';
                        }
                    }

                } while (Pid.HP > 0 && P.HP > 0);

                if (Pid.HP < 1)
                {
                    std::cout << Pid.pokemon << " fainted" << std::endl;
                    std::cout << "Team rocket: You have defeated me" << std::endl;
                    std::mt19937 gen1(time(0));
                    std::uniform_int_distribution<> ifPotion(0, 3);
                    int givePotion = ifPotion(gen);
                    if (givePotion == 3)
                    {
                        std::cout << "Here have a potion" << std::endl;
                        potions = potions + 1;
                    }

                    std::cout << P.pokemon << " gained " << Pid.exp << " exp" << std::endl;
                    P.exp = P.exp + Pid.exp;
                }

                if (P.exp >= 12 * P.lvl)
                {
                    do
                    {
                        P.exp = P.exp - 12 * P.lvl;
                        P.lvl = P.lvl + 1;
                        std::cout << P.pokemon << " has gone up to lvl " << P.lvl << std::endl;
                        P.HP = P.HP + 5;
                        std::cout << "Your HP has gone up to " << P.HP << std::endl;
                        if (P.lvl == 16)
                        {
                            std::cout << "Your pokemon is evolving!!" << std::endl;
                            std::cout << P.pokemon << " has evolved into a ";

                            switch (pokemon)
                            {
                            case 'b':
                            {
                                P.pokemon = "Ivysaur";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 'c':
                            {
                                P.pokemon = "Charmeleon";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 's':
                            {
                                P.pokemon = "Wartortle";
                                P.HP = P.HP + 10;
                                break;
                            }
                            }

                            std::cout << P.pokemon << std::endl;
                        }

                        if (P.lvl == 36)
                        {
                            std::cout << "Your pokemon is evolving!!" << std::endl;
                            std::cout << P.pokemon << " has evolved into a ";

                            switch (pokemon)
                            {
                            case 'b':
                            {
                                P.pokemon = "Venusaur";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 'c':
                            {
                                P.pokemon = "Charizard";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 's':
                            {
                                P.pokemon = "Blastoise";
                                P.HP = P.HP + 10;
                                break;
                            }
                            }

                            std::cout << P.pokemon << std::endl;
                        }

                    } while (P.exp >= 12 * P.lvl);
                }
            }

            if (Battle == 2)
            {

                std::mt19937 gen1(time(0));
                std::uniform_int_distribution<> wild(0, 2);
                int wildPokemon = wild(gen);

                switch (wildPokemon)
                {
                case 0:
                {
                    Pid.pokemon = "Butterfree";
                    Pid.Move1 = "gust";
                    Pid.Power1 = 2;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 2;
                    Pid.Move4 = "_";
                    Pid.Power4 = 2;
                    Pid.lvl = P.lvl - 2;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 5;

                    break;
                }

                case 1:
                {
                    Pid.pokemon = "Abra";
                    Pid.Move1 = "Confusion ";
                    Pid.Power1 = 1;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 3;
                    Pid.Move4 = "_";
                    Pid.Power4 = 0;
                    Pid.lvl = P.lvl - 1;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 6;

                    break;
                }
                case 2:
                {
                    Pid.pokemon = "Vulpix";
                    Pid.Move1 = "bite";
                    Pid.Power1 = 2;
                    Pid.Move2 = "_";
                    Pid.Power2 = 3;
                    Pid.Move3 = "_";
                    Pid.Power3 = 3;
                    Pid.Move4 = "_";
                    Pid.Power4 = 2;
                    Pid.lvl = P.lvl;
                    Pid.exp = Pid.lvl * 10;
                    Pid.HP = 20 + Pid.lvl * 4;

                    break;
                }
                }

                std::cout << "You have come across a wild pokemon!!" << std::endl;
                std::cout << "It is a lvl " << Pid.lvl << " " << Pid.pokemon << std::endl;
                std::cout << "What move would you like " << P.pokemon << " to use? " << std::endl;

                do
                {

                    std::cout << P.Move1 << " (1)" << std::endl;
                    std::cout << P.Move2 << " (2)" << std::endl;
                    std::cout << P.Move3 << " (3)" << std::endl;
                    std::cout << P.Move4 << " (4)" << std::endl;
                    std::cin >> Move;

                    std::cout << "Go " << P.pokemon << " use ";
                    switch (Move)
                    {
                    case 1:
                        std::cout << P.Move1 << std::endl;
                        damage = P.Power1;
                        break;

                    case 2:
                        std::cout << P.Move2 << std::endl;
                        damage = P.Power2;
                        break;

                    case 3:
                        std::cout << P.Move3 << std::endl;
                        damage = P.Power3;
                        break;

                    case 4:
                        std::cout << P.Move4 << std::endl;
                        damage = P.Power4;
                        break;
                    }
                    Pid.HP = Pid.HP - damage * 1.5 * P.lvl;

                    if (Pid.HP > 0)
                    {
                        std::cout << Pid.pokemon << " used " << Pid.Move1 << std::endl;
                        P.HP = P.HP - Pid.lvl * Pid.Power1;
                        std::cout << "Your HP is " << P.HP << std::endl;
                        if (P.HP < 1)
                        {
                            std::cout << "Your Pokemon has fainted and you were caught by team rocket.. " << std::endl;
                            std::cout << "Better luck next time .. " << std::endl;
                            std::cout << "Bye!";
                            direction = 'x';
                        }
                    }

                } while (Pid.HP > 0 && P.HP > 0);

                if (Pid.HP < 1)
                {
                    std::cout << Pid.pokemon << " fainted" << std::endl;
                    std::cout << P.pokemon << " gained " << Pid.exp << " exp" << std::endl;
                    P.exp = P.exp + Pid.exp;
                }

                if (P.exp >= 12 * P.lvl)
                {
                    do
                    {
                        P.exp = P.exp - 12 * P.lvl;
                        P.lvl = P.lvl + 1;
                        std::cout << P.pokemon << " has gone up to lvl " << P.lvl << std::endl;
                        P.HP = P.HP + 5;
                        std::cout << "Your HP has gone up to " << P.HP << std::endl;
                        if (P.lvl == 16)
                        {
                            std::cout << "Your pokemon is evolving!!" << std::endl;
                            std::cout << P.pokemon << " has evolved into a ";

                            switch (pokemon)
                            {
                            case 'b':
                            {
                                P.pokemon = "Ivysaur";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 'c':
                            {
                                P.pokemon = "Charmeleon";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 's':
                            {
                                P.pokemon = "Wartortle";
                                P.HP = P.HP + 10;
                                break;
                            }
                            }

                            std::cout << P.pokemon << std::endl;
                        }

                        if (P.lvl == 36)
                        {
                            std::cout << "Your pokemon is evolving!!" << std::endl;
                            std::cout << P.pokemon << " has evolved into a ";

                            switch (pokemon)
                            {
                            case 'b':
                            {
                                P.pokemon = "Venusaur";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 'c':
                            {
                                P.pokemon = "Charizard";
                                P.HP = P.HP + 10;
                                break;
                            }
                            case 's':
                            {
                                P.pokemon = "Blastoise";
                                P.HP = P.HP + 10;
                                break;
                            }
                            }

                            std::cout << P.pokemon << std::endl;
                        }

                    } while (P.exp >= 12 * P.lvl);
                }
            }

        } while (direction != 'x');
    }

    return (0);
}