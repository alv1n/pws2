#include "stdint.h"
#include "keyboard.h"
//

unsigned char modifiers;
unsigned char keys[6];
int modified;

unsigned char keys_old[6];


static const uint8_t KeysNormal[104] = 
{
     0x0, 0x0, 0x0, 0x0, 'a', 'b', 'c', 'd',
     'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l',
     'm', 'n', 'o', 'p', 'q', 'r', 's', 't',
     'u', 'v', 'w', 'x', 'y', 'z', '1', '2',
     '3', '4', '5', '6', '7', '8', '9', '0',
     '\n', 0x0, '\b', '\t', ' ', '-', '=', '[',
     ']', '\\', '#', ';', '\'', '`', ',', '.',
     '/', 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, '/', '*', '-', '+',
     '\n', '1', '2', '3', '4', '5', '6', '7',
     '8', '9', '0', '.', '\\', 0x0, 0x0, '='
};

static const uint8_t KeysShift[104] = 
{
     0x0, 0x0, 0x0, 0x0, 'A', 'B', 'C', 'D',
     'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L',
     'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T',
     'U', 'V', 'W', 'X', 'Y', 'Z', '!', '"',
     '$', '$', '%', '^', '&', '*', '(', ')',
     '\n', 0x0, '\b', '\t', ' ', '_', '+', '{',
     '}', '|', '~', ':', '@', 'X', '<', '>',
     '?', 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0,
     0x0, 0x0, 0x0, 0x0, '/', '*', '-', '+',
     '\n', '1', '2', '3', '4', '5', '6', '7',
     '8', '9', '0', '.', '|', 0x0, 0x0, '='
};
int x = 0;
int y = 16;
void func(const unsigned char *pString)
{
        DrawStringz(pString,x,y);
        x+=8;
        if(x>1024)
        {
            x=0;
            y+=16;
        }
}
