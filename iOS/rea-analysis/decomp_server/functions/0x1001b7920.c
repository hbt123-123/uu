// rea decompile_all
// name: FUN_1001b7920
// address: 0x1001b7920
// body: available
// range: 0x1001b7920-0x1001b7a3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b79c0 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b7920(void)

{
  undefined8 uVar1;
  ID self;
  long unaff_x20;
  undefined1 auStack_38 [24];
  
  self = *(ID *)(unaff_x20 + 0x40);
  _objc_msgSend(self,"lock");
  if ((*(byte *)(unaff_x20 + 0x39) & 1) != 0) {
    uVar1 = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(uVar1,FUN_1001b98b0);
    _objc_msgSend(self,"unlock");
    return;
  }
  if (((*(char *)(unaff_x20 + 0x3a) == '\x01') && (*(char *)(unaff_x20 + 0x38) == '\x01')) &&
     (_swift_beginAccess(unaff_x20 + 0x10,auStack_38,0,0), *(char *)(unaff_x20 + 0x18) == '\x01')) {
    FUN_1001b5f48(0x1000000000000018,0x800000010089c380);
    FUN_1001b629c();
  }
  _objc_msgSend(self,"unlock");
  return;
}

