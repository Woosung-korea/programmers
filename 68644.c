#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

// numbers_len은 배열 numbers의 길이입니다.
int* solution(int numbers[], size_t numbers_len) {
    // return 값은 malloc 등 동적 할당을 사용해주세요. 할당 길이는 상황에 맞게 변경해주세요.
    int* answer;
    int chkList[201] = {0, };
    int cnt = 0;
    int aIdx = 0;
    for(int i = 0; i < numbers_len - 1; i++)
    {
        for(int j = i + 1; j < numbers_len; j++)
        {
            chkList[numbers[i] + numbers[j]] = 1;
        }
    }
    for(int i = 0; i < 201; i++)
    {
        if (chkList[i])
            cnt++;
    }
    answer = (int*)malloc(sizeof(int) * cnt);
    for(int i = 0; i < 201; i++)
    {
        if (chkList[i])
        {
            answer[aIdx] = i;
            aIdx++;
        }
    }
    return answer;
}
