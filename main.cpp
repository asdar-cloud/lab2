#include "string_utils.h"

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");

    const int StrLen = 250;
    wchar_t* str = new wchar_t[StrLen];
    printf("Input string: ");
    std::wcin.getline(str, StrLen);
// PART 1
    printf("\nPART 1:\nThe first index of the character with the highest code from the beginning: %d\n\n", indxDet(str));
// PART 2
    printf("PART 2:\nThe number of the first word in order beginning with a vowel: %d\n\n", wordDet(str));
// PART 3
    printf("PART 3:\nThe number of occurrences in a string is determined by the combination of characters \"consonant letter-separator-consonant letter\": %d\n\n", comb(str));

}  