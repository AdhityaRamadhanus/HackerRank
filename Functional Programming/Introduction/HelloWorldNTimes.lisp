(defun fn (n)
 (loop
   (setq n (- n 1))
   (format t "Hello World~%")
   (when (= n 0) (return)))
)

(fn (read))