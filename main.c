#include <stdio.h>

int factorial(int a)
{
    int i;
    int res=1;
    for(i=0;i<a;i++)
    {
        res = res * (i+1);
    }

}



int combination(int n, int r)
{
    int up, down;
    up=factorial(n);
    down=factorial(n-r)*factorial(r);
    return (up/down);
}
int main(void);
    int result;
    int n, r;

    //입력 받기
    //n 입력 문구 찍기
    printf("input n :");
    //scanf n
    scanf("%i", &n);

    //r 입력문구 찍기
    printf("input r :");
    //scanf r
    scanf("%i", &r);

    //combination 계산
    result =ombination(n, r);

    //결과 출력
    printf("The combination result is %i\n", result);
    return 0;
}