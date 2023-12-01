#include <stdio.h>


struct 도시
{
    char name[50];
    char country[50];
    int population;
};

int main()
{
    
    struct 도시 도시들[3];

    
    printf("세 도시에 대한 정보를 입력하세요:\n"); 
    for (int i = 0; i < 3; ++i)
    {
        printf("name> ");
        scanf_s("%s", 도시들[i].name);

        printf("country> ");
        scanf_s("%s", 도시들[i].country);

        printf("population> ");
        scanf_s("%d", &도시들[i].population);
    }

    
    printf("\nprinting the three cities:\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d. %s은(는) %s에 위치하며, 인구는 %d명입니다.\n", i + 1, 도시들[i].name, 도시들[i].country, 도시들[i].population);
    }

    return 0;
}
