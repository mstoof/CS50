SELECT people.name from movies

INNER JOIN stars
ON movies.id = stars.movie_id
INNER JOIN people
ON stars.person_id = people.id
WHERE movies.title LIKE "Toy Story";

