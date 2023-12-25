#include <unistd.h>

ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_print_comb2(void)
{
    char    u;
    char    d;
    char    u2;
    char    d2;

    u = '1';
    d = '0';
    u2 = '0';
    d2 = '0';
    while(d2 <= '9')
    {
        while(u2 <= '8')
        {
            while(d <= '9')
            {
                while(u <= '9')
                {
                    ft_putchar(d2);
                    ft_putchar(u2);
                    ft_putchar(' ');
                    ft_putchar(d);
                    ft_putchar(u);
                    ft_putchar(',');
                    u++;
                }
                d++;
                u = '0';
            }
            u2++;
            d = '0';
            u = u2 + 1;
        }
        d2++;
        u2 = 0;
    }
}

int main()
{
    ft_print_comb2();
    return 0;
}
