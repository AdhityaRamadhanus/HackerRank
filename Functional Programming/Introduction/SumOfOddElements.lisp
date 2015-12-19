(defun filter(x)
    (if (null x)  0 
                 (if (= 1 (mod (car x) 2)) (+ (car x) (filter (rest x)))
                                           (filter (rest x))
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
(write (filter (read-list)))