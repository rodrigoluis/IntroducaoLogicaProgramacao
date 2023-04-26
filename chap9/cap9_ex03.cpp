/*
3. Crie uma estrutura chamada pessoa contendo somente a idade desta pessoa. Dentro da própria estrutura, crie funções para cadastrar a idade da pessoa e retornar a idade cadastrada. Ao cadastrar a idade, a função deve verificar se o valor informado é maior que zero e menor que 150, emitindo uma mensagem de erro se o valor informado for inválido.
*/

#include <iostream>
using namespace std;

struct Person
{
   // Campos
   int age;

   // Funções
   void setAge(int val)
   {
      if(val > 0)
         age = val;
      else
         cout << "Idade inválida." << endl;
   }
   int getAge()
   {
      return age;
   }
};

int main()
{
   Person p; // Cria o objeto p do tipo Pessoa
   p.setAge(-1); // Atribui um valor inválido para idade
   p.setAge(10); // Atribui um valor correto à idade
   cout << "Idade da pessoa: " << p.getAge() << endl;   
   return 0;
}
