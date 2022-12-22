#include "Gerente.hpp"

Gerente:: Gerente(const string & n, const string & c, int mat,
  float sb, float ch, float ht, int const qf, float const he):
              Funcionario: (n, c, mat, sb, ch, ht)
  {
    sethoraExtra(he);
    setquantidade_fun(qf);

    string sn;
    cout << "Novo gerente! Digite sua senha: ";
    cin >> sn;        
    alteraSenha(sn, SENHA_PADRAO);
  }

  int Gerente:: getquantidade_fun() const
  {
    return quantidade_fun;
  }

  bool Gerente:: alteraSenha(string sn, string sa)
  {
    if(sa == SENHA_PADRAO || sa == senha) 
    {
      senha = sn;
      return true;
    }

    return false;
  }

  bool Gerente::autenticar(string s)
  {
    if(s == senha){
      return true;
    }
    else {
      return false;
    }
  }


  float Gerente::gethoraExtra()const
  {
   return horaExtra;
  }

  void Gerente::setquantidade_fun(int qf)const
  {
    quantidade_fun = qf;
  }

  float Gerente::calculaBonus() const 
  {
    if(quantidade_fun() <= 6){
     return (quantidade_fun()*0.05*salario_base) + horaExtra* (salario_base *1.5) / carga_horaria;
    }
    else 
    {
      return (6*0.05*salario_base) + horaExtra*(salario_base* 1.5) / carga_horaria;
    }
  }

  void Gerente::sethoraExtra(float he)const
  {
    
    if(horas_trabalhadas > CH_PADRAO)
    {
      horaExtra = horas_trabalhadas - carga_horaria;
    }
    else
    {
      horaExtra = 0;
    }
    
  }