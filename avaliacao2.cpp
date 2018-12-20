#include <conio.h>
#include <stdio.h>
main()
{
	float prova1, prova2, prova3, media;
	
	printf("Digite a nota da primeira prova: ");
	scanf("%f",&prova1);
	printf("Digite a nota da segunda prova: ");
	scanf("%f",&prova2);
	printf("Digite a nota da terceira prova: ");
	scanf("%f",&prova3);
	
	prova1 = (prova1 * 2) /10;
	prova2 = (prova2 * 3) /10;
	prova3 = (prova3 * 5) /10;
	media = prova1 + prova2 + prova3;
	
	if (media >= 6)
	    printf("Parabens voce foi APROVADO com media: %f",media);
	else
	    printf("REPROVADO com media: %f",media);
	getch();
}
