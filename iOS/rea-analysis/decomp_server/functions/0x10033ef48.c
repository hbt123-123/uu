// rea decompile_all
// name: FUN_10033ef48
// address: 0x10033ef48
// body: available
// range: 0x10033ef48-0x10033f113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10033ef48(ulong param_1,code *param_2,undefined8 param_3)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  undefined8 uVar7;
  long unaff_x20;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  undefined1 auStack_78 [24];
  
  plVar8 = *(long **)(unaff_x20 + 0x10);
  uVar7 = *(undefined8 *)(plVar8[2] + 0x10);
  _os_unfair_lock_lock(uVar7);
  lVar1 = (long)plVar8 + *(long *)(*plVar8 + 0x60);
  _swift_beginAccess(lVar1,auStack_78,0x21,0);
  lVar3 = 0;
  FUN_10033f2a8();
  (**(code **)(lVar1 + *(int *)(lVar3 + 0x14)))();
  if ((param_1 & 1) == 0) {
    (*param_2)(1,2);
  }
  else {
    puVar4 = &DAT_1009b3010;
    _swift_allocObject(&DAT_1009b3010,0x20,7);
    *(code **)(puVar4 + 0x10) = param_2;
    *(undefined8 *)(puVar4 + 0x18) = param_3;
    lVar10 = (long)*(int *)(lVar3 + 0x24);
    uVar9 = *(ulong *)(lVar1 + lVar10);
    _swift_retain(param_3);
    uVar5 = uVar9;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(lVar1 + lVar10) = uVar9;
    uVar6 = uVar9;
    if ((uVar5 & 1) == 0) {
      uVar6 = 0;
      FUN_100297330(0,*(long *)(uVar9 + 0x10) + 1,1,uVar9);
      *(ulong *)(lVar1 + lVar10) = uVar6;
    }
    uVar5 = *(ulong *)(uVar6 + 0x10);
    uVar9 = uVar6;
    if (*(ulong *)(uVar6 + 0x18) >> 1 <= uVar5) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar6 + 0x18));
      FUN_100297330(uVar9,uVar5 + 1,1,uVar6);
    }
    *(ulong *)(uVar9 + 0x10) = uVar5 + 1;
    lVar2 = uVar9 + uVar5 * 0x10;
    *(code **)(lVar2 + 0x20) = FUN_100300924;
    *(undefined **)(lVar2 + 0x28) = puVar4;
    *(ulong *)(lVar1 + lVar10) = uVar9;
    if (*(long *)(lVar1 + *(int *)(lVar3 + 0x20)) == 0) {
      puVar4 = &DAT_1009b3038;
      _swift_allocObject(&DAT_1009b3038,0x18,7);
      _swift_weakInit(puVar4 + 0x10);
      _swift_retain(puVar4);
      FUN_10033e374(FUN_10033fc78,puVar4);
      _swift_release_n(puVar4,2);
    }
  }
  _swift_endAccess(auStack_78);
  _os_unfair_lock_unlock(uVar7);
  return;
}

