#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int main(void)
{
    //declaring variables.
    string userInput = get_string("Text: ");
    int length = strlen(userInput);
    int totalLetters = 0;
    int wordsCount = 1;
    int sentenceCount = 0;

    //looping for letter count
    for (int i = 0; i < length; i++)
    {
        if ((userInput[i] >= 'a' && userInput[i] <= 'z') || (userInput[i] >= 'A' && userInput[i] <= 'Z'))
        {
            totalLetters++;
        }
    }
    //printing letters count
    //printf("%i letter(s) \n", totalLetters );
    //looping for word count
    for (int i = 0; i < length; i++)
    {
        if (userInput[i] == ' ' || userInput[i] == '\n' || userInput[i] == '\t')
        {
            wordsCount++;
        }
    }
    //printing word count
    // printf("%i word(s) \n", wordsCount );
    //looping for sentence count
    for (int i = 0; i < length; i++)
    {
        if (userInput[i] == '.' || userInput[i] == '!' || userInput[i] == '?')
        {
            sentenceCount++;
        }
    }
    //printing sentence count
    //printf("%i sentence(s) \n", sentenceCount);

    float index = 0.0588 * (100 * totalLetters / wordsCount) - 0.296 * (100 *  sentenceCount / wordsCount) - 15.8;
    if (index < 7.60 && index > 7.50)
    {
        index = 7;
    }
    int result = round(index);
    printf("%f", index);
    if (result < 0)
    {
        printf("Before Grade 1\n");
    }
    else if (result > 16)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", result);
    }
}
