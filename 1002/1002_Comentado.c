#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

  //================== DECLARAÇÃO DE VARIAVEIS =======================
  
  /**
   * Para este exercicio pode-se considerar uma constante PI e duas variáveis
   * (raio e área).
   */
  
  /**
   * O problema 1002(Área do Círculo) define que o valor de PI será 3,14159.
   * Como PI é um valor fixo a declaração dele pode ser como de uma constante estática.
   * A declaração ficara desta forma:
   */
  static double const PI = 3.14159;
  /**
   * Note que com desta forma o valor de PI pré-definido não sofrerá alterações.
   * Caso tente alterar este valor o sera lançado um erro de compilação.
   */
  
  /**
   * Quanto as os valores variáveis, um sera o valor de entrada raio que no enunciado
   * é soliciado que seja um "ponto flutuante (dupla precisão)" isso indica que o valor
   * de entrada deve ser do tipo double, assim como o valor da área a ser calculado.
   * Assim temos:
   */
  double raio, area;// Declaração das variáveis como sendo do tipo double.
  
  
  //================== ENTRADA DE DADOS =======================
  
  /**
   * Neste exercício temos apenas um valor de entrada(raio).
   * Para a entrada de dados usaremos a função "scanf" da biblioteca <stdio.h>.
   * < https://www.tutorialspoint.com/c_standard_library/stdio_h.htm >
   * Esta função tem como argumentos o tipo de dado de entrada [neste caso "%lf" 
   * indica que o valor de entrada sera um double] e a variável a qual será atribuido
   * este valor[no caso &raio que é nossa variável raio].
   * scanf("%tipo", &variável)
   */
  scanf("%lf", &raio);
  
  
  
  //================ PROCESSAMENTO DOS DADOS ==================
  
  /**
   * Com o valor de raio atribuido agora será realizado o calculo da área.
   * para isto usamos a formula matematica "area = π.raio^2" que sera expressa
   * da seguinte forma:
   */
  area=PI*(raio*raio);// tendo em mente que raio^2 = raio*raio
  /**
   * Tambem podemos utilizar bibliotecas da linguagem de programação(definidas logo no
   * inicio do programa com #include) para realizar calculos em nossos programas.
   * < https://www.tutorialspoint.com/c_standard_library/math_h.htm >
   * A biblioteca math fornece diversas funcões matemáticas para nos auxiliar, como a
   * função "pow" que realiza operação de potenciação. Ela é definida da seguinte forma:
   *  pow(x,y)
   * Isto deve retornar o resultado de x elevado a y. 
   */
   
  
  //=============== APRESENTAÇÃO DE DADOS ====================
  /**
   * Por fim, agora basta exibir o resultado. Para isso será utilizada a função "printf"
   * também da biblioteca <stdio.h> citada anteriormente.
   * Com esta função apresentaremos o resutado do calculo da área em um texto formatado
   * A=(resultado com precisão de quatro casas decimais).
   * para representar um numero com certa quantidade de casas decimais basta escrever 
   * %.4lf no lugar do texto onde deve ser exibido o valor do segundo argumentos da 
   * função.
   * Desta forma, temos:
   */
  printf("A=%.4lf\n",area);
  /** O \n no final da string serve para cumprir com o que é pedido no enunciado do
   * problema "não esqueça de imprimir o fim de linha após o resultado".
   * Quando é solicitado "fim de linha", "nova linha", "quebra de linha" em algum
   * problema, isto referece ao "\n"(expreção para "new line").
   */
   
   /**
    * Na maioria dos sistemas operacionais o retorno 0 é um status de sucesso como
    * dizendo "O programa funcionou bem"
    */
   return 0;
}
