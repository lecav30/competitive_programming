-- Assumptions
-- We need to join the three tables
-- We need to count the amount of times a assignment is taken

-- Solution
-- First we define the fields of the output
select s.student_id, s.student_name, sb.subject_name, count(e.student_id) as attended_exams
-- Second we will join the students and subjects tables
from students s cross join subjects sb
-- Third we will join the examinations table to count the amount of times a student has taken a exam
left join examinations e
on s.student_id = e.student_id and sb.subject_name = e.subject_name
-- Fourth we will group by student_id and subject_name to have the same output as the example
group by s.student_id, sb.subject_name
order by s.student_id, sb.subject_name
