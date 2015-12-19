(defun lengthlist(x) 
    (if (null x) 0
                 (+ 1 (lengthlist (rest x)))
     )
)
(defun read-list ()
    (let ((n (read *standard-input* nil)))
        (if (null n)
            nil
            (cons n (read-list)))))
(write (lengthlist (read-list)))