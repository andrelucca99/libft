/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alucas-e <alucas-e@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 11:26:42 by alucas-e          #+#    #+#             */
/*   Updated: 2024/10/25 11:26:56 by alucas-e         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t word_len(char const *s, char c)
{
  size_t len;

  len = 0;
  while (s[len] && s[len] != c)
    len++;
  return (len);
}

char *get_word(char const *s, char c)
{
  char *str;
  size_t len;
  size_t i;

  len = word_len(s, c);
  str = (char *)malloc((len + 1) * sizeof(char));
  if (!str)
    return (NULL);
  i = 0;
  while (i < len)
  {
    str[i] = *s;
    s++;
    i++;
  }
  str[i] = '\0';
  return (str);
}

size_t word_count(char const *s, char c)
{
  size_t cont;

  cont = 0;
  while (*s != '\0')
  {
    if (*s == c)
      s++;
    else
    {
      while (*s != c)
        s++;
      cont++;
    }
  }
  return (cont);
}

char **ft_split(char const *s, char c)
{
  size_t i;
  size_t len;
  char **arr;

  len = word_count(s, c);
  arr = (char **)malloc((len + 1) * sizeof(char));
  if (!arr)
    return (NULL);
  i = 0;
  while (*s != '\0' || i < len)
  {
    if (*s != c)
    {
      arr[i] = get_word(s, c);
      i++;
    }
    while (*s && *s != c)
      s++;
    s++;
  }
  arr[i] = NULL;
  return (arr);
}
