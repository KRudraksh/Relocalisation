
(cl:in-package :asdf)

(defsystem "select_pcd-msg"
  :depends-on (:roslisp-msg-protocol :roslisp-utils )
  :components ((:file "_package")
    (:file "updated_coord" :depends-on ("_package_updated_coord"))
    (:file "_package_updated_coord" :depends-on ("_package"))
  ))