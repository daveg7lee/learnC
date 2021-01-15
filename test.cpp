#include <cstdio>;
int add_number(int a, int b);
int get_first_number();

int get_first_number()
{
    int a;
    printf("Put the first number: ");
    scanf("%d", &a);
    fflush(stdin);
    return a;
}

int get_second_number()
{
    int b;
    printf("Put the second number: ");
    scanf("%d", &b);
    fflush(stdin);
    return b;
}

int main()
{
    int a = get_first_number();
    int b = get_second_number();
    int result = add_number(a, b);
    printf("The answer is: %d\n", result);
    return 0;
}

int add_number(int a, int b)
{
    return a + b;
}