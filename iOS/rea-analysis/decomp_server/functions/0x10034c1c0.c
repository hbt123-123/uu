// rea decompile_all
// name: FUN_10034c1c0
// address: 0x10034c1c0
// body: available
// range: 0x10034c1c0-0x10034c39b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_10034c1c0(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  long local_68;
  
  lVar10 = *(long *)(param_1 + 0x10);
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar10 != 0) {
    puVar8 = (undefined8 *)(param_1 + 0x28);
    puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      local_98 = puVar8[-1];
      uVar1 = *puVar8;
      uStack_90 = uVar1;
      _swift_bridgeObjectRetain(uVar1);
      FUN_10034c634(&local_68,&local_98,param_2,param_3);
      _swift_bridgeObjectRelease(uVar1);
      lVar2 = local_68;
      lVar9 = *(long *)(local_68 + 0x10);
      lVar11 = *(long *)(puVar5 + 0x10);
      if (SCARRY8(lVar11,lVar9)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x10034c390);
        (*pcVar3)();
      }
      puVar4 = puVar5;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar4 == 0) || ((long)(*(ulong *)(puVar5 + 0x18) >> 1) < lVar11 + lVar9)) {
        FUN_1002968f4();
        puVar5 = puVar4;
        if (*(long *)(lVar2 + 0x10) != 0) goto LAB_10034c2a0;
LAB_10034c204:
        _swift_bridgeObjectRelease(lVar2);
        puVar4 = puVar5;
        if (lVar9 != 0) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034c394);
          (*pcVar3)();
        }
      }
      else {
        puVar4 = puVar5;
        if (*(long *)(lVar2 + 0x10) == 0) goto LAB_10034c204;
LAB_10034c2a0:
        if ((long)((*(ulong *)(puVar4 + 0x18) >> 1) - *(long *)(puVar4 + 0x10)) < lVar9) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x10034c398);
          (*pcVar3)();
        }
        _swift_arrayInitWithCopy
                  (puVar4 + *(long *)(puVar4 + 0x10) * 0x10 + 0x20,lVar2 + 0x20,lVar9,
                   PTR___sSSN_1009957f8);
        _swift_bridgeObjectRelease(lVar2);
        if (lVar9 != 0) {
          if (SCARRY8(*(long *)(puVar4 + 0x10),lVar9)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10034c39c);
            (*pcVar3)();
          }
          *(long *)(puVar4 + 0x10) = *(long *)(puVar4 + 0x10) + lVar9;
        }
      }
      puVar8 = puVar8 + 2;
      lVar10 = lVar10 + -1;
      puVar5 = puVar4;
    } while (lVar10 != 0);
  }
  puVar5 = puVar4;
  FUN_10034fbb0();
  _swift_bridgeObjectRelease(puVar4);
  puVar8 = *(undefined8 **)(puVar5 + 0x10);
  if (puVar8 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(puVar5);
    puVar6 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar6 = puVar8;
    FUN_10034ccd0(puVar8,0);
    puVar7 = &local_98;
    FUN_100073eb8(puVar7,puVar6 + 4,puVar8,puVar5);
    FUN_10003f638(local_98,uStack_90,local_88,uStack_80,local_78);
    if (puVar7 != puVar8) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10034c358);
      (*pcVar3)();
    }
  }
  return puVar6;
}

