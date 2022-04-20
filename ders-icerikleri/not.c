#include <stdio.h>
#include <stdlib.h>
#include <locale.h> //Dil kütüphanesi tanýmlandý.
int main()
{
    setlocale(LC_ALL,"Turkish"); //Dil ayarlarý yapýldý.
    printf("Merhaba Dünya\n");
    return 0;
}
