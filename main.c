#include <stdio.h>

int factorial(int a)
{
    int i;
    int res = 1;
    for(i = 0; i < a; i++)
    {
        res = res * (i + 1);
    }
    return res; // 1. 반환값 추가
}

int combination(int n, int r)
{
    int up, down;
    up = factorial(n);
    down = factorial(n - r) * factorial(r);
    return (up / down);
}

int main(void) // 2. 세미콜론 제거 및 중괄호 시작
{
    int result;
    int n, r;

    // 입력 받기
    // n 입력 문구 찍기
    printf("input n :");
    scanf("%i", &n);

    // r 입력문구 찍기
    printf("input r :");
    scanf("%i", &r);

    // combination 계산
    result = combination(n, r);

    // 결과 출력
    printf("The combination result is %i\n", result);
    return 0;
}