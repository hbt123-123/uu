// rea decompile_all
// name: FUN_1002c7dc8
// address: 0x1002c7dc8
// body: available
// range: 0x1002c7dc8-0x1002c7f1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_1002c7dc8(void)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  code *pcVar5;
  long unaff_x20;
  undefined8 uVar6;
  long *plVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [24];
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar7 = *(long **)(unaff_x20 + _TtC9Alamofire7Request::mutableState);
  uVar6 = *(undefined8 *)(plVar7[2] + 0x10);
  _os_unfair_lock_lock(uVar6);
  lVar3 = *(long *)(*plVar7 + 0x60);
  _swift_beginAccess((long)plVar7 + lVar3,auStack_68,0,0);
  FUN_100082394((long)plVar7 + lVar3,auStack_70 + lVar2,FUN_1002c76a8);
  lVar3 = *(long *)(&stack0xffffffffffffffb0 + lVar2);
  uVar1 = *(undefined8 *)(&stack0xffffffffffffffb8 + lVar2);
  uVar9 = *(undefined8 *)(&stack0xffffffffffffffc0 + lVar2);
  if (lVar3 == 0) {
    pcVar5 = (code *)0x0;
    puVar8 = (undefined *)0x0;
  }
  else {
    puVar8 = &DAT_1009ada68;
    _swift_allocObject(&DAT_1009ada68,0x20,7);
    *(long *)(puVar8 + 0x10) = lVar3;
    *(undefined8 *)(puVar8 + 0x18) = uVar1;
    pcVar5 = thunk_FUN_1002cd444;
  }
  FUN_10028ab50(lVar3,uVar1,uVar9);
  FUN_1000d27dc(auStack_70 + lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar6);
  if (lVar3 == 0) {
    pcVar5 = (code *)0x0;
  }
  else {
    puVar4 = &DAT_1009ada40;
    _swift_allocObject(&DAT_1009ada40,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar5;
    *(undefined **)(puVar4 + 0x18) = puVar8;
    pcVar5 = thunk_FUN_1002cd414;
  }
  return pcVar5;
}

