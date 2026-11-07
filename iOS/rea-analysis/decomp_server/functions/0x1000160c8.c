// rea decompile_all
// name: FUN_1000160c8
// address: 0x1000160c8
// body: available
// range: 0x1000160c8-0x10001620f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000160c8(undefined8 param_1,undefined8 param_2,long param_3,code *param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  code *pcVar3;
  undefined1 auStack_90 [16];
  int local_80;
  undefined8 local_78;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_68,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    (*param_4)(param_1,param_2);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar3 = FUN_10003b894;
    local_80 = (int)param_1;
    local_78 = param_2;
    FUN_1003fb48c(FUN_10003b894,auStack_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000034,
                  0x8000000100877710,0x201,0);
    if ((int)param_1 == 0) {
      FUN_1003a48dc();
      uVar1 = *(undefined8 *)pcVar3;
      uVar2 = *(undefined8 *)(pcVar3 + 8);
      _swift_bridgeObjectRetain(uVar2);
      FUN_100014dfc(uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
    }
    (*param_4)(param_1,param_2);
    _swift_release(param_3);
  }
  return;
}

