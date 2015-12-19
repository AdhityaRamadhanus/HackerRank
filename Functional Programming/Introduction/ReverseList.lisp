(defun rev(x)
    (if (null x) nil 
                 (append (rev (rest x)) (list (car x)))
    )
)
(defun write-list(x)
    (format t "~{~a~%~}" x))
                 
(defun read-list ()
    (let ((n (read *standard-input* nil)))
        (if (null n)
            nil
            (cons n (read-list)))))
(write-list (rev (read-list)))