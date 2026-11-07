// rea decompile_all
// name: FUN_1002cd4d8
// address: 0x1002cd4d8
// body: available
// range: 0x1002cd4d8-0x1002cd5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cd4d8(long *param_1,long *param_2)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  undefined *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  long *plVar10;
  undefined8 uVar11;
  undefined1 auStack_68 [24];
  
  lVar1 = *param_1;
  lVar3 = param_1[1];
  lVar8 = param_1[2];
  if (lVar1 == 0) {
    pcVar6 = (code *)0x0;
    puVar5 = (undefined *)0x0;
    lVar7 = 0;
  }
  else {
    puVar5 = &DAT_1009adf90;
    _swift_allocObject(&DAT_1009adf90,0x20,7);
    *(long *)(puVar5 + 0x10) = lVar1;
    *(long *)(puVar5 + 0x18) = lVar3;
    pcVar6 = thunk_FUN_1002cd414;
    lVar7 = lVar8;
  }
  plVar10 = *(long **)(*param_2 + _TtC9Alamofire7Request::mutableState);
  uVar9 = *(undefined8 *)(plVar10[2] + 0x10);
  FUN_10028ab50(lVar1,lVar3,lVar8);
  _os_unfair_lock_lock(uVar9);
  lVar1 = (long)plVar10 + *(long *)(*plVar10 + 0x60);
  _swift_beginAccess(lVar1,auStack_68,1,0);
  uVar2 = *(undefined8 *)(lVar1 + 0x20);
  uVar4 = *(undefined8 *)(lVar1 + 0x28);
  uVar11 = *(undefined8 *)(lVar1 + 0x30);
  *(code **)(lVar1 + 0x20) = pcVar6;
  *(undefined **)(lVar1 + 0x28) = puVar5;
  *(long *)(lVar1 + 0x30) = lVar7;
  FUN_10028ab50(pcVar6,puVar5,lVar7);
  FUN_10028abac(uVar2,uVar4,uVar11);
  _os_unfair_lock_unlock(uVar9);
  FUN_10028abac(pcVar6,puVar5,lVar7);
  return;
}

