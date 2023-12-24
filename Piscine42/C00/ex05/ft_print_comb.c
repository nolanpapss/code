#include <unistd.h>

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb(void)
{
    int a;
    int b;
    int c;

    a = '0';
    b = '1';
    c = '2';
    while(a <= '9')
    {
        while(b <= '9')
        {
            while(c <= '9')
            {
                ft_putchar(a);
                ft_putchar(b);
                ft_putchar(c);
                ft_putchar(' ');
                c++;
            }
            b++;
            c = b + 1;
        }
        a++;
        b = a;
    }
}

int main(void)
{
    ft_print_comb();
    return 0;
}