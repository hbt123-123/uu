// rea decompile_all
// name: FUN_10039d1c8
// address: 0x10039d1c8
// body: available
// range: 0x10039d1c8-0x10039d29f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039d1c8(undefined8 param_1,code *param_2)

{
  code *pcVar1;
  long lVar2;
  long unaff_x20;
  ID self;
  long unaff_x21;
  
  FUN_10039d078();
  (*param_2)(param_1);
  if (unaff_x21 == 0) {
    self = *(ID *)(unaff_x20 + 0x28);
    _objc_msgSend(self,"lock");
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10039d2a0);
      (*pcVar1)();
    }
  }
  else {
    self = *(ID *)(unaff_x20 + 0x28);
    _objc_msgSend(self,"lock");
    lVar2 = *(long *)(unaff_x20 + 0x18);
    if (SBORROW8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10039d230);
      (*pcVar1)();
    }
  }
  *(long *)(unaff_x20 + 0x18) = lVar2 + -1;
  if (lVar2 + -1 == 0) {
    _flock(*(int *)(*(long *)(unaff_x20 + 0x10) + 0x10),8);
  }
  _objc_msgSend(self,"unlock");
  _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"unlock");
  return;
}

