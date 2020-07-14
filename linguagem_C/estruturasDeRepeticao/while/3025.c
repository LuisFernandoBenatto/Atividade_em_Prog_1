# include <stdio.h>
main (){
	 	int i, num, prin, seg;
	 	for (i=1000; i<=9999; i++){
			prin= (i/100);
			seg= i%100;
			if ((prin+seg) * (prin+seg)==i)
			printf ("propriedade do 3025!\n",i);
		}
getchar ();
}
