/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   ValorUf.h
 * Author: seba
 *
 * Created on 10 de agosto de 2024, 12:11
 */

#ifndef VALORUF_H
#define VALORUF_H

#include <iostream>
#include <string>

class ValorUf {
public:
    ValorUf();
    ValorUf(std::string fecha, std::string monto);
    ValorUf(std::string fecha, double monto);
    ValorUf(const ValorUf& orig);
    virtual ~ValorUf();
    std::string GetFecha() const;
    void SetFecha(std::string fecha);
    long GetMonto() const;
    void SetMonto(long monto);

private:
    std::string fecha;
    long monto;
};

#endif /* VALORUF_H */

