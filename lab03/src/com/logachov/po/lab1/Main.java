package com.logachov.po.lab1;

import com.logachov.po.lab1.transformacje.*;

public class Main {
    private static void zadanie2() {
        try {
            Punkt p1 = Punkt.E_X;
            System.out.println(p1);
            Transformacja tr = new Translacja(5, 6);
            System.out.println(tr);
            Punkt p2 = tr.transformuj(p1);
            System.out.println(p2);
            Transformacja trr = tr.getTransformacjaOdwrotna();
            System.out.println(trr);
            Punkt p3 = trr.transformuj(p2);
            System.out.println(p3);
        } catch (BrakTransformacjiOdwrotnejException ex)
        {
            ex.printStackTrace();
        }
        System.out.println();
        try
        {
            Punkt p1 = new Punkt(2, 2);
            System.out.println(p1);
            Transformacja tr2 = new Skalowanie(5, 4);
            System.out.println(tr2);
            Punkt p2 = tr2.transformuj(p1);
            System.out.println(p2);
            Transformacja trr2 = tr2.getTransformacjaOdwrotna();
            System.out.println(trr2);
            Punkt p3 = trr2.transformuj(p2);
            System.out.println(p3);
        }
        catch(BrakTransformacjiOdwrotnejException ex)
        {
            ex.printStackTrace();
        }
        System.out.println();
        try
        {
            Punkt p1 = new Punkt(2, 2);
            Transformacja tr2 = new Skalowanie(5, 0);
            System.out.println(tr2);
            System.out.println(p1);
            Punkt p2 = tr2.transformuj(p1);
            System.out.println(p2);
            Transformacja trr2 = tr2.getTransformacjaOdwrotna();
            System.out.println(trr2);
            Punkt p3 = trr2.transformuj(p2);
            System.out.println(p3);
        }
        catch(BrakTransformacjiOdwrotnejException ex)
        {
            ex.printStackTrace();
        }
        System.out.println();
    }

    private static void zadanie3() throws BrakTransformacjiOdwrotnejException {
        Punkt p1 = Punkt.O;
        Transformacja t = new Obrot(45);
        System.out.println();
        System.out.println(p1);
        System.out.println(t.transformuj(p1));
        System.out.println(t.getTransformacjaOdwrotna().transformuj(t.transformuj(p1)));

        p1 = new Punkt(2,2);
        System.out.println();
        System.out.println(p1);
        System.out.println(t.transformuj(p1));
        System.out.println(t.getTransformacjaOdwrotna().transformuj(t.transformuj(p1)));

        p1 = new Punkt(-234,250);
        t = new Obrot(23);
        System.out.println();
        System.out.println(p1);
        System.out.println(t.transformuj(p1));
        System.out.println(t.getTransformacjaOdwrotna().transformuj(t.transformuj(p1)));
    }

    private static void zadanie4() throws BrakTransformacjiOdwrotnejException {
        Punkt p1 = new Punkt(2, 2);
        Transformacja t = new ZlozenieTransformacji(new Transformacja[]{
                new Translacja(-2, -1),
                new Obrot(45),
                new Skalowanie(2, 5)
        });
        System.out.println();
        System.out.println(p1);
        System.out.println(t.transformuj(p1));
        System.out.println(t.getTransformacjaOdwrotna().transformuj(t.transformuj(p1)));
    }

    public static void main(String[] args) {
        //zadanie2();
        try {
            zadanie3();
            zadanie4();
        }catch(BrakTransformacjiOdwrotnejException ex) {

        }
    }
}