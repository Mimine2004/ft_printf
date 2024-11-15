/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hhecquet <hhecquet@student.42perpignan.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 09:00:37 by hhecquet          #+#    #+#             */
/*   Updated: 2024/11/15 12:00:28 by hhecquet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

/********************************************/
/*   __ _                  _       _    __  */
/*  / _| |                (_)     | |  / _| */
/* | |_| |_     _ __  _ __ _ _ __ | |_| |_  */
/* |  _| __|   | '_ \| '__| | '_ \| __|  _| */
/* | | | |_    | |_) | |  | | | | | |_| |   */
/* |_|  \__|   | .__/|_|  |_|_| |_|\__|_|   */
/*       ______| |                          */
/*      |______|_|                          */
/********************************************/
int		ft_printf(const char *format, ...);
/****************************************************/
/*  _               _      _              _       _ */
/* | |             (_)    | |            | |     | |*/
/* | |__   __ _ ___ _  ___| |_ ___   ___ | |___  | |*/
/* | '_ \ / _` / __| |/ __| __/ _ \ / _ \| / __| | |*/
/* | |_) | (_| \__ \ | (__| || (_) | (_) | \__ \ |_|*/
/* |_.__/ \__,_|___/_|\___|\__\___/ \___/|_|___/ (_)*/
/*                                                  */
/****************************************************/
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_putstr(char *s);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
/************************************************/
/*                 _ _              _       _ _ */
/*                | | |            | |     | | |*/
/*  _ __ ___  __ _| | |_ ___   ___ | |___  | | |*/
/* | '__/ _ \/ _` | | __/ _ \ / _ \| / __| | | |*/
/* | | |  __/ (_| | | || (_) | (_) | \__ \ |_|_|*/
/* |_|  \___|\__,_|_|\__\___/ \___/|_|___/ (_|_)*/
/*                                              */
/************************************************/
int		ft_putnbr_flag(long nb, char *flag, int size_flag, int is_unsigned);
int		ft_putstr_flag(char *str, char *flag, int size_flag);
int		ft_putahex(char *str, char format, char *flag, int size_flag);
int		ft_putchar_flag(char c, int size_flag, char format);

#endif
/***************************************************/
/*  _   _                 _                        */
/* | | | |               | |                       */
/* | |_| |__   __ _ _ __ | | __  _   _  ___  _   _ */
/* | __| '_ \ / _` | '_ \| |/ / | | | |/ _ \| | | |*/
/* | |_| | | | (_| | | | |   <  | |_| | (_) | |_| |*/
/*  \__|_| |_|\__,_|_| |_|_|\_\  \__, |\___/ \__,_|*/
/*                                __/ |            */
/*                               |___/             */
/***************************************************/