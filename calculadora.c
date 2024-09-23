#include <stdio.h>

int main () {

    double num1,num2,sum,rst,div,mult;
    int op1 = 0, op2 = 0;

    do
    {
        printf("Ingresa el num1: ");
        scanf("%lf",&num1);
        printf("Ingresa el num2: ");
        scanf("%lf",&num2);
        printf("Seleccione la operacion a realizar: \n");
        printf("(1).suma\n(2).resta\n(3).multiplicacion\n(4).division\n>>");
        scanf("%d",&op1);
        switch (op1)
        {
        case 1:
            sum = num1 + num2;
            printf("La suma es: %.2lf\n",sum);
            break;
        case 2:
            rst = num1 - num2;
            printf("La resta es: %.2lf\n",rst);
            break;
        case 3:
            mult = num1 * num2;
            printf("La multiplicacion es: %.2lf\n",mult);
            break;
        case 4:
            if (num2>0)
            {
                div = num1 / num2;
                printf("La division es: %.2lf\n",div);
            }else{
                printf("No se puede realizar la division para 0\n");
            }
        
            break;
        default:
            printf("No existe esa opcion");
            break;
        }
        
        printf("Desea realizar otra operacion:\n1.Si\n2.No\n>>");
        scanf("%d",&op2);

    } while (op2 == 1);

    return 0;
}