// rea decompile_all
// name: FUN_1001b7594
// address: 0x1001b7594
// body: available
// range: 0x1001b7594-0x1001b7683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b7594(void)

{
  undefined *puVar1;
  long unaff_x20;
  ID self;
  undefined1 auStack_50 [31];
  undefined1 local_31;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001b7684,0,0xd000000000000093,0x800000010089b8d0,0xd000000000000017,
                0x800000010089ba20,0xa7,0);
  self = *(ID *)(unaff_x20 + 0x40);
  _objc_msgSend(self,"lock");
  local_31 = 1;
  _swift_beginAccess(unaff_x20 + 0x10,auStack_50,0x21,0);
  puVar1 = &DAT_100a77428;
  FUN_100004bb4(&DAT_100a77428,&DAT_10080d8b0);
  FUN_10039f3d0(&local_31,puVar1);
  _swift_endAccess(auStack_50);
  _objc_msgSend(self,"unlock");
  return;
}

