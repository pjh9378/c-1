#include <stdio.h>


struct ����
{
    char name[50];
    char country[50];
    int population;
};

int main()
{
    
    struct ���� ���õ�[3];

    
    printf("�� ���ÿ� ���� ������ �Է��ϼ���:\n"); 
    for (int i = 0; i < 3; ++i)
    {
        printf("name> ");
        scanf_s("%s", ���õ�[i].name);

        printf("country> ");
        scanf_s("%s", ���õ�[i].country);

        printf("population> ");
        scanf_s("%d", &���õ�[i].population);
    }

    
    printf("\nprinting the three cities:\n");
    for (int i = 0; i < 3; ++i)
    {
        printf("%d. %s��(��) %s�� ��ġ�ϸ�, �α��� %d���Դϴ�.\n", i + 1, ���õ�[i].name, ���õ�[i].country, ���õ�[i].population);
    }

    return 0;
}
