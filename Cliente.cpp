#include "Cliente.hpp"

Cliente::Cliente(const string & n, const string & c,const string & t, const string & e)
        :PessoaFisica(n, c)
{
    setTelefone(t);
    setEndereco(e);
}

string Cliente::getEndereco() const
{
    return Endereço;
}

string Cliente::getTelefone() const
{
    return Telefone;
}

void Cliente::setTelefone(const string t)
{
    setTelefone = t;
}
void Cliente::setEndereco(const string e)
{
    setEndereco = e;
}