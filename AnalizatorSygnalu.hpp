#ifndef ANALIZATORSYGNALU_HPP_INCLUDED
#define ANALIZATORSYGNALU_HPP_INCLUDED

class AnalizatorSygnalu
{
public:
    AnalizatorSygnalu();
    double dlugosc(const Sygnal Sygnal&);
    double minimum(const Sygnal Sygnal&);
    double srednia(const Sygnal Sygnal&);
    double calka(const Sygnal Sygnal&);
};


#endif // ANALIZATORSYGNALU_HPP_INCLUDED
