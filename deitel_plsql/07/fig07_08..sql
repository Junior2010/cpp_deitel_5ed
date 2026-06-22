// Figura 7.8: fig07_08.cpp
// Calcula a soma dos elementos do array.
SET SERVEROUTPUT ON;

DECLARE
    v_array_size PLS_INTEGER := 10;
    TYPE t_a IS ARRAY(10) OF PLS_INTEGER;
    v_a         t_a := t_a(87, 68, 94, 100, 83, 78, 85, 91, 76, 87 );
    v_total     PLS_INTEGER := 0;
BEGIN
    FOR i IN 1..v_array_size LOOP
        v_total := v_total + v_a(i);
    END LOOP;
    
    DBMS_OUTPUT.PUT_LINE('Total of array elements: ' || v_total);
END;