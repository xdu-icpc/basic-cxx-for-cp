STYFILES = beamerthemeXDUstyle.sty      \
		   beamercolorthemeXDUstyle.sty \
		   beamerinnerthemeXDUstyle.sty \
		   beamerouterthemeXDUstyle.sty \

OUTFILES = abs.out sort.out bsrch.out sort-vec.out set.out set2.out \
		   set3.out multiset.out map.out

GENERATED = *.aux *.fdb_latexmk *.fls *.log *.nav *.out *.pdf *.snm *.toc \
			*.vrb

all: beamer

.PHONY: beamer
beamer: $(STYFILES)
	make -C code $(OUTFILES)
	latexmk --lualatex beamer

.PHONY: exercise
exercise:
	make -C exercise

.PHONY: recitation
recitation: $(STYFILES)
	latexmk --lualatex recitation

.PHONY: clean
clean:
	rm -fv $(GENERATED)
	make -C exercise clean
	make -C code clean

.PHONY: .gitignore
.gitignore:
	echo "$(GENERATED)" | sed 's/ /\n/g' > $@

$(STYFILES): theme/XDUstyle.dtx
	cd theme; xelatex XDUstyle.dtx
