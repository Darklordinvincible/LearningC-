.PHONY: clean All

All:
	@echo "----------Building project:[ CONSTANTS - Debug ]----------"
	@cd "CONSTANTS" && "$(MAKE)" -f  "CONSTANTS.mk"
clean:
	@echo "----------Cleaning project:[ CONSTANTS - Debug ]----------"
	@cd "CONSTANTS" && "$(MAKE)" -f  "CONSTANTS.mk" clean
