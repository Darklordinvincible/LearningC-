.PHONY: clean All

All:
	@echo "----------Building project:[ if_nest_Shipping - Debug ]----------"
	@cd "if_nest_Shipping" && "$(MAKE)" -f  "if_nest_Shipping.mk"
clean:
	@echo "----------Cleaning project:[ if_nest_Shipping - Debug ]----------"
	@cd "if_nest_Shipping" && "$(MAKE)" -f  "if_nest_Shipping.mk" clean
