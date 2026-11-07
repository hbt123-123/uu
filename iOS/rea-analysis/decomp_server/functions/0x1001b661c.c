// rea decompile_all
// name: FUN_1001b661c
// address: 0x1001b661c
// body: available
// range: 0x1001b661c-0x1001b677f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b661c(long *param_1,undefined8 param_2)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  undefined1 auStack_90 [16];
  long *local_80;
  undefined8 uStack_78;
  undefined1 local_58 [8];
  
  plVar1 = param_1;
  thunk_FUN_1003db354();
  (**(code **)(*plVar1 + 0x108))(local_58);
  _swift_release(plVar1);
  uVar2 = (ulong)*(uint *)(unaff_x20 + 0x1c);
  FUN_10040c9e8();
  FUN_100401b14(0);
  local_80 = param_1;
  uStack_78 = param_2;
  if ((uVar2 & 1) == 0) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb45c(FUN_1001b94c0,auStack_90,0xd000000000000093,0x800000010089b8d0,0xd000000000000020,
                  0x800000010089bd20,0x120,0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_1001b94e8,auStack_90,0xd000000000000093,0x800000010089b8d0,0xd000000000000020,
                  0x800000010089bd20,0x11e,0);
  }
  return;
}

