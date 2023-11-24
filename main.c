#include <limits.h>
#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len;
	int len2;
    unsigned int ui;
    void *addr;
    int len_printf;
    int len_my_printf;
    char *nule = NULL;
    char char_nule = '\0';

	len = _printf("Let's try to printf a %s simple sentence.\n", "coucou");
	len2 = printf("Let's try to printf a %s simple sentence.\n", "coucou");
    ui = (unsigned int)INT_MAX + 1024;
    addr = (void *)0x7ffe6375;
    _printf("Length:[%d, %i]\n", len, len);
    printf("Length:[%d, %i]\n", len2, len2);
    _printf("Negative:[%d]\n", -762534);
    printf("Negative:[%d]\n", -762534);
    _printf("Unsigned:[%u]\n", ui);
    printf("Unsigned:[%u]\n", ui);
    _printf("Unsigned octal:[%o]\n", ui);
    printf("Unsigned octal:[%o]\n", ui);
    _printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
    _printf("Character:[%c]\n", 'H');
    printf("Character:[%c]\n", 'H');
    _printf("String:[%s]\n", "I am a string !");
    printf("String:[%s]\n", "I am a string !");
    _printf("Address:[%p]\n", addr);
    printf("Address:[%p]\n", addr);
    len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");
    _printf("Len:[%d]\n", len);
    printf("Len:[%d]\n", len2);
    _printf("Unknown:[%r]\n");
    printf("Unknown:[%r]\n");

    printf("\n\n/*-------------percentage test------------*/\n\n");
    /*-------------percentage test------------*/

    len_printf = printf("Percent:[%%]\n");
    len_my_printf = _printf("Percent:[%%]\n");

    printf("printf taille: %d\n", len_printf);
    printf("my_printf taille: %d\n", len_my_printf);

    /*-------------END------percentage test------------*/

    printf("\n\n/*-------------character test------------*/\n\n");
    /*-------------character test------------*/
    len_printf = printf("character:[%c]\n",'c');
    len_my_printf = _printf("character:[%c]\n",'c');

    printf("printf taille: %d\n", len_printf);
    printf("my_printf taille: %d\n", len_my_printf);

        printf("\nCharacter = /0\n");
    printf("Printf - character : %c\n",char_nule);
    _printf("My printf - character :%c\n",char_nule);

    /*-------------END------character test------------*/

    printf("\n\n/*-------------string test -----------*/\n\n");
    /*-------------string test------------*/
    len_printf = printf("string:[%s]\n","string");
    len_my_printf = _printf("string:[%s]\n","string");

    printf("printf taille: %d\n", len_printf);
    printf("my_printf taille: %d\n", len_my_printf);

    printf("\nString NULL\n");
    printf("Printf - string : %s\n",nule);
    _printf("My printf - string :%s\n",nule);

    /*-------------END------string  test------------*/

    printf("\n\n/*-------------error case -----------*/\n\n");
    
    /*------------------------ERROR CASE------------------------*/
    
    /*-------------printf("%s")-----------*/
   
    printf("\none specifier only\n");
    printf("_printf(\"%%s\");\n");
    
    printf("\nprintf :\n");
    printf("%s");
    printf("\n");
    printf("\nmy printf :\n");
    _printf("%s");
    printf("\n");


	return (0);
}
