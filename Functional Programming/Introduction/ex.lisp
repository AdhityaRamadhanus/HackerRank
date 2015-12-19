(defun expo(e x)
       (if (= 0 x) 1
                   (* e (expo e (- x 1)))
       )
)
(defun facto(n)
    (if (= 0 n) 1
                (* n (facto (- n 1)))
    )
)
(defun evalo(x n)
    (if (= 0 n) 1
                (+ (/ (expo x n) (facto n)) (evalo x (- n 1)))
     )
)
(defun filter(x)
    (if (null x) nil 
                 (cons (evalo (car x) 9) (filter (rest x)))
    )
)
(defun read-list ()
    (let ((n (read *standard-input* nil)))
        (if (null n)
            nil
            (cons n (read-list)))))
(defun write-list(x)
    (format t "~{~a~%~}" x))
(setq a (read))
(write-list (filter (read-list)))

    