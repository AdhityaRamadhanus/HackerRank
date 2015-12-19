(defun f (n xlist) 
   (if (null xlist) nil 
                    (append (make-list n :initial-element (car xlist)) (f n (rest xlist)))))
(defun read-list ()
    (let ((n (read *standard-input* nil)))
        (if (null n)
            nil
            (cons n (read-list)))))

(format t "~{~d~%~}" (f (read) (read-list)))