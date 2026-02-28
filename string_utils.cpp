#include "string_utils.h"

int indxDet(wchar_t* str)
{
    int max{str[0]}, indx{0};
    for (int i{1}; str[i] != '\0'; i++)
    {
        if ((int)str[i] > max)
        {
            max = (int)str[i];
            indx = i;
        }
    }
    return indx;
}

int wordDet(wchar_t* str)
{
    int words{1};
    const char* vow = "AEIOUYaiouy";
    for (int i{0}; str[i] != '\0'; i++)
    {
        if (i == 0 || str[i-1] == ' ')
        {
            if (isInString(str[i], vow))
            {
                return words;
            }
        }
        switch (str[i])
        {
            case ' ': case '-': case '.': case ',': case '!': case '?': words++; break;
        }
    }
    return 0;
}

int comb(wchar_t* str)
{ 
    const char* conson = "BCDFGHJKLMNPQRSTVWXYZbcdfghjklmnpqrstvwxyz";
    int counter{0};
    for (int i{0}; str[i] != '\0'; i++)
    {
        switch (str[i])
        {
            case ' ': case '-': case '.': case ',': case '!': case '?':
            if (isInString(str[i - 1], conson) && isInString(str[i + 1], conson))
            {
                counter++;
            }
            break;
        }
    }
    return counter;
}

bool isInString(char c, const char* str)
{
    for (int i{0}; str[i] != '\0'; i++)
    {
        if (c == str[i])
        {
            return true;
        }
    }
    return false;
}