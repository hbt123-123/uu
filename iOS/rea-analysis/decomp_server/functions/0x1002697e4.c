// rea decompile_all
// name: FUN_1002697e4
// address: 0x1002697e4
// body: available
// range: 0x1002697e4-0x1002698ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002697e4(undefined8 param_1,undefined1 *param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  undefined1 auStack_b0 [16];
  undefined8 auStack_a0 [4];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [24];
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar2 + -8);
  lVar1 = -(*(long *)(lVar5 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 == 0) {
    pcVar3 = *(code **)(lVar5 + 0x10);
  }
  else {
    uVar4 = *(undefined8 *)(param_3 + 0x48);
    _swift_bridgeObjectRetain(uVar4);
    _swift_release(param_3);
    *(undefined8 *)((long)auStack_a0 + lVar1) = param_5;
    *(undefined8 *)((long)auStack_a0 + lVar1 + 8) = param_6;
    *(undefined8 *)((long)auStack_a0 + lVar1 + 0x10) = param_4;
    FUN_1002676e4(auStack_80 + lVar1,param_2,FUN_10026b7c0,auStack_b0 + lVar1,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    pcVar3 = *(code **)(lVar5 + 0x20);
    param_2 = auStack_80 + lVar1;
  }
  (*pcVar3)(param_1,param_2,lVar2);
  return;
}

