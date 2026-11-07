// rea decompile_all
// name: _TtC14UURemoteServer21DrawOverlayCanvasView::initWithCoder:
// address: 0x1000c488c
// body: available
// range: 0x1000c488c-0x1000c4903 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID _TtC14UURemoteServer21DrawOverlayCanvasView::initWithCoder_(ID param_1,SEL param_2,ID param_3)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  
  lVar1 = strokeLayers;
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000ccb60();
  *(undefined **)(param_1 + lVar1) = puVar3;
  __ss17_assertionFailure__4file4line5flagss5NeverOs12StaticStringV_SSAHSus6UInt32VtF
            ("Fatal error",0xb,2,0xd000000000000025,0x8000000100884600,
             "UURemoteServer/DrawOverlayViews.swift",0x25,2,0x2d,0);
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1000c4904);
  (*pcVar2)();
}

