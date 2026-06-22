SET SERVEROUTPUT ON;

DECLARE
   type t_n   is varray(10) of PLS_INTEGER;
   v_n   t_n := t_n();
BEGIN
   FOR i in 1..10 LOOP
      v_n.extend;
      v_n(i) := 0;
   END LOOP;

   DBMS_OUTPUT.PUT_LINE('Element' || LPAD('Value',13));
   FOR i IN 1..10 LOOP
      DBMS_OUTPUT.PUT_LINE(LPAD(i, 7) || LPAD(v_n(i),13));
   END LOOP;
END;
