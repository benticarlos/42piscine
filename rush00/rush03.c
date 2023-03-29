#include <unistd.h>
	
int full(int x);
int middle(int x);

void ft_putchar(int x, int y)
{
    int j;
    
	j = 1;
    if (x > 0 && y > 0)
    {
		while(j <= y)
		{
			if(j == 1 || j == y)
			{	
				full(x);
			}
			else
			{
				middle(x);
			}
			j++;
		}

		write(1, "\n", 1);
    }
    
    
}

int	full(int x)
{
	int i;

	i = 1;
	while (i <= x)
        {
				if (i == 1)
				{
            		write(1, "A", 1);
				} 
				else if (i == x )
				{
					write(1, "C", 1);
				}
				else 	
				{
					write(1, "B", 1);
				}
            i++;
		}
		write(1, "\n", 1);
	return 0;
}

int middle(int x)
{

	int i;

	i = 1;
	while (i <= x)
        {
				if (i == 1)
				{
            		write(1, "B", 1);
				} 
				else if (i == x )
				{
					write(1, "B", 1);
				}
				else 	
				{
					write(1, " ", 1);
				}
            i++;
		}
		write(1, "\n", 1);
	return 0;
}

int main(void)
{
    ft_putchar(10,5);
		write(1, "\n", 1);
    ft_putchar(100,5);
		write(1, "\n", 1);
    ft_putchar(10,25);
		write(1, "\n", 1);
    return 0;
}
