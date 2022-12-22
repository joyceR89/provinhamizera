#include "Estagiario.hpp"


Estagiario::Estagiario(const string &n, const string &c, int mat,
                   float sb, float ch, float ht, const int & tc, const TipoEstagiario & est)
           :Funcionario(n, c, mat, sb, ch, ht)  
{
    setTempo_de_contrato(tc);
    setEstagiario(est);
}
int Estagiario::getTempo_de_contrato() const
{
    return Tempo_de_contrato;
}

TipoEstagiario Estagiario::getEstagiario()
{
    return estagiario;
}

void Estagiario::setTempo_de_contrato(const int tc)
{
    if (tc>=0)
    {
        Tempo_de_contrato = tc;
    }
    else
    {
        cerr << "\n ERRO: Tempo de contrato invalido!";
        tc = TC_PADRAO;
    }
}

void Estagiario::setEstagiario( TipoEstagiario est)
{
    estagiario = est;
}

float Estagiario::calculaBonus()
{
    int bonus = 0;
    if(estagiario==Jovem_aprendiz)
    {
        bonus = 0.05;
    }
    else if (estagiario==Universitario)
    {
        bonus = 0.1;
    }
    else
    {
        return 0.0;
    }
    
    return Tempo_de_contrato == 0 ? Tempo_de_contrato : (bonus*salario_base)/ Tempo_de_contrato;
}

float Estagiario::calculaSalarioBruto() const
{
    return Tempo_de_contrato==0 ? Tempo_de_contrato : (salario_base * horas_trabalhadas) / carga_horaria + calculaBonus();
}