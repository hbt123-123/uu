// rea decompile_all
// name: FUN_10002b28c
// address: 0x10002b28c
// body: available
// range: 0x10002b28c-0x10002b433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002b28c(long param_1,long param_2)

{
  int iVar1;
  undefined8 uVar2;
  undefined1 auStack_70 [16];
  long local_60;
  long lStack_58;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  if (*(long *)(param_1 + 0x108) == param_2) {
    uVar2 = *(undefined8 *)(param_1 + 0x128);
    *(undefined8 *)(param_1 + 0x128) = 0;
    _swift_release(uVar2);
    if (*(char *)(param_1 + 0x130) == '\x01') {
      iVar1 = 0xfa9c;
      _CGDisplayRemoveReconfigurationCallback(thunk_FUN_10000f7e0,param_1);
      if (iVar1 != 0) {
        uVar2 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
        local_60 = CONCAT44(local_60._4_4_,iVar1);
        FUN_1003fb4ec(thunk_FUN_10003f7a8,auStack_70,0xd0000000000000a9,0x8000000100877660,
                      0xd000000000000026,0x8000000100878870,0x692,0);
        goto LAB_10002b404;
      }
      *(undefined1 *)(param_1 + 0x130) = 0;
    }
    _swift_release(param_1);
  }
  else {
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    local_60 = param_2;
    lStack_58 = param_1;
    FUN_1003fb45c(FUN_100040034,auStack_70,0xd0000000000000a9,0x8000000100877660,0xd00000000000003a,
                  0x800000010087b5e0,0x6a2,0);
LAB_10002b404:
    _swift_release(param_1);
  }
  return;
}

