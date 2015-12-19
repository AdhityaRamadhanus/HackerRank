(defun filter(del x)
    (if (null x) nil 
                 (if (= 1 (mod del 2)) (cons (car x) (filter (+ 1 del) (rest x)))
                                     (filter (+ 1 del) (rest x))
                  )
    )
)
(defun write-list(x)
    (format t "~{~a~%~}" x))
                 
(defun read-list ()
    (let ((n (read *standard-input* nil)))
        (if (null n)
            nil
            (cons n (read-list)))))
(write-list (filter 0 (read-list)))