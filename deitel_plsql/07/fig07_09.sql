// Figura 7.9: fig07_09.cpp
// Programa de impressão de gráfico de barras.
SET SERVEROUTPUT ON;

DECLARE
    v_array_size        PLS_INTEGER := 11;
    TYPE t_n IS VARRAY(11) OF PLS_INTEGER;
    v_n                 t_n := t_n(0, 0, 0, 0, 0, 0, 1, 2, 4, 2, 1);
BEGIN
    DBMS_OUTPUT.PUT_LINE('Grade distribution');
    
    -- para cada elemento do array n, gera saída de uma barra
    FOR i IN 0..v_array_size - 1 LOOP
        IF (i = 0)
            THEN DBMS_OUTPUT.PUT('  0-0: ');
        ELSIF (i = 10)
            THEN DBMS_OUTPUT.PUT('  100: ');
        ELSE
            DBMS_OUTPUT.PUT( TO_CHAR(i * 10) || '-' || TO_CHAR((i * 10) + 9) || ':');
        END IF;
        
        -- imprime a barra de asteriscos
        FOR stars IN 1..v_n(i + 1) LOOP
            DBMS_OUTPUT.PUT('*');
        END LOOP;
        DBMS_OUTPUT.NEW_LINE;
    END LOOP;
END;