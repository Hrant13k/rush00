void ft_putchar(char c);

void print_char(int x, int y, int row, int col)
{
    if (row == 0 && col == 0)
        ft_putchar('/');
    else if (row == 0 && col == x - 1)
        ft_putchar('\\');
    else if (row == y - 1 && col == 0)
        ft_putchar('\\');
    else if (row == y - 1 && col == x - 1)
        ft_putchar('/');
    else if (row == 0 || row == y - 1)
        ft_putchar('*');
    else if (col == 0 || col == x - 1)
        ft_putchar('|');
    else
        ft_putchar(' ');
}

void rush(int x, int y)
{
    int row = 0;
    int col;

    if (x <= 0 || y <= 0)
        return ;
    while (row < y)
    {
        col = 0;
        while (col < x)
        {
            print_char(x, y, row, col);
            col++;
        }
        ft_putchar('\n');
        row++;
    }
}
