#include <unistd.h>
#include <stdio.h>//printf
#include <stdlib.h>//size_t
#include <stdarg.h>//va_arg..

int	ft_printf(const char *format, ...);
int	ft_put_char(char c);
int	ft_put_str(char *s);
int	ft_put_nbr(int n);
int	ft_put_unsignednbr(unsigned int un);
