// A game about a dog that collects food
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <termios.h>
#include <unistd.h>

int main()
{
    char field[10][21] = {0};
    short x_dog = 8, y_dog = 5;
    short ox, oy;
    short x_bone = 3, y_bone = 3;
    char key;
    
    do{
    // Create a field    
    sprintf(field[0], "####################");
    for (int i = 1; i < 9; i++){
        sprintf(field[i], "#                  #");
    }       
    sprintf(field[9], "####################");
    
    //Create a dog
    field[x_dog][y_dog] = '@';
    //Create a bone
    field[x_bone][y_bone] = '*';

    system("clear");
    for(int i = 0; i < 10; i++)
    {
        printf("%s\n",field[i]);
    }

    // Keyboard control
    key = getchar();

    ox = x_dog;
    oy = y_dog;
    if (key == 'w') x_dog--;
    if (key == 's') x_dog++;
    if (key == 'a') y_dog--;
    if (key == 'd') y_dog++;
    if (field[x_dog][y_dog] == '#')
    {
        x_dog = ox;
        y_dog = oy;
    }
    

    }while(key != 'e');
    

    return 0;
}  