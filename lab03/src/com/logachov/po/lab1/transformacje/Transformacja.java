package com.logachov.po.lab1.transformacje;
public interface Transformacja {
    Punkt transformuj(Punkt p);
    Transformacja getTransformacjaOdwrotna() throws BrakTransformacjiOdwrotnejException;
}
