#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// 파라미터로 주어지는 문자열은 const로 주어집니다. 변경하려면 문자열을 복사해서 사용하세요.
char* solution(const char* phone_number) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    char* answer;
    int l;
    for (l = 0; l < 20; l++)
    {
        if (phone_number[l] == '\0')
            break;
    }
    answer = (char*)malloc(sizeof(char) * (l + 1));
    for (int i = 0; i < l; i++)
    {
        if (i < l - 4)
            answer[i] = '*';
        else
            answer[i] = phone_number[i];
    }
    answer[l] = '\0';
    return answer;
}
