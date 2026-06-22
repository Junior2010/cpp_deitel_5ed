SET SERVEROUTPUT ON;

DECLARE
    TYPE t_n IS VARRAY(10) OF PLS_INTEGER;
    v_n t_n := t_n( 32, 27, 64, 18, 95, 14, 90, 70, 60, 37 );
BEGIN
    DBMS_OUTPUT.PUT_LINE('Element' || LPAD('Value', 13));
    FOR i IN 1..v_n.limit LOOP
        DBMS_OUTPUT.PUT_LINE(LPAD(i, 7) || LPAD(v_n(i), 13));
    END LOOP;
END;

