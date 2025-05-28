------------------------------------  Note  --------------------------------

1. Inner Join

    SELECT columns FROM Table_A
    INNER JOIN Table_B
    ON Table_A.column = Table_B.column;

2. Left Join

    SELECT column_names
    FROM Table_A
    LEFT JOIN Table_B
    ON Table_A.column_name = Table_B.column_name;

    Gets all rows from the left table and gets the matching rows from the right table

2. Right Join

    SELECT column_names
    FROM Table_A
    RIGHT JOIN Table_B
    ON Table_A.column_name = Table_B.column_name;

    Gets all rows from the right table and gets the matching rows from the left table

3. CROSS JOIN

    SELECT column_names
    FROM Table_A
    CROSS JOIN Table_A.column_name = Table_B.column_name;


------------------------------------------------------------------------------------------------------------------------

--> Creating the database

    CREATE DATABASE OfficeDB;

--> Selecting the database

    USE OfficeDB;

--> Created Employees table

    CREATE TABLE Employees(
        employee_id int,
        name VARCHAR(50),
        department_id INT,
        manager_id INT,
        salary INT
    );

--> Created Departments table

    CREATE TABLE Departments(
        department_id int,
        department_name VARCHAR(100)
    );

--> Add the primary key to Employees table

    ALTER TABLE Employees ADD PRIMARY KEY(employee_id);

--> Add the primary key to Departments table

    ALTER TABLE Departments ADD PRIMARY KEY(department_id);

--> Inserting values to the table (Employees)

    INSERT INTO Employee VALUES
    ("1","Alice","10",null,"60000"),
    ("2","Bob","20","1","50000"),
    ("3","Charlie","10","1","55000"),
    ("4","David",null,"2","70000"),
    ("5","Eve","30",null,"45000");

--> Inserting values to the table (Departments)

    INSERT INTO Departments VALUES
    ("10","HR"),
    ("20","Engineering"),
    ("30","Marketing"),
    ("40","Sales");

--> Show the employee ID, name, 

    SELECT employee_id, name, department_name FROM Employees
    INNER JOIN Departments
    ON Employees.department_id = Departments.department_id;

--> INNER JOIN, list name and department

    SELECT name, department_name FROM Employees
    INNER JOIN Departments
    ON Employees.department_id = Departments.department_id;

--> LEFT JOIN, list all names and department

    SELECT name, department_name FROM Employees
    LEFT JOIN Departments
    ON Employees.department_id = Departments.department_id;

--> RIGHT JOIN, list name and all departments

    SELECT name, department_name FROM Employees
    RIGHT JOIN Departments
    ON Employees.department_id = Departments.department_id;

--> CROSS JOIN, list pair of all names with all departments

    SELECT name, department_name
    FROM Employees
    CROSS JOIN Departments;

--> SELF JOIN, list names with their managers departments

    SELECT e1.name, e2.name AS Manager FROM Employees e1
    JOIN Employees e2
    WHERE Employees.manager_id = Employees.employee_id;