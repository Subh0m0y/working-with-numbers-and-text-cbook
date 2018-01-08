#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <limits.h>

#define LEN "20"

int main()
{
    // The standard types - signed
    printf("\n\n| %-9s | Bytes | %"LEN"s | %"LEN"s |\n\n",
           "Type", "Minimum", "Maximum");
    printf("| char      | %d     | %"LEN"hhd | %"LEN"hhd |\n",
           (int) sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("| short     | %d     | %"LEN"hd | %"LEN"hd |\n",
           (int) sizeof(short), SHRT_MIN, SHRT_MAX);
    printf("| int       | %d     | %"LEN"d | %"LEN"d |\n",
           (int) sizeof(int), INT_MIN, INT_MAX);
    printf("| long      | %d     | %"LEN"ld | %"LEN"ld |\n",
           (int) sizeof(long), LONG_MIN, LONG_MAX);
    printf("| long long | %d     | %"LEN"lld | %"LEN"lld |\n",
           (int) sizeof(long long), LLONG_MIN, LLONG_MAX);
    
    // The standard types - unsigned
    printf("\n\n| %-18s | Bytes | %"LEN"s |\n\n",
           "Type", "Maximum");
    printf("| unsigned char      | %d     | %"LEN"hhu |\n",
           (int) sizeof(unsigned char), UCHAR_MAX);
    printf("| unsigned short     | %d     | %"LEN"hu |\n",
           (int) sizeof(unsigned short), USHRT_MAX);
    printf("| unsigned int       | %d     | %"LEN"u |\n",
           (int) sizeof(unsigned int), UINT_MAX);
    printf("| unsigned long      | %d     | %"LEN"lu |\n",
           (int) sizeof(unsigned long), ULONG_MAX);
    printf("| unsigned long long | %d     | %"LEN"llu |\n",
           (int) sizeof(unsigned long long), ULLONG_MAX);

    // The fixed-width types signed and unsigned
    printf("\n\n| Width  | %"LEN"s | %"LEN"s |\n\n",
           "Signed Max", "Unsigned Max");
    printf("|  8 bit | %"LEN PRId8 " | %"LEN PRIu8 " |\n",
           INT8_MAX, UINT8_MAX);
    printf("| 16 bit | %"LEN PRId16" | %"LEN PRIu16" |\n",
           INT16_MAX, UINT16_MAX);
    printf("| 32 bit | %"LEN PRId32" | %"LEN PRIu32" |\n",
           INT32_MAX, UINT32_MAX);
    printf("| 64 bit | %"LEN PRId64" | %"LEN PRIu64" |\n",
           INT64_MAX, UINT64_MAX);
    return EXIT_SUCCESS;
}