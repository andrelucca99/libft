# Introdução ao Libft

Sua primeira biblioteca em linguagem C

<p>
<strong>Sumário:</strong> Este projeto consiste em codificar uma biblioteca em C.
Ela conterá muitas funções de uso geral das quais seus programas dependerão.
</p>

## Funções Libft

### Funções de <`ctype.h`>

<ul>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_isalpha.c">ft_isalpha</a> - verifica se há um caractere alfabético.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_isdigit.c">ft_isdigit</a> - verifica se há um dígito (0 a 9).</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_isalnum.c">ft_isalnum</a> - verifica se há um caractere alfanumérico.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_isascii.c">ft_isascii</a> - verifica se c se encaixa no conjunto de caracteres ASCII.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_isprint.c">ft_isprint</a> - verifica se há algum caractere imprimível.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_toupper.c">ft_toupper</a> - converter char para maiúsculas.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_tolower.c">ft_tolower</a> - converter char para minúsculas.</li>  
</ul>

<hr>
<br>

Funções de <`string.h`>

<ul>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_memset.c">ft_memset</a> - preencher a memória com um byte constante.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strlen.c">ft_strlen</a> - calcular o comprimento de uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_bzero.c">ft_bzero</a> - zero uma sequência de bytes.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_memcpy.c">ft_memcpy</a> - copiar área de memória.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_memmove.c">ft_memmove</a> - copiar área de memória.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strlcpy.c">ft_strlcpy</a> - copiar string para um tamanho específico.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strlcat.c">ft_strlcat</a> - concatenar string para um tamanho específico.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strchr.c">ft_strchr</a> - localizar caractere na string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strrchr.c">ft_strrchr</a> - localizar caractere na string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strncmp.c">ft_strncmp</a> - comparar duas strings.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_memchr.c">ft_memchr</a> - escanear a memória em busca de um caractere.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_memcmp.c">ft_memcmp</a> - comparar áreas de memória.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strnstr.c">ft_strnstr</a> - localizar uma substring em uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strdup.c">ft_strdup</a> - cria uma duplicata para a string passada como parâmetro.</li>  
</ul>

<hr>
<br>

Funções de <`stdlib.h`>

<ul>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_atoi.c">ft_atoi</a> - converter uma string em um inteiro.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_calloc.c">ft_calloc</a> - aloca memória e define os valores de seus bytes como 0.</li>
</ul>

<hr>
<br>

### Funções não padronizadas

<ul>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_substr.c">ft_substr</a> - retorna uma substring de uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strjoin.c">ft_strjoin</a> - concatena duas strings.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strtrim.c">ft_strtrim</a> - corta o início e o fim da string com um conjunto específico de caracteres.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_split.c">ft_split</a> - divide uma string usando um char como parâmetro.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_itoa.c">ft_itoa</a> - converte um número em uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_strmapi.c">ft_strmapi</a> - aplica uma função a cada caractere de uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_striteri.c">ft_striteri</a> - aplica uma função a cada caractere de uma string.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_putchar_fd.c">ft_putchar_fd</a> - enviar um caractere para um descritor de arquivo.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_putstr_fd.c">ft_putstr_fd</a> - envia uma string para um descritor de arquivo.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_putendl_fd.c">ft_putendl_fd</a> - envia uma string para um descritor de arquivo, seguida por uma nova linha.</li>
  <li><a href="https://github.com/andrelucca99/libft/blob/main/ft_putnbr_fd.c">ft_putnbr_fd</a> - emitir um número para um descritor de arquivo.</li>  
</ul>

<img src="./assets/banner.png" style="width:80%" alt="Capa do projeto libft">