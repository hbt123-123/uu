// rea decompile_all
// name: FUN_100009cd0
// address: 0x100009cd0
// body: available
// range: 0x100009cd0-0x100009eb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

undefined * FUN_100009cd0(void)

{
  ulong uVar1;
  code *pcVar2;
  ulong uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ID unaff_x20;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong uVar12;
  
  uVar3 = _objc_msgSend(unaff_x20,"representations");
  uVar4 = 0;
  FUN_100009eb4(0);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar3,uVar4);
  uVar12 = uVar3 & 0xffffffffffffff8;
  if (uVar3 >> 0x3e == 0) {
    uVar9 = *(ulong *)(uVar12 + 0x10);
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar9 = uVar12;
    if ((long)uVar3 < 0) {
      uVar9 = uVar3;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar10 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar10;
  if (uVar9 != 0) {
    uVar11 = 0;
    do {
      while( true ) {
        if ((uVar3 & 0xc000000000000001) == 0) {
          if (*(ulong *)(uVar12 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100009e70);
            (*pcVar2)();
          }
          uVar5 = *(ulong *)(uVar3 + uVar11 * 8 + 0x20);
        }
        else {
          uVar5 = uVar11;
          FUN_100169c14(uVar11,uVar3);
        }
        uVar1 = uVar11 + 1;
        if (SCARRY8(uVar11,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100009e6c);
          (*pcVar2)();
        }
        _swift_dynamicCastObjCClass(uVar5,&_OBJC_CLASS___NSBitmapImageRep);
        if (uVar5 != 0) break;
        uVar11 = uVar11 + 1;
        if (uVar1 == uVar9) goto LAB_100009e8c;
      }
      puVar6 = puVar10;
      _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
      if ((((int)puVar6 == 0) || ((long)puVar10 < 0)) || (((ulong)puVar10 >> 0x3e & 1) != 0)) {
        if ((ulong)puVar10 >> 0x3e == 0) {
          puVar6 = *(undefined **)(((ulong)puVar10 & 0xffffffffffffff8) + 0x10);
        }
        else {
          puVar6 = (undefined *)((ulong)puVar10 & 0xffffffffffffff8);
          if ((long)puVar10 < 0) {
            puVar6 = puVar10;
          }
          __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
        }
        puVar7 = (undefined *)0x0;
        FUN_100033884(0,puVar6 + 1,1,puVar10);
        puVar10 = puVar7;
      }
      uVar8 = (ulong)puVar10 & 0xffffffffffffff8;
      uVar11 = *(ulong *)(uVar8 + 0x10);
      if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar11) {
        puVar6 = (undefined *)(ulong)(1 < *(ulong *)(uVar8 + 0x18));
        FUN_100033884(puVar6,uVar11 + 1,1,puVar10);
        uVar8 = (ulong)puVar6 & 0xffffffffffffff8;
        puVar10 = puVar6;
      }
      *(ulong *)(uVar8 + 0x10) = uVar11 + 1;
      *(ulong *)(uVar8 + uVar11 * 8 + 0x20) = uVar5;
      uVar11 = uVar1;
    } while (uVar1 != uVar9);
  }
LAB_100009e8c:
  _swift_bridgeObjectRelease(uVar3);
  return puVar10;
}

