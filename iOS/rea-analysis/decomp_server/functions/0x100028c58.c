// rea decompile_all
// name: FUN_100028c58
// address: 0x100028c58
// body: available
// range: 0x100028c58-0x100028db3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100028c58(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  long local_70;
  
  lVar2 = *(long *)(unaff_x20 + 0xf8);
  lVar1 = *(long *)(unaff_x20 + 0x100) + 1;
  *(long *)(unaff_x20 + 0x100) = lVar1;
  if (lVar2 == 0) {
    uVar3 = 0;
  }
  else {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
    uVar3 = *(undefined8 *)(unaff_x20 + 0xf8);
  }
  *(undefined8 *)(unaff_x20 + 0xf8) = 0;
  _swift_release(uVar3);
  *(long *)(unaff_x20 + 0xd8) = lVar1;
  *(undefined8 *)(unaff_x20 + 0xe0) = *(undefined8 *)(unaff_x20 + 0x108);
  *(ulong *)(unaff_x20 + 0xe8) = CONCAT44(param_2,param_1);
  *(undefined4 *)(unaff_x20 + 0xf0) = param_3;
  *(undefined1 *)(unaff_x20 + 0xf4) = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_80 = param_1;
  uStack_7c = param_2;
  local_78 = param_3;
  local_70 = lVar1;
  FUN_1003fb4bc(FUN_10003fb18,auStack_90,0xd0000000000000a9,0x8000000100877660,0xd00000000000004c,
                0x8000000100879390,0x711,0);
  FUN_10002c4e8(0x100000000,0,0x5279616c70736964,0xee006465766f6d65);
  return;
}

