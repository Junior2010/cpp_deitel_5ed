SET SERVEROUTPUT ON;

DECLARE
    v_response_size     PLS_INTEGER := 40;
    v_frequency_size    PLS_INTEGER := 11;
    t_response  IS VARRAY(40) OF PLS_INTEGER;
    v_responses         t_response := t_response(1, 2, 6, 4, 8, 5, 9, 7, 8,
        10, 1, 6, 3, 8, 6, 10, 3, 8, 2, 7, 6, 5, 7, 6, 8, 6, 7,
        5, 6, 6, 5, 6, 7, 5, 6, 4, 8, 6, 8, 10 );
BEGIN

END;