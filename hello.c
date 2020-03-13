//Craig Qi
// 3/11/2020
// Old Friends: Hello

#include <cs50.h>
#include <stdio.h>
// Greets a user by their name
int main(int argc, string argv[])
{
    string name = argv[1];
    if (argc != 2)
    {
        printf("Usage: ./hello <name>\n");
        return 1;
    }
    printf("Hello, %s!\n", name);
}
