/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbehr <lbehr@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 17:07:12 by lbehr             #+#    #+#             */
/*   Updated: 2023/11/17 17:25:17 by lbehr            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>

int		ft_printf(const char *str, ...);
int		ft_printall(int num_args, const char *str, va_list args);

int		print_char(int args);
int		print_nbr(int args);
int		print_str(char *args);
int		print_hex(unsigned int args, char c);

size_t	ft_strlen(const char *s);
int		ft_putstr(char *s);
int		ft_putchar(char c);

int		ft_putnbr(int n);
int		longeurnombre(int n);
int		ft_abs(int n);
char	*ft_itoa(int n);

int		ft_putnbr_unsigned(unsigned int n, char *base);
int		longeurnombre_unsigned(unsigned int n, int base);
char	*ft_itoa_unsigned(unsigned int n, char *base);

int		print_ptr(void *args);
int		ft_putnbr_size(size_t n, char *base);
int		longeurnombre_size(size_t n, int base);
char	*ft_itoa_size(size_t n, char *base);

#endif