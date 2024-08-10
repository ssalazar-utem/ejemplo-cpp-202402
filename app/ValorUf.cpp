#include "ValorUf.h"

ValorUf::ValorUf() {
    this->fecha = "";
    this->monto = 0;
}

ValorUf::ValorUf(std::string fecha, std::string monto) {
    this->fecha = fecha;
    this->monto = std::stol(monto);
}

ValorUf::ValorUf(std::string fecha, double monto) {
    this->fecha = fecha;
    this->monto = (long) monto;
}

ValorUf::ValorUf(const ValorUf& orig) {
    this->fecha = orig.fecha;
    this->monto = orig.monto;
}

ValorUf::~ValorUf() {
}

std::string ValorUf::GetFecha() const {
    return fecha;
}

void ValorUf::SetFecha(std::string fecha) {
    this->fecha = fecha;
}

long ValorUf::GetMonto() const {
    return monto;
}

void ValorUf::SetMonto(long monto) {
    this->monto = monto;
}
