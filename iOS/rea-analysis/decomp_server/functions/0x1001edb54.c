// rea decompile_all
// name: FUN_1001edb54
// address: 0x1001edb54
// body: available
// range: 0x1001edb54-0x1001edc63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001edb54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  int iVar2;
  undefined1 auStack_70 [16];
  long local_60;
  int local_58;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    iVar2 = (int)param_2;
    if ((iVar2 < 1) || (*(int *)(param_1 + 0x1c) != iVar2)) {
      uVar1 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
      local_60 = param_1;
      local_58 = iVar2;
      FUN_1003fb48c(FUN_1001f8d14,auStack_70,0xd000000000000095,0x80000001008a00c0,
                    0xd000000000000014,0x80000001008a0680,0x260,0);
      _swift_release(param_1);
    }
    else {
      FUN_1001eddd4(param_2);
      _swift_release(param_1);
    }
  }
  return;
}

