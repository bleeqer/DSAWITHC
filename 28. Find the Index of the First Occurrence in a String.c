#include <string.h>

int strStr(char* haystack, char* needle) 
{
    // haystack에서 needle의 시작 위치를 찾음
    char* ptr = strstr(haystack, needle);
    // needle이 없으면 -1 반환, 있으면 시작 위치 반환
    return ptr == NULL ? -1 : ptr - haystack;
}
