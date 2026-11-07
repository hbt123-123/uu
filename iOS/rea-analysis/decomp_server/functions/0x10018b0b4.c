// rea decompile_all
// name: FUN_10018b0b4
// address: 0x10018b0b4
// body: available
// range: 0x10018b0b4-0x10018b48f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined * FUN_10018b0b4(void)

{
  code *pcVar1;
  ulong uVar2;
  undefined8 uVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  long unaff_x20;
  ulong uVar11;
  long lVar12;
  undefined8 *puVar13;
  undefined1 auStack_c0 [16];
  ID local_b0;
  undefined8 uStack_a8;
  long local_a0;
  ulong local_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  ID local_78;
  undefined *local_70;
  ulong local_68;
  
  uVar2 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"pasteboardItems");
  if (uVar2 == 0) {
    return (undefined *)0x0;
  }
  uVar3 = 0;
  FUN_10004003c(0,&DAT_100a762b8,&PTR__OBJC_CLASS___NSPasteboardItem_100a65848);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar2,uVar3);
  if (uVar2 >> 0x3e == 0) {
    uVar11 = *(ulong *)((uVar2 & 0xffffffffffffff8) + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar11 = uVar2 & 0xffffffffffffff8;
    if ((long)uVar2 < 0) {
      uVar11 = uVar2;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar7;
  if (uVar11 == 0) {
    _swift_bridgeObjectRelease();
    lVar12 = *(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_80 = uVar2 & 0xc000000000000001;
    local_98 = uVar2 & 0xffffffffffffff8;
    local_a0 = uVar2 + 0x20;
    uVar10 = 0;
    local_90 = uVar2;
    local_88 = uVar11;
    do {
      if (local_80 == 0) {
        if (*(ulong *)(local_98 + 0x10) <= uVar10) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10018b42c);
          (*pcVar1)();
        }
        uVar2 = *(ID *)(local_a0 + uVar10 * 8);
      }
      else {
        uVar2 = uVar10;
        FUN_10016a020(uVar10,local_90);
      }
      if (SCARRY8(uVar10,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10018b428);
        (*pcVar1)();
      }
      local_70 = puVar7;
      local_68 = uVar10 + 1;
      IVar4 = _objc_msgSend(uVar2,"types");
      uVar3 = 0;
      FUN_100005b8c(0);
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar4,uVar3);
      lVar12 = *(long *)(IVar4 + 0x10);
      puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_78 = IVar4;
      if (lVar12 != 0) {
        FUN_100401b14(0);
        puVar13 = (undefined8 *)(IVar4 + 0x20);
        puVar8 = PTR___swiftEmptyArrayStorage_100995ea0;
        do {
          uVar3 = *puVar13;
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_b0 = uVar2;
          uStack_a8 = uVar3;
          FUN_1003fb48c(FUN_10018b640,auStack_c0,0xd0000000000000a2,0x8000000100893bb0,
                        0x6843776f4e746567,0xef29287365676e61,0xa8,7);
          lVar5 = 0;
          FUN_10012b9b0();
          _swift_allocObject();
          *(ulong *)(lVar5 + 0x10) = uVar2;
          *(undefined8 *)(lVar5 + 0x18) = uVar3;
          _swift_retain(lVar5);
          puVar7 = puVar8;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar7 == 0) || ((long)puVar8 < 0)) ||
             (puVar7 = puVar8, ((ulong)puVar8 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar8 >> 0x3e == 0) {
              puVar6 = *(undefined **)(((ulong)puVar8 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar6 = (undefined *)((ulong)puVar8 & 0xffffffffffffff8);
              if ((long)puVar8 < 0) {
                puVar6 = puVar8;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar6);
            }
            puVar7 = (undefined *)0x0;
            FUN_100036428(0,puVar6 + 1,1,puVar8);
          }
          uVar10 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar11 = *(ulong *)(uVar10 + 0x10);
          puVar8 = puVar7;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar11) {
            puVar8 = (undefined *)(ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_100036428(puVar8,uVar11 + 1,1,puVar7);
            uVar10 = (ulong)puVar8 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar10 + 0x10) = uVar11 + 1;
          *(long *)(uVar10 + uVar11 * 8 + 0x20) = lVar5;
          _swift_release(lVar5);
          puVar13 = puVar13 + 1;
          lVar12 = lVar12 + -1;
        } while (lVar12 != 0);
      }
      _swift_bridgeObjectRelease(local_78);
      puVar7 = local_70;
      puVar6 = local_70;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar7;
      if (((ulong)puVar6 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100036404(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7);
      }
      uVar2 = *(ulong *)(puVar9 + 0x10);
      puVar7 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar2) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100036404(puVar7,uVar2 + 1,1,puVar9);
      }
      *(ulong *)(puVar7 + 0x10) = uVar2 + 1;
      *(undefined **)(puVar7 + uVar2 * 8 + 0x20) = puVar8;
      uVar10 = local_68;
    } while (local_68 != local_88);
    _swift_bridgeObjectRelease(local_90);
    lVar12 = *(long *)(puVar7 + 0x10);
  }
  if (lVar12 != 0) {
    return puVar7;
  }
  _swift_bridgeObjectRelease(puVar7);
  return (undefined *)0x0;
}

