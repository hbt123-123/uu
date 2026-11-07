// rea decompile_all
// name: FUN_100405348
// address: 0x100405348
// body: available
// range: 0x100405348-0x100405673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100405348(ulong param_1,ulong param_2)

{
  int iVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  ID IVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  int *piVar9;
  undefined8 uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  int local_88;
  undefined4 uStack_84;
  ulong local_80 [4];
  
  if ((param_1 >> 0x20 & 1) == 0) {
    if (param_2 >> 0x3e == 0) {
      uVar12 = *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar12 = param_2 & 0xffffffffffffff8;
      if ((long)param_2 < 0) {
        uVar12 = param_2;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar12 != 0) {
      uVar13 = 0;
      do {
        if ((param_2 & 0xc000000000000001) == 0) {
          if (*(ulong *)((param_2 & 0xffffffffffffff8) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
            pcVar2 = (code *)SoftwareBreakpoint(1,0x100405630);
            (*pcVar2)();
          }
          uVar3 = *(ID *)(param_2 + uVar13 * 8 + 0x20);
        }
        else {
          uVar3 = uVar13;
          FUN_100169c00(uVar13,param_2);
        }
        lVar4 = 0x6e6565726353534e;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6e6565726353534e,0xee007265626d754e)
        ;
        IVar5 = _objc_msgSend(uVar3,"deviceDescription");
        uVar6 = 0;
        FUN_100006014();
        uVar7 = uVar6;
        FUN_1003d5678();
        uVar11 = uVar6;
        __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                  (IVar5,uVar6,PTR___sypN_100995e88 + 8,uVar7);
        if ((*(long *)(IVar5 + 0x10) == 0) ||
           (lVar8 = lVar4, thunk_FUN_1001a2e90(lVar4), (uVar11 & 1) == 0)) {
          _swift_bridgeObjectRelease(IVar5);
LAB_1004054dc:
          IVar5 = _objc_msgSend(uVar3,"deviceDescription");
          __sSD10FoundationE36_unconditionallyBridgeFromObjectiveCySDyxq_GSo12NSDictionaryCSgFZ
                    (IVar5,uVar6,PTR___sypN_100995e88 + 8,uVar7);
          if ((*(long *)(IVar5 + 0x10) == 0) || (thunk_FUN_1001a2e90(lVar4), (uVar6 & 1) == 0)) {
            _swift_bridgeObjectRelease(IVar5);
          }
          else {
            FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar4 * 0x20,local_80);
            _swift_bridgeObjectRelease(IVar5);
            uVar10 = 0;
            FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
            piVar9 = &local_88;
            _swift_dynamicCast(piVar9,local_80,PTR___sypN_100995e88 + 8,uVar10,6);
            if (((ulong)piVar9 & 1) != 0) {
              IVar5 = _objc_msgSend(CONCAT44(uStack_84,local_88),"unsignedIntValue");
              iVar1 = (int)IVar5;
              goto joined_r0x0001004054cc;
            }
          }
          if ((int)param_1 == 0) goto LAB_100405608;
        }
        else {
          FUN_10003e8bc(*(long *)(IVar5 + 0x38) + lVar8 * 0x20,local_80);
          _swift_bridgeObjectRelease(IVar5);
          piVar9 = &local_88;
          _swift_dynamicCast(piVar9,local_80,PTR___sypN_100995e88 + 8,PTR___ss6UInt32VN_100995dc0,6)
          ;
          iVar1 = local_88;
          if (((ulong)piVar9 & 1) == 0) goto LAB_1004054dc;
joined_r0x0001004054cc:
          if (iVar1 == (int)param_1) {
LAB_100405608:
            local_80[0] = uVar13;
            __ss23CustomStringConvertibleP11descriptionSSvgTj
                      (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
            return;
          }
        }
        uVar3 = uVar13 + 1;
        if (SCARRY8(uVar13,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10040562c);
          (*pcVar2)();
        }
        uVar13 = uVar13 + 1;
      } while (uVar3 != uVar12);
    }
  }
  return;
}

