.PHONY: clean All

All:
	@echo "----------Building project:[ RATIONAL_OPERATORS - Debug ]----------"
	@cd "RATIONAL_OPERATORS" && "$(MAKE)" -f  "RATIONAL_OPERATORS.mk"
clean:
	@echo "----------Cleaning project:[ RATIONAL_OPERATORS - Debug ]----------"
	@cd "RATIONAL_OPERATORS" && "$(MAKE)" -f  "RATIONAL_OPERATORS.mk" clean
