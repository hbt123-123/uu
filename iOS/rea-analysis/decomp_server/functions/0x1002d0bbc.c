// rea decompile_all
// name: FUN_1002d0bbc
// address: 0x1002d0bbc
// body: available
// range: 0x1002d0bbc-0x1002d0d3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d0bbc(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined *puVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  code *pcVar10;
  undefined1 auStack_80 [8];
  long alStack_78 [3];
  
  lVar3 = 0;
  FUN_1002c76a8();
  lVar2 = -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  plVar6 = *(long **)(param_1 + _TtC9Alamofire7Request::mutableState);
  uVar5 = *(undefined8 *)(plVar6[2] + 0x10);
  _os_unfair_lock_lock(uVar5);
  lVar3 = *(long *)(*plVar6 + 0x60);
  _swift_beginAccess((long)plVar6 + lVar3,auStack_80,0,0);
  FUN_100082394((long)plVar6 + lVar3,auStack_80 + lVar2,FUN_1002c76a8);
  lVar3 = *(long *)((long)alStack_78 + lVar2);
  uVar1 = *(undefined8 *)((long)alStack_78 + lVar2 + 8);
  uVar9 = *(undefined8 *)((long)alStack_78 + lVar2 + 0x10);
  if (lVar3 == 0) {
    pcVar10 = (code *)0x0;
    puVar7 = (undefined *)0x0;
    uVar8 = 0;
  }
  else {
    puVar7 = &DAT_1009ae198;
    _swift_allocObject(&DAT_1009ae198,0x20,7);
    *(long *)(puVar7 + 0x10) = lVar3;
    *(undefined8 *)(puVar7 + 0x18) = uVar1;
    pcVar10 = thunk_FUN_1002cd444;
    uVar8 = uVar9;
  }
  FUN_10028ab50(lVar3,uVar1,uVar9);
  FUN_1000d27dc(auStack_80 + lVar2,FUN_1002c76a8);
  _os_unfair_lock_unlock(uVar5);
  if (lVar3 != 0) {
    puVar4 = &DAT_1009ae170;
    _swift_allocObject(&DAT_1009ae170,0x20,7);
    *(code **)(puVar4 + 0x10) = pcVar10;
    *(undefined **)(puVar4 + 0x18) = puVar7;
    _swift_retain();
    FUN_10028abac(thunk_FUN_1002cd414,puVar4,uVar8);
    alStack_78[2] = *(undefined8 *)(param_1 + _TtC9Alamofire7Request::uploadProgress);
    (**(code **)(puVar4 + 0x10))(alStack_78 + 2);
    _swift_release(puVar4);
  }
  return;
}

