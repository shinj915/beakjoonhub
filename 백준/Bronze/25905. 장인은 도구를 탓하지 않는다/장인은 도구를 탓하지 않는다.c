#include <stdio.h>

void quick_sort(double *arr, int start, int end)
{
    if (start >= end)
        return;
    
    int pivot = start;    // 피봇은 첫 번째 원소
    int i = pivot + 1;    // i는 피봇 다음 원소
    int j = end;          // j는 마지막 원소
    double temp;
    
    while (i <= j)
    {
        // 피봇보다 큰 값을 만날 때까지
        while (i <= end && arr[i] <= arr[pivot])
            ++i;
        
        // 피봇보다 작은 값을 만날 때까지
        while (j > start && arr[j] >= arr[pivot])
            --j;
        
        // i와 j가 엇갈리면 종료
        if (i >= j)
            break;
        
        // 두 원소 교환
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    // 피봇 위치에 값 정렬
    temp = arr[j];
    arr[j] = arr[pivot];
    arr[pivot] = temp;
    
    // 피봇을 기준으로 왼쪽과 오른쪽 부분을 분할
    quick_sort(arr, start, j - 1);
    quick_sort(arr, j + 1, end);
}

int main()
{
    int x = 1;
    double success = 1;
    double p_i[10];
    for (int i = 0; i < 10; i++)
        scanf("%lf", &p_i[i]);
    
    quick_sort(p_i, 0, 9);
    
    for (int i = 9; i > 0; i--, x++)
        success *= p_i[i] / x;
    printf("%lf", success*1000000000);

    return 0;
}
