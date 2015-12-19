(defun f (n) 
  (make-list n :initial-element 1)
 )

(let ((x (coerce (read) 'integer)))
    (format t "~S" (length (f x))))