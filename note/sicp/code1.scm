;; ex 1.3, Define a procedure that
;; takes three numbers as arguments and returns
;; the sum of the squares of the two larger numbers
(define (square x) (* x x))
(define (sum-of-square x y)
  (+ (square x) (square y)))

(define (f1-3 a b c)
  (cond
   ((and (<= a b) (<= a c)) (sum-of-square b c))
   ((and (<= b a) (<= b c)) (sum-of-square a c))
   ((and (<= c a) (<= c b)) (sum-of-square a b))))

;; Newton's method compute square root
(define (good-enough? x y)
  (cond ((< (abs (- (* x x) y)) 0.001) #t)
	(else #f)))

(define new-sqrt-ref (lambda (g x)
		       (cond ((good-enough? g x) g)
			     (else (new-sqrt-ref (/ (+ g (/ x g)) 2) x)))))
(define new-sqrt (lambda (x)
		   (exact->inexact (new-sqrt-ref (/ x 2) x))))
