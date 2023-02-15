// A game about a dog that collects food
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int main()
{
    char field[10][21] = {0};
    int x_dog = 8, y_dog = 5;
    char key;
    
    sprintf(field[0], "####################");
    for (int i = 1; i < 9; i++){
        sprintf(field[i], "#                  #");
    }       
    sprintf(field[9], "####################");

    field[x_dog][y_dog] = '@';

    for(int i = 0; i < 10; i++)
    {
        printf("%s\n",field[i]);
    }

    key = getchar();

    if (key == 'w') y_dog--;
    if (key == 's') y_dog++;
    if (key == 'a') x_dog--;
    if (key == 'd') x_dog++;
    

    return 0;
}

/*
for (int i = 0; i < 10; i++)
    {
        for (int k = 0; k < 21; k++)
        {
            field[i][k] = '#';
            printf("%c", field[i][k]);
        }
        
    }
 */   