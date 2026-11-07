// rea decompile_all
// name: FUN_1003d56bc
// address: 0x1003d56bc
// body: available
// range: 0x1003d56bc-0x1003d59eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

ID FUN_1003d56bc(int param_1)

{
  ulong uVar1;
  undefined *puVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong self;
  long lVar7;
  ID IVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  int *piVar12;
  ulong uVar13;
  int iVar14;
  ID unaff_x20;
  ulong uVar15;
  int local_88;
  undefined4 uStack_84;
  undefined1 auStack_80 [32];
  
  _swift_getObjCClassFromMetadata();
  uVar4 = _objc_msgSend(unaff_x20,"screens");
  uVar5 = 0;
  FUN_10004003c(0,&DAT_100a75978,&PTR__OBJC_CLASS___NSScreen_100a65810);
  __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(uVar4,uVar5);
  if (uVar4 >> 0x3e == 0) {
    uVar6 = *(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10);
    puVar2 = PTR___sypN_100995e88;
  }
  else {
    uVar6 = uVar4 & 0xffffffffffffff8;
    if ((long)uVar4 < 0) {
      uVar6 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar2 = PTR___sypN_100995e88;
  }
  PTR___sypN_100995e88 = puVar2;
  if (uVar6 != 0) {
    uVar15 = 0;
    do {
      if ((uVar4 & 0xc000000000000001) == 0) {
        if (*(ulong *)((uVar4 & 0xffffffffffffff8) + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d59a8);
          (*pcVar3)();
        }
        self = *(ID *)(uVar4 + uVar15 * 8 + 0x20);
      }
      else {
        self = uVar15;
        FUN_100169c28(uVar15,uVar4,&PTR__OBJC_CLASS___NSScreen_100a65810,&DAT_100a75978);
      }
      uVar1 = uVar15 + 1;
      if (SCARRY8(uVar15,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1003d59a4);
        (*pcVar3)();
      }
      lVar7 = 0x6e6565726353534e;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6565726353534e,0xee007265626d754e);
      IVar8 = _objc_msgSend(self,"deviceDescription");
      uVar9 = 0;
      FUN_100006014();
      uVar10 = uVar9;
      FUN_1003d5678();
      uVar13 = uVar9;
      __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                (IVar8,uVar9,puVar2 + 8,uVar10);
      if ((*(long *)(IVar8 + 0x10) == 0) ||
         (lVar11 = lVar7, thunk_FUN_1001a2e90(lVar7), (uVar13 & 1) == 0)) {
        _swift_bridgeObjectRelease(IVar8);
LAB_1003d5894:
        IVar8 = _objc_msgSend(self,"deviceDescription");
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar8,uVar9,puVar2 + 8,uVar10);
        if ((*(long *)(IVar8 + 0x10) == 0) || (thunk_FUN_1001a2e90(lVar7), (uVar9 & 1) == 0)) {
          _swift_bridgeObjectRelease(IVar8);
        }
        else {
          FUN_10003e8bc(*(long *)(IVar8 + 0x38) + lVar7 * 0x20,auStack_80);
          _swift_bridgeObjectRelease(IVar8);
          uVar5 = 0;
          FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
          piVar12 = &local_88;
          _swift_dynamicCast(piVar12,auStack_80,puVar2 + 8,uVar5,6);
          if (((ulong)piVar12 & 1) != 0) {
            IVar8 = _objc_msgSend(CONCAT44(uStack_84,local_88),"unsignedIntValue");
            iVar14 = (int)IVar8;
            goto LAB_1003d5770;
          }
        }
        if (param_1 == 0) goto LAB_1003d5994;
      }
      else {
        FUN_10003e8bc(*(long *)(IVar8 + 0x38) + lVar11 * 0x20,auStack_80);
        _swift_bridgeObjectRelease(IVar8);
        piVar12 = &local_88;
        _swift_dynamicCast(piVar12,auStack_80,puVar2 + 8,PTR___ss6UInt32VN_100995dc0,6);
        iVar14 = local_88;
        if (((ulong)piVar12 & 1) == 0) goto LAB_1003d5894;
LAB_1003d5770:
        if (iVar14 == param_1) {
LAB_1003d5994:
          _swift_bridgeObjectRelease(uVar4);
          return self;
        }
      }
      uVar15 = uVar15 + 1;
    } while (uVar1 != uVar6);
  }
  _swift_bridgeObjectRelease(uVar4);
  return 0;
}

