/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ndick <ndick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 22:39:46 by ndick             #+#    #+#             */
/*   Updated: 2022/11/24 22:42:46 by ndick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRINTF_H
# define PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

# define SPECIFIERS "cspdiuxX%"
# define FLAGS "-0.*"
# define BASES "0123456789abcdef"
# define BASES_CAPS "0123456789ABCDEF" 

int	ft_printf(const char *format, ...);

#endif