(setq inhibit-startup-message t)
(toggle-scroll-bar -1)
(menu-bar-mode -1)
(tool-bar-mode -1)
(global-linum-mode t)
(global-auto-revert-mode t)

(setq frame-title-format
      '((:eval (if tab-bar-mode
                   (cdr (assq 'name (tab-bar--current-tab))) ""))
        ": %b"))

(require 'package)
(setq package-enable-at-startup nil)
(add-to-list 'package-archives
	     '("melpa" . "https://melpa.org/packages/")
	     '("melpa-stable" . "https://stable.melpa.org/packages/"))

(package-initialize)

(unless (package-installed-p 'use-package)
  (package-refresh-contents)
  (package-install 'use-package))

(use-package exec-path-from-shell :ensure t)
(exec-path-from-shell-initialize)

(use-package flycheck :ensure t :init (global-flycheck-mode))

(use-package which-key
  :ensure t
  :config (which-key-mode))

(use-package material-theme
  :ensure t)
(load-theme 'material t)

(use-package company-quickhelp
  :ensure t)

(use-package lsp-mode :commands lsp :ensure t)
(use-package lsp-ui :commands lsp-ui-mode :ensure t)
;;Uncomment and execute the below code as during the time of
;;commenting that, the reuired package was unavailable
;;(use-package company-lsp
;;  :ensure t
;;  :commands company-lsp
;;  :config (push 'company-lsp company-backends)) ;; add company-lsp as a backend

(use-package ccls
  :ensure t
  :config
  (setq ccls-executable "ccls")
  (setq lsp-prefer-flymake nil)
  (setq-default flycheck-disabled-checkers '(c/c++-clang c/c++-cppcheck c/c++-gcc))
  :hook ((c-mode c++-mode objc-mode) .
         (lambda () (require 'ccls) (lsp))))

(setq company-transformers nil company-lsp-async t company-lsp-cache-candidates nil)

(use-package quickrun 
:ensure t
:bind ("C-c r" . quickrun))

;; My config for Emacs-Java had been taken from https://github.com/neppramod/java_emacs/blob/master/emacs-configuration.org
;; (use-package dap-mode
;;   :ensure t
;;   :after (lsp-mode)
;;   :functions dap-hydra/nil
;;   :config
;;   (require 'dap-java)
;;   :bind (:map lsp-mode-map
;;          ("<f5>" . dap-debug)
;;          ("M-<f5>" . dap-hydra))
;;   :hook ((dap-mode . dap-ui-mode)
;;     (dap-session-created . (lambda (&_rest) (dap-hydra)))
;;     (dap-terminated . (lambda (&_rest) (dap-hydra/nil)))))

;; (use-package dap-java :ensure nil)

;; (use-package lsp-treemacs
;;   :after (lsp-mode treemacs)
;;   :ensure t
;;   :commands lsp-treemacs-errors-list
;;   :bind (:map lsp-mode-map
;;          ("M-9" . lsp-treemacs-errors-list)))

;; (use-package treemacs
;;   :ensure t
;;   :commands (treemacs)
;;   :after (lsp-mode))

;; (use-package lsp-java 
;; :ensure t
;; :config (add-hook 'java-mode-hook 'lsp))

(use-package projectile
  :ensure t)
(use-package flycheck
  :ensure t)
(use-package yasnippet
  :ensure t
  :config (yas-global-mode))
(use-package lsp-mode
  :ensure t
  :hook ((lsp-mode . lsp-enable-which-key-integration))
  :config (setq lsp-completion-enable-additional-text-edit nil))
(use-package hydra
  :ensure t)
(use-package company
  :ensure t)
(use-package lsp-ui
  :ensure t)
(use-package which-key
  :ensure t
  :config (which-key-mode))
(use-package lsp-java
  :ensure t
  :config (add-hook 'java-mode-hook 'lsp))
(use-package dap-mode :after lsp-mode
  :ensure t
  :config (dap-auto-configure-mode))
;;(use-package dap-java
;;  :ensure t)
(use-package helm-lsp
  :ensure t)
(use-package helm
  :ensure t
  :config (helm-mode))
(use-package lsp-treemacs
  :ensure t)

;;; This will enable emacs to compile a simple cpp single file without any makefile by just pressing [f9] key
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
 '(ispell-dictionary nil)
 '(package-selected-packages
   '(lsp-mode dap-java projectile lsp-java dap-mode flycheck company-quickhelp ccls company-lsp quickrun which-key material-theme use-package)))
(custom-set-faces
 ;; custom-set-faces was added by Custom.
 ;; If you edit it by hand, you could mess it up, so be careful.
 ;; Your init file should contain only one such instance.
 ;; If there is more than one, they won't work right.
 )
