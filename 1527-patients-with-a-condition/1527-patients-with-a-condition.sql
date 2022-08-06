/* Write your PL/SQL query statement below */
/*select patient_id,patient_name from patients where conditions is of type 'DIAB1%'*/
select patient_id "patient_id",patient_name "patient_name",
conditions "conditions" from patients
where conditions like 'DIAB1%' or conditions like '% DIAB1%';