#ifndef PRINT_H
#define PRINT_H

// The width and height of the screen measured in chars
#define CH_WIDTH 128
#define CH_HEIGHT 48

/* Prints a character and automatically wraps around */
extern void PrintCharacter(char ch);

/* Prints a string to the screen */
extern void PrintString(const char *string);

/* Prints a format string. Format Arguments are:
 * %% -> %
 * %c -> char
 * %b -> base 2 int
 * %o -> base 8 int
 * %u -> base 10 unsigned
 * %d or %i -> base 10 int
 * %x -> base 16 int
 * %p -> base 16 unsigned (for pointers)
 */
extern void PrintFormat(const char *string, ...);

extern void PrintClear(void);

#endif
