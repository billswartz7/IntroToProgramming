
CONVERT = libreoffice
PDFS = \
	../docs/L1_IDE.pdf \
	../docs/L2_Languages.pdf \
	../docs/L3_First.pdf \
	../docs/L4_Git-and-GitHub.pdf \
	../docs/L5_Variables.pdf \
	../docs/L6_Structs-Arrays-Debugger.pdf \
	../docs/L7_Operators-and-Logic.pdf \
	../docs/L8_Functions.pdf \
	../docs/L9_Loops-and-Iteration.pdf \
	../docs/L10_Scope-and-Persistence.pdf \
	../docs/L11_Input-and-Output.pdf \
	../docs/L12_The-Build-Process.pdf \
	../docs/L13_Enums-and-Strings.pdf \
	../docs/L14_Complexity-and-Big-O.pdf \
	../docs/L15_Hashing-and-Hash-Tables.pdf

PDF_OPTIONS=--headless --invisible --nodefault --nofirststartwizard --convert-to pdf --outdir ../docs

all : $(PDFS)


../docs/L1_IDE.pdf : L1_IDE.pptx
	$(CONVERT) $(PDF_OPTIONS) L1_IDE.pptx

../docs/L2_Languages.pdf : L2_Languages.pptx
	$(CONVERT) $(PDF_OPTIONS) L2_Languages.pptx

../docs/L3_First.pdf : L3_First.pptx 
	$(CONVERT) $(PDF_OPTIONS) L3_First.pptx

../docs/L4_Git-and-GitHub.pdf : L4_Git-and-GitHub.pptx 
	$(CONVERT) $(PDF_OPTIONS) L4_Git-and-GitHub.pptx

../docs/L5_Variables.pdf : L5_Variables.pptx 
	$(CONVERT) $(PDF_OPTIONS) L5_Variables.pptx

../docs/L6_Structs-Arrays-Debugger.pdf : L6_Structs-Arrays-Debugger.pptx 
	$(CONVERT) $(PDF_OPTIONS) L6_Structs-Arrays-Debugger.pptx

../docs/L7_Operators-and-Logic.pdf : L7_Operators-and-Logic.pptx 
	$(CONVERT) $(PDF_OPTIONS) L7_Operators-and-Logic.pptx

../docs/L8_Functions.pdf : L8_Functions.pptx 
	$(CONVERT) $(PDF_OPTIONS) L8_Functions.pptx

../docs/L9_Loops-and-Iteration.pdf : L9_Loops-and-Iteration.pptx 
	$(CONVERT) $(PDF_OPTIONS) L9_Loops-and-Iteration.pptx

../docs/L10_Scope-and-Persistence.pdf : L10_Scope-and-Persistence.pptx 
	$(CONVERT) $(PDF_OPTIONS) L10_Scope-and-Persistence.pptx

../docs/L11_Input-and-Output.pdf : L11_Input-and-Output.pptx
	$(CONVERT) $(PDF_OPTIONS) L11_Input-and-Output.pptx

../docs/L12_The-Build-Process.pdf : L12_The-Build-Process.pptx
	$(CONVERT) $(PDF_OPTIONS) L12_The-Build-Process.pptx

../docs/L13_Enums-and-Strings.pdf : L13_Enums-and-Strings.pptx
	$(CONVERT) $(PDF_OPTIONS) L13_Enums-and-Strings.pptx

../docs/L14_Complexity-and-Big-O.pdf : L14_Complexity-and-Big-O.pptx 
	$(CONVERT) $(PDF_OPTIONS) L14_Complexity-and-Big-O.pptx 

../docs/L15_Hashing-and-Hash-Tables.pdf : L15_Hashing-and-Hash-Tables.pptx
	$(CONVERT) $(PDF_OPTIONS) L15_Hashing-and-Hash-Tables.pptx

clean : ;
	rm ../docs/*.pdf
