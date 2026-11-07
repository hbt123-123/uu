// rea decompile_all
// name: FUN_1002c83ac
// address: 0x1002c83ac
// body: available
// range: 0x1002c83ac-0x1002c8503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c83ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long unaff_x20;
  long *plVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [24];
  
  lVar1 = 0;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar4 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar4[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar7 = *(long *)(*plVar4 + 0x60);
  _swift_beginAccess((long)plVar4 + lVar7,auStack_58,0,0);
  FUN_100082394((long)plVar4 + lVar7,auStack_60 + lVar1,FUN_1002c76a8);
  lVar7 = *(long *)(&stack0x000000e8 + lVar1);
  _swift_bridgeObjectRetain(lVar7);
  FUN_1000d27dc(auStack_60 + lVar1,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar5);
  lVar1 = *(long *)(lVar7 + 0x10);
  if (lVar1 == 0) {
    _swift_bridgeObjectRelease(lVar7);
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    pcVar3 = *(code **)(*(long *)(lVar2 + -8) + 0x38);
  }
  else {
    lVar2 = 0;
    __s10Foundation10URLRequestVMa();
    lVar6 = *(long *)(lVar2 + -8);
    (**(code **)(lVar6 + 0x10))
              (param_1,lVar7 + ((ulong)*(byte *)(lVar6 + 0x50) + 0x20 &
                               ((ulong)*(byte *)(lVar6 + 0x50) ^ 0xffffffffffffffff)) +
                       *(long *)(lVar6 + 0x48) * (lVar1 + -1),lVar2);
    _swift_bridgeObjectRelease(lVar7);
    pcVar3 = *(code **)(lVar6 + 0x38);
  }
  (*pcVar3)(param_1,lVar1 == 0,1,lVar2);
  return;
}

