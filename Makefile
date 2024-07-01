SUBDIRS := $(wildcard chp*)

all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@

clean: $(SUBDIRS)
	for dir in $(SUBDIRS); do $(MAKE) -C $$dir clean; done

.PHONY: all $(SUBDIRS)
