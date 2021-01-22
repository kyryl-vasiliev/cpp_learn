.PHONY: all list.ls b.a

all: list.ls
	@echo "all call"

create:
	touch b.a c.b list.ls
	mkdir dir
	cd dir; touch da.a db.a dc.b;

clean:
	rm -rf dir a.a b.a c.b list.ls

list.ls: a.a b.a 
	#@echo "file list in current dir:" *
	@echo "file list * :" *
	@echo "this is our target" $@
	@echo "this is all prerequisite filenam:" $^
	@echo "this is first prerequisite filename -why b,a?:" $<
	@echo "this is all prerequisite filename sorted:" $(sort $^)
	@echo "this is stem of target file wrong:" $(patsubst %.,%,$^) 
	@echo "this is all prerequisite filename no dirs: not works" $(notdir $^)
	@echo "this is all prerequisite base filename noextensions" $(basename $^)
	@echo "not works like this:" $%
%.a:
	echo "weare on % stem our target is" $@
