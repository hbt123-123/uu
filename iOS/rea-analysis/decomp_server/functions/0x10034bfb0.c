// rea decompile_all
// name: FUN_10034bfb0
// address: 0x10034bfb0
// body: available
// range: 0x10034bfb0-0x10034c1bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 * FUN_10034bfb0(long param_1,ID param_2)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 uVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  
  puVar6 = PTR___sSSN_1009957f8;
  lVar13 = *(long *)(param_1 + 0x10);
  puVar5 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar13 != 0) {
    puVar10 = (undefined8 *)(param_1 + 0x28);
    puVar9 = PTR___swiftEmptyArrayStorage_100995ea0;
    do {
      uVar3 = puVar10[-1];
      uVar1 = *puVar10;
      _swift_bridgeObjectRetain(uVar1);
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar3,uVar1);
      IVar4 = _objc_msgSend(param_2,"pathsForResourcesOfType:inDirectory:",uVar3,0);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar4,puVar6);
      _swift_bridgeObjectRelease(uVar1);
      lVar11 = *(long *)(IVar4 + 0x10);
      lVar12 = *(long *)(puVar9 + 0x10);
      if (SCARRY8(lVar12,lVar11)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c1b4);
        (*pcVar2)();
      }
      puVar5 = puVar9;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)puVar5 == 0) || ((long)(*(ulong *)(puVar9 + 0x18) >> 1) < lVar12 + lVar11)) {
        FUN_1002968f4();
        puVar9 = puVar5;
        if (*(long *)(IVar4 + 0x10) != 0) goto LAB_10034c0c8;
LAB_10034bff8:
        _swift_bridgeObjectRelease(IVar4);
        puVar5 = puVar9;
        if (lVar11 != 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c1b8);
          (*pcVar2)();
        }
      }
      else {
        puVar5 = puVar9;
        if (*(long *)(IVar4 + 0x10) == 0) goto LAB_10034bff8;
LAB_10034c0c8:
        if ((long)((*(ulong *)(puVar5 + 0x18) >> 1) - *(long *)(puVar5 + 0x10)) < lVar11) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c1bc);
          (*pcVar2)();
        }
        _swift_arrayInitWithCopy
                  (puVar5 + *(long *)(puVar5 + 0x10) * 0x10 + 0x20,IVar4 + 0x20,lVar11,puVar6);
        _swift_bridgeObjectRelease(IVar4);
        if (lVar11 != 0) {
          if (SCARRY8(*(long *)(puVar5 + 0x10),lVar11)) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c1c0);
            (*pcVar2)();
          }
          *(long *)(puVar5 + 0x10) = *(long *)(puVar5 + 0x10) + lVar11;
        }
      }
      puVar10 = puVar10 + 2;
      lVar13 = lVar13 + -1;
      puVar9 = puVar5;
    } while (lVar13 != 0);
  }
  puVar6 = puVar5;
  FUN_10034fbb0();
  _swift_bridgeObjectRelease(puVar5);
  puVar10 = *(undefined8 **)(puVar6 + 0x10);
  if (puVar10 == (undefined8 *)0x0) {
    _swift_bridgeObjectRelease(puVar6);
    puVar7 = (undefined8 *)PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    puVar7 = puVar10;
    FUN_10034ccd0(puVar10,0);
    puVar8 = &local_88;
    FUN_100073eb8(puVar8,puVar7 + 4,puVar10,puVar6);
    FUN_10003f638(local_88,uStack_80,local_78,uStack_70,local_68);
    if (puVar8 != puVar10) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10034c17c);
      (*pcVar2)();
    }
  }
  return puVar7;
}

