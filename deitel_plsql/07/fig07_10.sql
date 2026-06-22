// Figura 7.10: fig07_10.cpp
// Rola um dado de seis lados 6.000.000 vezes
SET SERVEROUTPUT ON;

DECLARE
    v_face              PLS_INTEGER;
    TYPE t_frequency    IS VARRAY(7) OF PLS_INTEGER;
    v_frequency         t_frequency := t_frequency(0);
BEGIN
    v_frequency.extend(6,1);
    
    FOR roll IN 1..6000000 LOOP
        v_face := TRUNC(DBMS_RANDOM.VALUE(1,7));
        v_frequency(v_face) := v_frequency(v_face) + 1;
    END LOOP;
    
    DBMS_OUTPUT.PUT_LINE(
    LPAD('Face', 4) || LPAD('Frequency', 13));
    
    FOR face IN 1..5 LOOP
        DBMS_OUTPUT.PUT_LINE(
            LPAD(face, 4) ||
            LPAD(v_frequency(face), 13)
        );
    END LOOP;
END;