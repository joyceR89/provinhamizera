#ifndef _GERENTE_HPP_
#define _GERENTE_HPP_


#include "Funcionario.hpp"
#include <iostream>
#define SENHA_PADRAO ""

class Gerente: public Funcionario
{
public:
  Gerente(const string & n, const string & c, int mat,
  float sb, float ch, float ht, int const qf, float const he);

    int getquantidade_fun()const;
    bool alteraSenha(string sn, string sa);
    bool autenticar(string s);
    float gethoraExtra()const;

    void setquantidade_fun(int qf)const;
    void sethoraExtra(float he)const;

    protected:
    float calculaBonus() const;

private:
  int quantidade_fun() const;
  float horaExtra() const;
  string senha;
};
#endif