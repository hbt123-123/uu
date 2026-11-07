// rea decompile_all
// name: FUN_100130770
// address: 0x100130770
// body: available
// range: 0x100130770-0x100130883 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100130770(void)

{
  undefined8 uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  undefined1 auStack_40 [16];
  
  uVar2 = *unaff_x20;
  if ((uVar2 < 3) && (unaff_x20[1] < 3)) {
    if ((uVar2 & 0xff) != 0) {
      if ((((uint)uVar2 & 0xff) == 1) && (unaff_x20[10] == 1)) {
        return;
      }
      FUN_100131ca8();
      return;
    }
  }
  else {
    uVar1 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
    FUN_1003fb4ec(FUN_100131ca0,auStack_40,0xd00000000000009d,0x800000010088f830,0xd000000000000016,
                  0x800000010088f8d0,0xa7,0xb);
  }
  if (DAT_100a73b90 != -1) {
    _swift_once(&DAT_100a73b90,FUN_1001324ac);
  }
  _swift_bridgeObjectRetain(DAT_100a79e00);
  return;
}

