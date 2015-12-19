(defun filter(x)
    (if (null x) nil 
                 (if (< (car x) 0) (cons (* -1 (car x)) (filter (rest x)))
                                   (cons (car x) (filter (rest x)))
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
(write-list (filter (read-list)))