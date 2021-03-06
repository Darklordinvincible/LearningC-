.PHONY: clean All

All:
	@echo "----------Building project:[ SECTION_7_CHALLANGE - Debug ]----------"
	@cd "SECTION_7_CHALLANGE" && "$(MAKE)" -f  "SECTION_7_CHALLANGE.mk"
clean:
	@echo "----------Cleaning project:[ SECTION_7_CHALLANGE - Debug ]----------"
	@cd "SECTION_7_CHALLANGE" && "$(MAKE)" -f  "SECTION_7_CHALLANGE.mk" clean
