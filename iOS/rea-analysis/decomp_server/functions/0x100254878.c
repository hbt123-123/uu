// rea decompile_all
// name: FUN_100254878
// address: 0x100254878
// body: available
// range: 0x100254878-0x100254b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100254878(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  long lVar7;
  ID self;
  undefined *puVar8;
  long unaff_x20;
  ID IVar9;
  code *pcVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long *plVar15;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_78,0,0);
  lVar5 = *(long *)(unaff_x20 + 0x38);
  lVar14 = *(long *)(lVar5 + 0x10);
  if (lVar14 != 0) {
    _swift_bridgeObjectRetain();
    puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
    plVar15 = (long *)(lVar5 + 0x28);
    do {
      puVar2 = (undefined *)plVar15[-1];
      lVar12 = *plVar15;
      puVar6 = puVar2;
      _swift_getObjectType();
      pcVar10 = *(code **)(lVar12 + 8);
      _swift_unknownObjectRetain(puVar2);
      (*pcVar10)(puVar6,lVar12);
      puVar1 = puVar8;
      if (puVar6 != (undefined *)0x0) {
        puVar1 = puVar6;
      }
      _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0x21,0);
      lVar13 = *(long *)(puVar1 + 0x10);
      lVar12 = *(long *)(unaff_x20 + 0x30);
      lVar11 = *(long *)(lVar12 + 0x10);
      if (SCARRY8(lVar11,lVar13)) {
                    /* WARNING: Does not return */
        pcVar10 = (code *)SoftwareBreakpoint(1,0x100254b3c);
        (*pcVar10)();
      }
      lVar7 = lVar12;
      _swift_isUniquelyReferenced_nonNull_native();
      *(long *)(unaff_x20 + 0x30) = lVar12;
      if (((int)lVar7 == 0) || ((long)(*(ulong *)(lVar12 + 0x18) >> 1) < lVar11 + lVar13)) {
        FUN_10025d0f4();
        *(long *)(unaff_x20 + 0x30) = lVar7;
        lVar12 = lVar7;
        if (*(long *)(puVar1 + 0x10) != 0) goto LAB_1002549a4;
LAB_1002548d4:
        _swift_bridgeObjectRelease(puVar1);
        lVar7 = lVar12;
        if (lVar13 != 0) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100254b40);
          (*pcVar10)();
        }
      }
      else {
        lVar7 = lVar12;
        if (*(long *)(puVar1 + 0x10) == 0) goto LAB_1002548d4;
LAB_1002549a4:
        if ((long)((*(ulong *)(lVar7 + 0x18) >> 1) - *(long *)(lVar7 + 0x10)) < lVar13) {
                    /* WARNING: Does not return */
          pcVar10 = (code *)SoftwareBreakpoint(1,0x100254b44);
          (*pcVar10)();
        }
        _swift_arrayInitWithCopy
                  (lVar7 + *(long *)(lVar7 + 0x10) * 0x10 + 0x20,puVar1 + 0x20,lVar13,
                   PTR___s10Foundation4DataVN_1009961e8);
        _swift_bridgeObjectRelease(puVar1);
        if (lVar13 != 0) {
          if (SCARRY8(*(long *)(lVar7 + 0x10),lVar13)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100254b48);
            (*pcVar10)();
          }
          *(long *)(lVar7 + 0x10) = *(long *)(lVar7 + 0x10) + lVar13;
        }
      }
      *(long *)(unaff_x20 + 0x30) = lVar7;
      _swift_endAccess(auStack_90);
      _swift_unknownObjectRelease(puVar2);
      plVar15 = plVar15 + 2;
      lVar14 = lVar14 + -1;
    } while (lVar14 != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_beginAccess(unaff_x20 + 0x30,auStack_90,0,0);
  if (*(long *)(*(long *)(unaff_x20 + 0x30) + 0x10) != 0) {
    FUN_100254b48();
    IVar9 = *(ID *)(unaff_x20 + 0x30);
    self = IVar9;
    _swift_bridgeObjectRetain();
    puVar8 = PTR___s10Foundation4DataVN_1009961e8;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF();
    _swift_bridgeObjectRelease(IVar9);
    FUN_100254688();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(puVar8);
    _objc_msgSend(self,"writeToFile:atomically:",IVar9,1);
    __ss11_StringGutsV4growyySiF(0x37);
    __sSS6appendyySSF(0xd000000000000019,0x80000001008a7af0);
    uVar3 = *(undefined8 *)(unaff_x20 + 0x10);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    _swift_bridgeObjectRetain(uVar4);
    __sSS6appendyySSF(uVar3,uVar4);
    _swift_bridgeObjectRelease(uVar4);
    __sSS6appendyySSF(0xd00000000000001c,0x80000001008a7b10);
    _swift_bridgeObjectRelease(0xe000000000000000);
  }
  return;
}

