SELECT * from movies

INNER JOIN ratings
ON movies.id = ratings.movie_id
INNER JOIN stars
ON movies.id = stars.movie_id
INNER JOIN people
ON stars.person_id = people.id

WHERE people.name LIKE "Johnny Depp" AND people.name LIKE "Helena Bonham Carter"
LIMIT 5;