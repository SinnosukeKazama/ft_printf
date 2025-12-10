#include <unistd.h>
#include <stdio.h>//printf
#include <stdlib.h>//size_t
#include <stdarg.h>//va_arg..
#include <stdbool.h>
#include <stdint.h>
enum	e_case
{
	lower,
	upper
};

int	ft_printf(const char *format, ...);
int	ft_put_char(char c);
int	ft_put_str(char *s);
int	ft_put_nbr(int n);
int	ft_put_unsignednbr(unsigned int un);
int	ft_put_hexadecimal(unsigned int un, bool letter_case);
int	ft_put_ptr(void *ptr);

unsigned int	ft_abs(const int n);
int	count_digit(const int n, const unsigned int n_base);
int	count_digit_unsigned(unsigned un, const unsigned int n_base);

