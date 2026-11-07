// rea decompile_all
// name: FUN_1001b7254
// address: 0x1001b7254
// body: available
// range: 0x1001b7254-0x1001b731b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b7318 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b7254(void)

{
  ulong uVar1;
  undefined8 uVar2;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x40);
  uVar1 = _objc_msgSend(self,"lock");
  FUN_1004061c4();
  if ((uVar1 & 1) == 0) {
    *(undefined1 *)(unaff_x20 + 0x38) = 0;
    FUN_1001b629c();
    FUN_1001b661c(0xa4e59dafe89abce4,0xac000000bbb4e6b1);
  }
  else {
    uVar2 = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(uVar2,FUN_1001b948c);
  }
  _objc_msgSend(self,"unlock");
  return;
}

