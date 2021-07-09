SELECT DISTINCT people.name from movies

INNER JOIN stars
ON movies.id = stars.movie_id
INNER JOIN people
ON stars.person_id = people.id
WHERE movies.year = 2004
ORDER BY people.birth ASC

