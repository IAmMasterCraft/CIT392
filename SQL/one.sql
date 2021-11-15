-- Use the EMPLOYEES table in 1.png and listing the output:
-- I. Write a query to retrieve the last name and salary from the EMPLOYEES table for
-- any employee whose salary is between 2500 and 2600.(2.5 marks)
-- II. Write a query that retrieves the employee ID, first name, last name and the
-- department ID of employees in department 30.(2.5 marks)
-- III. Write a query to retrieve the last name and salary from EMPLOYEES table for
-- any employee whose salary is less than or equal to 2900.(2.5 marks)


--------------
--------------

-- Using the EMPLOYEREES table in 1.png:
-- i. Write a query to retrieve the employee numbers, last name and salary from the
-- EMPLOYEES table for any employee whose employee number is 101,103,105,106 or 110 (6 marks)
-- Ii Write a query to display the employee number, first_name and hire_date of employees. The result should be displayed in such a way that the first names will be arranged alphabetically.(8 marks)


SELECT LAST_NAME, SALARY FROM EMPLOYEES WHERE SALARY BETWEEN 2500 AND 2600;

SELECT EMPLOYEE_ID, FIRST_NAME, LAST_NAME, DEPARTMENT_ID FROM EMPLOYEES WHERE DEPARTMENT_ID = 30;

SELECT LAST_NAME, SALARY FROM EMPLOYEES WHERE SALARY <= 2900;



SELECT EMPLOYEE_ID, LAST_NAME, SALARY FROM EMPLOYEES WHERE EMPLOYEE_ID IN (101, 103, 105, 106, 110);
SELECT EMPLOYEE_ID, FIRST_NAME, HIRE_DATE FROM EMPLOYEES ORDER BY FIRST_NAME ASC;