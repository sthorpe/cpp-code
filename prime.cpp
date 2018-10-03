/*
    Pseudo-Random number generator
*/

#include <iostream>

using namespace std;

void lottery(int, int);

int main()
{
    // srand(time(NULL));

    // int nr = rand() % 3;

    // cout << nr << endl;

    lottery(49, 6);
    return 0;
}

void lottery(int total_balls, int balls_to_draw)
{
    if (total_balls < balls_to_draw)
        return;
    srand(time(NULL)); // Seed

    int *balls = new int[balls_to_draw];

    for (int i = 0; i < balls_to_draw; i++)
    {
        balls[i] = rand() % total_balls + 1; // [1, 49] modulus gives us the proper range

        for (int j = 0; j < i + 1; j++)
        {
            if (balls[i] == balls[j] && i != j) // Possible problem is balls[0] == balls[0] which would go forever
            {
                i--;
                break;
            }
            else if (j == i)
                cout << balls[i] << endl;
        }
    }

    delete[] balls;    
}