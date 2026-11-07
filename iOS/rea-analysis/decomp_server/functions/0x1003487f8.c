// rea decompile_all
// name: FUN_1003487f8
// address: 0x1003487f8
// body: available
// range: 0x1003487f8-0x100348977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003487f8(ulong param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  long lVar1;
  ulong uVar2;
  long *unaff_x20;
  undefined1 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  double dVar7;
  code *local_90;
  undefined1 auStack_88 [24];
  
  lVar1 = 0;
  local_90 = param_4;
  FUN_1002c76a8();
  lVar1 = -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = auStack_88 + lVar1 + -8;
  plVar5 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
  _os_unfair_lock_lock(uVar4);
  lVar6 = *(long *)(*plVar5 + 0x60);
  _swift_beginAccess((long)plVar5 + lVar6,auStack_88,0,0);
  FUN_10028ab0c((long)plVar5 + lVar6,puVar3);
  uVar2 = *(ulong *)(&stack0x000000d0 + lVar1);
  FUN_1000d27dc(puVar3,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar4);
  if ((((long)uVar2 < 0) || (uVar2 < (ulong)unaff_x20[2])) &&
     ((**(code **)(*unaff_x20 + 0x90))(param_1,param_3), (param_1 & 1) != 0)) {
    dVar7 = (double)NEON_ucvtf(unaff_x20[3]);
    uVar4 = *(undefined8 *)(plVar5[2] + 0x10);
    _os_unfair_lock_lock(uVar4);
    FUN_10028ab0c((long)plVar5 + lVar6,puVar3);
    lVar1 = *(long *)(&stack0x000000d0 + lVar1);
    FUN_1000d27dc(puVar3,FUN_1002c76a8);
    _os_unfair_lock_unlock(uVar4);
    _pow(dVar7,(double)lVar1);
    dVar7 = dVar7 * (double)unaff_x20[4];
    uVar4 = 0;
  }
  else {
    dVar7 = 4.94065645841247e-324;
    uVar4 = 2;
  }
  (*local_90)(dVar7,uVar4);
  return;
}

