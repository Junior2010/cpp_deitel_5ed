SET SERVEROUTPUT ON;

DECLARE
    v_array_size    PLS_INTEGER := 10;
    -- Essa definição não funciona. Não é aceito variável como argumento
    -- do tamanho do array
    --TYPE t_s IS VARRAY(v_array_size) OF PLS_INTEGER;
    TYPE t_s IS VARRAY(10) OF PLS_INTEGER;
    v_s             t_s := t_s();
BEGIN
    FOR i IN 1..v_s.limit LOOP
        v_s.extend;
        v_s(i) := 2 + 2 * i;
    END LOOP;

    DBMS_OUTPUT.PUT_LINE('Element' || LPAD('Value', 13));
    
    FOR j IN 1..v_s.limit LOOP
        DBMS_OUTPUT.PUT_LINE(LPAD(j, 7) || LPAD(v_s(j), 13));
    END LOOP;
END;
