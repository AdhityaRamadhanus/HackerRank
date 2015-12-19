(defun filter(del x)
    (if (null x) nil 
                 (if (< (car x) del) (cons (car x) (filter del (rest x)))
                                     (filter del (rest x))
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
(write-list (filter (read) (read-list)))