project_dir=./
source_dir:=src
header_dir=./h
object_dir=Debug
app_dir=Debug1
src_file_list:=$(wildcard $(source_dir)/*)
dirs_create=$(object_dir) $(app_dir)
src_pure_files:=$(basename $(src_file_list))
h_file_list:=$(wildcard $(header_dir)/*)


all: $(dirs_create) call_target
	echo "all making dirs"

call_target:$(src_file_list)
	@echo "target" $@
	@echo "prerequisite" $^
$(src_file_list):
	@echo target $@
create: $(source_dir)
	touch $(source_dir)/1.cpp $(source_dir)/2.cpp $(source_dir)/3.cpp \
		$(source_dir)/3.cpp $(source_dir)/4.cpp $(source_dir)/5.cpp \
		$(source_dir)/6.cpp 

$(dirs_create):
	echo $@
	mkdir -p $@

$(source_dir):
	mkdir -p $(source_dir)


clean:
	rm -rf $(object_dir) $(app_dir)

list.ls: a.a b.a 
	#@echo "file list in current dir:" *
	echo "file list * :" *
	echo "this is our target" $@
	echo "this is all prerequisite filenam:" $^
	echo "this is first prerequisite filename -why b,a?:" $<
	echo "this is all prerequisite filename sorted:" $(sort $^)
	echo "this is stem of target file wrong:" $(patsubst %.,%,$^) 
	echo "this is all prerequisite filename no dirs: not works" $(notdir $^)
	echo "this is all prerequisite base filename noextensions" $(basename $^)
	echo "not works like this:" $%
%.a:
	echo "weare on % stem our target is" $@


.PHONY: create $(source_dir) all $(src_file_list)
