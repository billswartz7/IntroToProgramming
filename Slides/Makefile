
CONVERT = libreoffice
PDFS = \
	../pdfs/L1_IDE.pdf \
	../pdfs/L2_Languages.pdf \
	../pdfs/L3_First.pdf \
	../pdfs/L4_Git-and-GitHub.pdf \
	../pdfs/L5_Variables.pdf \
	../pdfs/L6_Structs-Arrays-Debugger.pdf \
	../pdfs/L7_Operators-and-Logic.pdf \
	../pdfs/L8_Functions.pdf \
	../pdfs/L9_Loops-and-Iteration.pdf \
	../pdfs/L10_Scope-and-Persistence.pdf \
	../pdfs/L11_Input-and-Output.pdf \
	../pdfs/L12_The-Build-Process.pdf \
	../pdfs/L13_Enums-and-Strings.pdf \
	../pdfs/L14_Complexity-and-Big-O.pdf \
	../pdfs/L15_Hashing-and-Hash-Tables.pdf

all : $(PDFS)


../pdfs/L1_IDE.pdf : L1_IDE.pptx
	$(CONVERT) --headless --convert-to pdf L1_IDE.pptx --outdir ../pdfs

../pdfs/L2_Languages.pdf : L2_Languages.pptx
	$(CONVERT) --headless --convert-to pdf L2_Languages.pptx --outdir ../pdfs

../pdfs/L3_First.pdf : L3_First.pptx 
	$(CONVERT) --headless --convert-to pdf L3_First.pptx --outdir ../pdfs

../pdfs/L4_Git-and-GitHub.pdf : L4_Git-and-GitHub.pptx 
	$(CONVERT) --headless --convert-to pdf L4_Git-and-GitHub.pptx --outdir ../pdfs

../pdfs/L5_Variables.pdf : L5_Variables.pptx 
	$(CONVERT) --headless --convert-to pdf L5_Variables.pptx --outdir ../pdfs

../pdfs/L6_Structs-Arrays-Debugger.pdf : L6_Structs-Arrays-Debugger.pptx 
	$(CONVERT) --headless --convert-to pdf L6_Structs-Arrays-Debugger.pptx --outdir ../pdfs

../pdfs/L7_Operators-and-Logic.pdf : L7_Operators-and-Logic.pptx 
	$(CONVERT) --headless --convert-to pdf L7_Operators-and-Logic.pptx --outdir ../pdfs

../pdfs/L8_Functions.pdf : L8_Functions.pptx 
	$(CONVERT) --headless --convert-to pdf L8_Functions.pptx --outdir ../pdfs

../pdfs/L9_Loops-and-Iteration.pdf : L9_Loops-and-Iteration.pptx 
	$(CONVERT) --headless --convert-to pdf L9_Loops-and-Iteration.pptx --outdir ../pdfs

../pdfs/L10_Scope-and-Persistence.pdf : L10_Scope-and-Persistence.pptx 
	$(CONVERT) --headless --convert-to pdf L10_Scope-and-Persistence.pptx --outdir ../pdfs

../pdfs/L11_Input-and-Output.pdf : L11_Input-and-Output.pptx
	$(CONVERT) --headless --convert-to pdf L11_Input-and-Output.pptx --outdir ../pdfs

../pdfs/L12_The-Build-Process.pdf : L12_The-Build-Process.pptx
	$(CONVERT) --headless --convert-to pdf L12_The-Build-Process.pptx --outdir ../pdfs

../pdfs/L13_Enums-and-Strings.pdf : L13_Enums-and-Strings.pptx
	$(CONVERT) --headless --convert-to pdf L13_Enums-and-Strings.pptx --outdir ../pdfs

../pdfs/L14_Complexity-and-Big-O.pdf : L14_Complexity-and-Big-O.pptx 
	$(CONVERT) --headless --convert-to pdf L14_Complexity-and-Big-O.pptx --outdir ../pdfs

../pdfs/L15_Hashing-and-Hash-Tables.pdf : L15_Hashing-and-Hash-Tables.pptx
	$(CONVERT) --headless --convert-to pdf L15_Hashing-and-Hash-Tables.pptx --outdir ../pdfs

clean : ;
	rm ../pdfs/*.pdf
