(toggle-scroll-bar -1)
(menu-bar-mode)
(tool-bar-mode -1)
(global-linum-mode t)
(global-auto-revert-mode t)

(setq python-shell-interpreter "python3")

(require 'package)
(setq package-enable-at-startup nil)
(add-to-list 'package-archives
	     '("melpa" . "https://melpa.org/packages/"))

(package-initialize)

(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(use-package which-key
  :ensure t
  :config (which-key-mode))

(use-package material-theme
  :ensure t)
(load-theme 'material t)

(use-package auto-complete
  :ensure t
  :init
  (progn
    (ac-config-default)
    (global-auto-complete-mode t)
    ))

(use-package company
  :ensure t
  :config
  (setq company-idle-delay 0)
  (setq company-minimum-prefix-length 3)

  (global-company-mode t)
  )

(use-package company-irony
  :ensure t
  :config
  (add-to-list 'company-backends 'company-irony)

  )

(use-package irony
  :ensure t
  :config
  (add-hook 'c++-mode-hook 'irony-mode)
  (add-hook 'c-mode-hook 'irony-mode)
  (add-hook 'irony-mode-hook 'irony-cdb-autosetup-compile-options)
  )

(use-package irony-eldoc
  :ensure t
  :config
  (add-hook 'irony-mode-hook #'irony-eldoc))

(use-package flycheck
  :ensure t
  :init (global-flycheck-mode t))

(use-package jedi
  :ensure t
  :init
  (add-hook 'python-mode-hook 'jedi-setup)
  (add-hook 'python-mode-hook 'jedi:ac-setup))

;; Using package dumb-jump for jumping on function definition
(use-package dumb-jump
  :ensure t)

(use-package quickrun
  :ensure t)
;; After Downloading Quickrun, then execute the below command
(require 'quickrun)
(global-set-key [f5] (quote quickrun))

;; First download lsp-java from package manager
(require 'lsp-java)
(add-hook 'java-mode-hook #'lsp)

;;; This will enable emacs to compile a simple cpp single file without any makefile by just pressin `F9` key
(defun code-compile()
  (interactive)
  (unless (file-exists-p "Makefile")
    (set (make-local-variable 'compile-command)
	 (let ((file (file-name-nondirectory buffer-file-name)))
	   (format "%s -o %s %s"
		   (if (equal (file-name-extension file) "cpp") "g++" "gcc")
		   (file-name-sans-extension file)
		   file)))
    (compile compile-command)))

(global-set-key [f9] 'code-compile)
(custom-set-variables
 ;; custom-set-variables was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 '(ansi-color-faces-vector
   [default bold shadow italic underline bold bold-italic bold])
 '(custom-enabled-themes '(wombat))
 '(fci-rule-color "#37474f")
 '(hl-sexp-background-color "#1c1f26")
 '(inhibit-startup-screen t)
 '(package-selected-packages
   '(dumb-jump quickrun lsp-java material-theme jedi live-py-mode which-key use-package irony-eldoc flycheck company-irony auto-complete))
 '(vc-annotate-background nil)
 '(vc-annotate-color-map
   '((20 . "#f36c60")
     (40 . "#ff9800")
     (60 . "#fff59d")
     (80 . "#8bc34a")
     (100 . "#81d4fa")
     (120 . "#4dd0e1")
     (140 . "#b39ddb")
     (160 . "#f36c60")
     (180 . "#ff9800")
     (200 . "#fff59d")
     (220 . "#8bc34a")
     (240 . "#81d4fa")
     (260 . "#4dd0e1")
     (280 . "#b39ddb")
     (300 . "#f36c60")
     (320 . "#ff9800")
     (340 . "#fff59d")
     (360 . "#8bc34a")))
 '(vc-annotate-very-old-color nil))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )
