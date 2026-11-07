// rea decompile_all
// name: FUN_100557a54
// address: 0x100557a54
// body: available
// range: 0x100557a54-0x100557cbf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100557a54(long param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  long *plVar8;
  long unaff_x20;
  long lVar9;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  long lStack_68;
  long local_60 [3];
  undefined8 local_48;
  long lStack_40;
  undefined *local_38;
  
  local_38 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar7 = param_1;
  if (((*(long *)(unaff_x20 + 0x10) != 0) &&
      (lVar9 = *(long *)(unaff_x20 + 0x18), *(long *)(lVar9 + 0x10) != 0)) &&
     (FUN_1003618e4(), (param_2 & 1) != 0)) {
    lVar7 = *(long *)(lVar9 + 0x38) + lVar7 * 0x50;
    FUN_1004f9cd4(*(undefined8 *)(lVar7 + 0x28),*(undefined8 *)(lVar7 + 0x30));
    return local_38;
  }
  lVar9 = *(long *)(unaff_x20 + 0x40);
  if ((*(long *)(lVar9 + 0x10) == 0) || (lVar7 = param_1, FUN_1003618e4(), (param_2 & 1) == 0)) {
    lVar9 = *(long *)(unaff_x20 + 0x48);
    if ((lVar9 == 0) ||
       ((*(long *)(lVar9 + 0x10) == 0 ||
        (lVar7 = param_1, FUN_1003618e4(param_1), (param_2 & 1) == 0)))) {
      local_60[0] = param_1;
      FUN_10055d9d0();
      __sSzsE11descriptionSSvg(PTR___sSiN_100995968,lVar7);
      FUN_1004fa030();
    }
    else {
      FUN_1000b142c(*(long *)(lVar9 + 0x38) + lVar7 * 0x28,local_60);
      FUN_10003f030(local_60,local_48);
      (**(code **)(lStack_40 + 0x18))(auStack_88,local_48,lStack_40);
      FUN_10003f030(auStack_88,local_70);
      uVar3 = local_70;
      lVar7 = lStack_68;
      (**(code **)(lStack_68 + 0x10))(local_70,lStack_68);
      FUN_10003f094(auStack_88);
      FUN_10003f094(local_60);
      puVar4 = (undefined *)0x0;
      FUN_100506f84(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar1 = *(ulong *)(puVar4 + 0x10);
      if (*(ulong *)(puVar4 + 0x18) >> 1 <= uVar1) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar4 + 0x18));
        FUN_100506f84(puVar4,uVar1 + 1,1);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      puVar4[uVar1 + 0x20] = 0x5b;
      local_38 = puVar4;
      FUN_1004fa030(uVar3,lVar7);
      puVar4 = local_38;
      puVar5 = local_38;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar4;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_100506f84(0,*(long *)(puVar4 + 0x10) + 1,1,puVar4);
      }
      uVar1 = *(ulong *)(puVar6 + 0x10);
      puVar4 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar1) {
        puVar4 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_100506f84(puVar4,uVar1 + 1,1,puVar6);
      }
      *(ulong *)(puVar4 + 0x10) = uVar1 + 1;
      puVar4[uVar1 + 0x20] = 0x5d;
      local_38 = puVar4;
    }
  }
  else {
    plVar8 = (long *)(*(long *)(lVar9 + 0x38) + lVar7 * 0x18);
    if ((*(byte *)(plVar8 + 2) & 1) != 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100557c58);
      (*pcVar2)();
    }
    if (*plVar8 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100557c5c);
      (*pcVar2)();
    }
    FUN_1004f9e80(*plVar8,plVar8[1]);
  }
  return local_38;
}

