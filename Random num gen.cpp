//
//  main.cpp
//  Random number generator
//
//  Created by David Perez on 10/20/23.
//

#include <iostream>
#include <ctime> 
#include <cstdlib>

using namespace std;

void door_diff (int &, int);
void character_p (int &, int);
void stat_dis (int stat[6]);
void stat_bouns (int stat[6]);
int dice_roll (int, int);

int main()
{
    int max_v = 20, min_v = 1;
    int str, dex, con, intl, wis, Chars;
    int doornum1 = 15;
    int npc1 = 20;
    const int stats_c = 6;
    int stat [stats_c];
    int playeroption;
    
    stat_dis (stat);
    
    
    while (playeroption != 1)
    {
        cout << "You come across a door and needs a 15 in order to open it, press 1 to Continue out" << endl;
        cin >> playeroption;
        dice_roll (max_v, min_v);
        stat_bouns(stat);
        cout << stat[1] << endl;
        if (stat[1] >= 15)
            cout << "You unlocked the door!" << endl;
        else
            cout <<"You do not unlock the door" << endl;
    }
    return 0;
}
void stat_dis (int stat[6])
{
    int total_points = 67;
    cout <<"You have " << total_points << " to use for your stats use them carefully." << endl;
    do
    {
        cout << "Enter how many points you would like to use for Strength" << endl;
        cin >> stat [0];
        total_points = total_points - stat[0];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Dex" << endl;
        cin >> stat [1];
        total_points = total_points - stat[1];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Con" << endl;
        cin >> stat [2];
        total_points = total_points - stat[2];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Intl " << endl;
        cin >> stat [3];
        total_points = total_points - stat[3];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Wis" << endl;
        cin >> stat [4];
        total_points = total_points - stat[4];
        cout << "You have " << total_points << " left" << endl;
        
        cout << "Enter how many points you would like to use for Chars" << endl;
        cin >> stat [5];
        total_points = total_points - stat[5];
        cout << "You have " << total_points << " left" << endl;
        
    } while (total_points > 0);
    cout << "Your stats are " << endl;
    cout << "Str " << stat [0] << endl;
    cout << "Dex " << stat [1] << endl;
    cout << "Con " << stat [2] << endl;
    cout << "Intl " << stat [3] << endl;
    cout << "Wis " << stat [4] << endl;
    cout << "Chars " << stat [5] << endl;
}
void stat_bouns (int stat[6])
{
    int max_v = 20;
    int min_v = 1;
    if (stat[0] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[0] >= 12 && stat[0] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[0] >= 8 && stat[0] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[0] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
    if (stat[1] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[1] >= 12 && stat[1] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[1] >= 8 && stat[1] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[1] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
    if (stat[2] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[2] >= 12 && stat[2] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[2] >= 8 && stat[2] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[2] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
    if (stat[3] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[3] >= 12 && stat[3] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[3] >= 8 && stat[3] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[3] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
    if (stat[4] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[4] >= 12 && stat[4] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[4] >= 8 && stat[4] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[4] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
    if (stat[5] >= 15)
    {
        dice_roll (max_v, min_v) + 2;
    }
    else if (stat[5] >= 12 && stat[5] < 15)
    {
        dice_roll (max_v, min_v) + 1;
    }
    else if (stat[5] >= 8 && stat[5] <= 11)
    {
        dice_roll (max_v, min_v);
    }
    else if (stat[5] < 8)
    {
        dice_roll (max_v, min_v) - 1;
    }
    else
        cout << "error" << endl;
}

int dice_roll (int max_V, int min_V)
{
    return rand() % (max_V - min_V + 1) + min_V;
}
