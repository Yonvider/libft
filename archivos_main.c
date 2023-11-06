#include <stdio.h>
//--Isalpha



int main(void)
{
    char leter = 'a';
    if (ft_isalpha(leter))
    	printf("%c, Si es letra\n", leter);
    else
    	printf("%c, No es letra\n", leter);
	return (0);
}
//--isdigit



int main(void)
{
	char num = '2';
	if (ft_isdigit(num))
		printf("%c, Es un numero\n", num);
	else
		printf("%c, No es un numero\n", num);
	return (0);
}
//--isalnum



int main(void)
{
    char letnum = '2';
    if (ft_isalnum(letnum))
    	printf("%d, Si es letra o numero\n", letnum);
    else
    	printf("%d, No es letra o numero\n", letnum);
    return (0);
}
//--isascii



int main(void)
{
    char ch = 'A';
    if (ft_isascii(ch))
        printf("%c, Es un caracter ASCII valido\n", ch);
    else
        printf("%c, No es un caracter ASCII valido\n", ch);
	return (0);
}
//--isprint



int main(void)
{
	char ch = 'A';
	if (ft_isprint(ch))
		printf("%c, Es un caracter imprimible\n", ch);
	else
		printf("%c, No es un caracter imprimible\n", ch);
	return (0);
}
//--strlen



int main(void)
{
    const char *str = "Hola";
    int longitud = ft_strlen(str);
    printf("Su tamaño es: %d\n", longitud);
    return (0);
}
//--memset



int main(void)
{
    char str[] = "Hola Mundo";
    ft_memset(str, 'a', 4);
    printf("%s\n", str);
    return (0);
}
//--bzero



int main(void)
{
    char str[] = "Hola Mundo";
    ft_bzero(str, 10);
    printf("%s\n", str);
    return (0);
}
memcpy



int main(void)
{
    char src[] = "Hola";
    char dest[] = "";
    ft_memcpy(dest, src, 4);
    printf("%s\n", dest);
    return (0);
}
//--memmove



int main(void)
{
    char src[] = "Hola";
    char dest[] = "Holas";
    ft_memmove(dest, src, 4);
    printf("%s\n", dest);
    return (0);
}
//--strlcpy



int main(void)
{
    char src[] = "Hola";
    char dest[] = "Holaa";
    ft_strlcpy(dest, src, 4);
    printf("%s\n", dest);
    return (0);
}
//--strlcat



int main(void)
{
    char src[] = "Hola";
    char dest[] = " Mundo";
    ft_strlcat(dest, src, 10);
    printf("%s\n", dest);
    return (0); 
}
//--toupper



int main(void)
{
    char c = 'b';
    printf("%c\n", ft_toupper(c));
    return (0);
}
//--tolower



int main(void)
{
    char c = 'B';
    printf("%c\n", ft_tolower(c));
    return (0);    
}
//--strchr



int main(void)
{
    char s[] = "Los macarrones son ricos";
    char c = 'son';
    char *result = ft_strchr(s, c);

    if (result != NULL)
        printf("Carácter encontrado: %c\n", *result);
    else
        printf("Carácter no encontrado\n");

    return 0;
}
//--strrchr
int main() {
    const char *str = "Hola, mundo!";
    char character = 'o';
    char *result = ft_strrchr(str, character);
    if (result != NULL) {
        printf("Última ocurrencia de '%c' encontrada en la posición: %ld\n", character, result - str);
    } else {
        printf("Carácter '%c' no encontrado en la cadena.\n", character);
    }
    return 0;
}
//--strncmp



int main(void)
{
    char s1[] = "Hola";
    char s2[] = "Hola";
    size_t n = 4;
    ft_strncmp(s1, s2, n);
    printf("%d\n", ft_strncmp(s1, s2, n));
    return (0);    
}
//--memchr



int main(void)
{
    char s[] = "Hola";
    char c = 'o';
    size_t n = 4;
    void *result = ft_memchr(s, c, n);
    if (result != NULL)
    {
        printf("Carácter encontrado en la dirección de memoria: %p\n", result);
        printf("Valor del caracter encontrado '%c'\n", *(char *)result);
    }
    else
    {
        printf("Carácter no encontrado\n");
    }
    return (0);   
}
//--memcmp



int main(void)
{
    char s1[] = "Hola";
    char s2[] = "Hola";
    size_t n = 4;
    ft_memcmp(s1, s2, n);
    printf("%d\n", ft_memcmp(s1, s2, n));
    return (0);
}
//--strnstr



int main(void) 
{
    const char *big = "Soy jorge y me gustan los macarrones";
    const char *little = "los";
    size_t len = 40;
    char *result = ft_strnstr(big, little, len);
    if (result != NULL)
	{
        printf("Cadena pequeña encontrada: %s\n", result);
	}
    else
	{
        printf("Cadena pequeña no encontrada\n");
	}
    return 0;
}
//--atoi
int main (void)
{
	char str[] = "   -2147483649";
	printf("%d\n", ft_atoi(str));
	return (0);
}
//--calloc



int main(void)
{
    char *ptr;
    ptr = ft_calloc(10, sizeof(char));
    if (ptr == NULL)
    {
        printf("Error");
        return (0);
    }
    printf("El puntero es: %p\n", ptr);
    free(ptr);
    return (0);
}
//--strdup
int main() 
{
    const char *original = "Hola, mundo";
    char *copia = ft_strdup(original);
    if (copia != NULL)
	{
        printf("Copia duplicada: %s\n", copia);
        free(copia);
    } 
	else 
	{
        printf("Error al duplicar la cadena.\n");
    }
    return 0;
}
//--substr



int main(void)
{
	char *s = "Hola Gente";
	char *ptr = ft_substr(s, 0, 5);
	printf("%s\n", ptr);
	return (0);
}
//--strjoin
int main() 
{
    char str1[50] = "Hola, ";
    char str2[] = "mundo!";
    strcat(str1, str2);  // Concatenar str2 al final de str1
	{
 	   printf("Resultado: %s\n", str1); // Imprimir la cadena resultante
	}   
	return 0;
}
//--strtrim



int main(void)
{
	char *s1 = "	Hello, world!	";
	char *set = "	";
	char *trimmed = ft_strtrim(s1, set);
	printf("Original string: \"%s\"\n", s1);
	printf("Trimmed string: \"%s\"\n", trimmed);
	free(trimmed);
	return 0;
}
//--split
int main()
{
	char *str = "Hola que tal estas";
	char **str2;
	int i;

	i = 0;
	str2 = ft_split(str, ' ');
	while (str2[i])
	{
		printf("%s\n", str2[i]);
		i++;
	}
	return (0);
}
//--itoa
int main()
{
    int num1 = 12345;
    char *str1 = ft_itoa(num1);
    printf("Número: %d, Cadena: %s\n", num1, str1);
    free(str1);
    return 0;
}
//--strmapi
char	my_function(unsigned int i, char c)
{
	if (i % 2 == 0)
		return (ft_toupper(c));
	else
		return (ft_tolower(c));
}

int	main(void)
{
	char	*str = "Hello, World!";
	char	*new_str = ft_strmapi(str, &my_function);
	printf("Original string: %s\n", str);
	printf("New string: %s\n", new_str);
	free(new_str);
	return (0);
}
//--striteri
int main() 
{
    char cadena[] = "abcde"; 

    printf("Cadena original: %s\n", cadena);

    
    ft_striteri(cadena, agregar_uno);

    printf("Cadena modificada: %s\n", cadena);

    return 0;
}
//--putchar_fd
int main() 
{
    char caracter = 'A'; 
    int descriptor_archivo = 1;
    ft_putchar_fd(caracter, descriptor_archivo);
    return 0;
}
//--putstr_fd



int main(void)
{
	char *cadena = "Hola mundo";
	int descriptor_archivo = 1;
	ft_putstr_fd(cadena, descriptor_archivo);
	return 0;
}
//--putendl_fd



int main(void)
{
	char *cadena = "Hola mundo";
	int descriptor_archivo = 1;
	ft_putendl_fd(cadena, descriptor_archivo);
	return 0;
}
//--putnbr_fd
int main() {
    int number = -12345;
    ft_putnbr_fd(number, 1);
    return 0;
}
//--lstnew
int main() 
{
    t_list *newNodo = ft_lstnew("Hola, Gente!");
	
    if (newNodo) 
	{
        printf("Contenido del nuevo nodo: %s\n", (char *)newNodo->content);
        free(newNodo);
	} 
	else 
	{
        printf("Error: No se pudo crear el nuevo nodo.\n");
    }
    return 0;
}
//--lstadd_front
int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("Hola", 6);
	new = ft_lstnew("Mundo", 6);
	ft_lstadd_front(&lst, new);
	printf("%s\n", lst->content);
	printf("%s\n", lst->next->content);
	return (0);
}
//--lstsize
int main() {
    t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
    nodo1->content = "Nodo 1";
    nodo1->next = NULL;

    t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
    nodo2->content = "Nodo 2";
    nodo2->next = NULL;

    t_list *nodo3 = (t_list *)malloc(sizeof(t_list));
    nodo3->content = "Nodo 3";
    nodo3->next = NULL;

    nodo1->next = nodo2;
    nodo2->next = nodo3;

    int tamaño = ft_lstsize(nodo1);

    printf("Tamaño de la lista: %d\n", tamaño);

    free(nodo1);
    free(nodo2);
    free(nodo3);

    return 0;
}
//--lstlast
int main() 
{
    t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
    nodo1->content = "Nodo 1";
    nodo1->next = NULL;

    t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
    nodo2->content = "Nodo 2";
    nodo2->next = NULL;

    t_list *nodo3 = (t_list *)malloc(sizeof(t_list));
    nodo3->content = "Nodo 3";
    nodo3->next = NULL;

    nodo1->next = nodo2;
    nodo2->next = nodo3;

    t_list *ultimoNodo = ft_lstlast(nodo1);

    if (ultimoNodo) {
        printf("Contenido del último nodo: %s\n", (char *)ultimoNodo->content);
    } else {
        printf("La lista está vacía.\n");
    }

    free(nodo1);
    free(nodo2);
    free(nodo3);

    return 0;
}
//--lstadd_back
int main() {
    t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
    nodo1->content = "Nodo 1";
    nodo1->next = NULL;

    t_list *lista = nodo1;

    printf("Lista antes de agregar el nuevo nodo:\n");
    t_list *temp = lista;
    while (temp) {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
    nodo2->content = "Nodo 2";
    nodo2->next = NULL;

    ft_lstadd_back(&lista, nodo2);

    printf("\nLista después de agregar el nuevo nodo:\n");
    temp = lista;
    while (temp) {
        printf("%s\n", (char *)temp->content);
        temp = temp->next;
    }

    free(nodo1);
    free(nodo2);

    return 0;
}
//--lstdelone
void delete(void *contenido)
{
    free(contenido);
}
int main() {
    t_list *nodoEliminar = (t_list *)malloc(sizeof(t_list));
    nodoEliminar->content = strdup("Nodo a eliminar");
    nodoEliminar->next = NULL;
	{
    	printf("Contenido del nodo antes de eliminarlo: %s\n", (char *)nodoEliminar->content);
	}
	ft_lstdelone(nodoEliminar, delete);
	{
    	printf("Nodo eliminado.\n");
	}
    return 0;
}
//--lstclear
void delete(void *contenido) 
{
    free(contenido);
}
int main() {
    t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
    nodo1->content = strdup("Nodo 1"); // 
    nodo1->next = NULL;

    t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
    nodo2->content = strdup("Nodo 2");
    nodo2->next = NULL;

    nodo1->next = nodo2;

    // Utilizar ft_lstclear para borrar la lista y liberar la memoria
    ft_lstclear(&nodo1, delete);

    // Verificar si la lista se ha borrado correctamente (debería ser NULL)
    if (nodo1 == NULL) {
        printf("La lista ha sido borrada y es NULL.\n");
    } else {
        printf("Error: La lista no se ha borrado correctamente.\n");
    }

    return 0;
}
//--lstiter
void	print_content(void *content)
{
	printf("%s\n", (char *)content);
}
int main() 
{
    t_list *nodo1 = (t_list *)malloc(sizeof(t_list));
    nodo1->content = ft_strdup("Nodo 1");
    nodo1->next = NULL;

    t_list *nodo2 = (t_list *)malloc(sizeof(t_list));
    nodo2->content = ft_strdup("Nodo 2");
    nodo2->next = NULL;

    t_list *nodo3 = (t_list *)malloc(sizeof(t_list));
    nodo3->content = ft_strdup("Nodo 3");
    nodo3->next = NULL;

    nodo1->next = nodo2;
    nodo2->next = nodo3;

    ft_lstiter(nodo1, &print_content);

    free(nodo1);
    free(nodo2);
    free(nodo3);

    return 0;
}

//--lstmap
void *add_one(void *n)
{
    int *num = (int *)n;
    int *new_num = malloc(sizeof(int));
    *new_num = *num + 1;
    return (new_num);
}

void del(void *n)
{
    free(n);
}

void print_list(t_list *lst)
{
    while (lst)
    {
        printf("%d ", *(int *)lst->content);
        lst = lst->next;
    }
    printf("\n");
}

int main()
{
    t_list *lst = ft_lstnew(malloc(sizeof(int)));
    *(int *)lst->content = 1;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)lst->next->content = 2;
    ft_lstadd_back(&lst, ft_lstnew(malloc(sizeof(int))));
    *(int *)lst->next->next->content = 3;

    t_list *new_lst = ft_lstmap(lst, add_one, del);
    print_list(new_lst);

    ft_lstclear(&lst, del);
    ft_lstclear(&new_lst, del);
    return (0);
}