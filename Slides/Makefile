
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

all : $(PDFS)


../docs/L1_IDE.pdf : L1_IDE.pptx
	$(CONVERT) --headless --convert-to pdf L1_IDE.pptx --outdir ../docs

../docs/L2_Languages.pdf : L2_Languages.pptx
	$(CONVERT) --headless --convert-to pdf L2_Languages.pptx --outdir ../docs

../docs/L3_First.pdf : L3_First.pptx 
	$(CONVERT) --headless --convert-to pdf L3_First.pptx --outdir ../docs

../docs/L4_Git-and-GitHub.pdf : L4_Git-and-GitHub.pptx 
	$(CONVERT) --headless --convert-to pdf L4_Git-and-GitHub.pptx --outdir ../docs

../docs/L5_Variables.pdf : L5_Variables.pptx 
	$(CONVERT) --headless --convert-to pdf L5_Variables.pptx --outdir ../docs

../docs/L6_Structs-Arrays-Debugger.pdf : L6_Structs-Arrays-Debugger.pptx 
	$(CONVERT) --headless --convert-to pdf L6_Structs-Arrays-Debugger.pptx --outdir ../docs

../docs/L7_Operators-and-Logic.pdf : L7_Operators-and-Logic.pptx 
	$(CONVERT) --headless --convert-to pdf L7_Operators-and-Logic.pptx --outdir ../docs

../docs/L8_Functions.pdf : L8_Functions.pptx 
	$(CONVERT) --headless --convert-to pdf L8_Functions.pptx --outdir ../docs

../docs/L9_Loops-and-Iteration.pdf : L9_Loops-and-Iteration.pptx 
	$(CONVERT) --headless --convert-to pdf L9_Loops-and-Iteration.pptx --outdir ../docs

../docs/L10_Scope-and-Persistence.pdf : L10_Scope-and-Persistence.pptx 
	$(CONVERT) --headless --convert-to pdf L10_Scope-and-Persistence.pptx --outdir ../docs

../docs/L11_Input-and-Output.pdf : L11_Input-and-Output.pptx
	$(CONVERT) --headless --convert-to pdf L11_Input-and-Output.pptx --outdir ../docs

../docs/L12_The-Build-Process.pdf : L12_The-Build-Process.pptx
	$(CONVERT) --headless --convert-to pdf L12_The-Build-Process.pptx --outdir ../docs

../docs/L13_Enums-and-Strings.pdf : L13_Enums-and-Strings.pptx
	$(CONVERT) --headless --convert-to pdf L13_Enums-and-Strings.pptx --outdir ../docs

../docs/L14_Complexity-and-Big-O.pdf : L14_Complexity-and-Big-O.pptx 
	$(CONVERT) --headless --convert-to pdf L14_Complexity-and-Big-O.pptx --outdir ../docs

../docs/L15_Hashing-and-Hash-Tables.pdf : L15_Hashing-and-Hash-Tables.pptx
	$(CONVERT) --headless --convert-to pdf L15_Hashing-and-Hash-Tables.pptx --outdir ../docs

clean : ;
	rm ../docs/*.pdf
