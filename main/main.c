#include <stdio.h>
#include <stdlib.h>
#include "fonksiyonlarinTamami.h"
#include "stackYaratma.h"
#include "pushStackHeaders.h"
#include "popStackHeaders.h"
#include "balancedHeaders.h"

// MUSTAFA EREN 18360859024
int main()
{

    char giris[12];
    printf("Parantezleri giriniz: ");
    scanf("%s",&giris);

    balanced(giris,strlen(giris));

    return 0;
}
