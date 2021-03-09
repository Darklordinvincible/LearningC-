.PHONY: clean All

All:
	@echo "----------Building project:[ SECTION8_CHALLANGE - Debug ]----------"
	@cd "SECTION8_CHALLANGE" && "$(MAKE)" -f  "SECTION8_CHALLANGE.mk"
clean:
	@echo "----------Cleaning project:[ SECTION8_CHALLANGE - Debug ]----------"
	@cd "SECTION8_CHALLANGE" && "$(MAKE)" -f  "SECTION8_CHALLANGE.mk" clean
