// rea decompile_all
// name: FUN_1000c7424
// address: 0x1000c7424
// body: available
// range: 0x1000c7424-0x1000c776b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Type propagation algorithm not settling */

void FUN_1000c7424(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  undefined *puVar1;
  ID IVar2;
  long lVar3;
  undefined *puVar4;
  ID *pIVar5;
  undefined8 uVar6;
  ulong uVar7;
  undefined1 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  ID local_68 [5];
  
  lVar3 = *(long *)PTR__kCGWindowBounds_100995570;
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(lVar3);
  if (*(long *)(param_3 + 0x10) == 0) {
LAB_1000c76a4:
    local_68[2] = 0;
    local_68[1] = 0;
    local_68[4] = 0;
    local_68[3] = 0;
    _swift_bridgeObjectRelease(param_4);
LAB_1000c76b4:
    FUN_1000c776c(local_68 + 1);
  }
  else {
    _swift_bridgeObjectRetain(param_3);
    uVar7 = param_4;
    FUN_1001a2c70(lVar3);
    if ((uVar7 & 1) == 0) {
      _swift_bridgeObjectRelease(param_3);
      goto LAB_1000c76a4;
    }
    FUN_10003e8bc(*(long *)(param_3 + 0x38) + lVar3 * 0x20,local_68 + 1);
    _swift_bridgeObjectRelease(param_4);
    _swift_bridgeObjectRelease(param_3);
    if (local_68[4] == 0) goto LAB_1000c76b4;
    puVar4 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    puVar1 = PTR___sypN_100995e88;
    pIVar5 = local_68;
    _swift_dynamicCast(pIVar5,local_68 + 1,PTR___sypN_100995e88 + 8,puVar4,6);
    IVar2 = local_68[0];
    if (((ulong)pIVar5 & 1) != 0) {
      if (*(long *)(local_68[0] + 0x10) != 0) {
        _swift_bridgeObjectRetain(local_68[0]);
        lVar3 = 0x58;
        uVar7 = 0;
        FUN_1001a2c70(0x58);
        if ((uVar7 & 1) == 0) {
LAB_1000c76e8:
          _swift_bridgeObjectRelease(IVar2);
        }
        else {
          FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar3 * 0x20,local_68 + 1);
          _swift_bridgeObjectRelease(IVar2);
          uVar6 = 0;
          FUN_10004003c(0,&DAT_100a77030,&PTR__OBJC_CLASS___NSNumber_100a65780);
          pIVar5 = local_68;
          _swift_dynamicCast(pIVar5,local_68 + 1,puVar1 + 8,uVar6,6);
          if (((ulong)pIVar5 & 1) != 0) {
            _objc_msgSend(local_68[0],"doubleValue");
            if (*(long *)(IVar2 + 0x10) != 0) {
              uVar9 = param_2;
              _swift_bridgeObjectRetain(IVar2);
              lVar3 = 0x59;
              uVar7 = 0;
              FUN_1001a2c70(0x59);
              if ((uVar7 & 1) == 0) goto LAB_1000c76e8;
              FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar3 * 0x20,local_68 + 1);
              _swift_bridgeObjectRelease(IVar2);
              pIVar5 = local_68;
              _swift_dynamicCast(pIVar5,local_68 + 1,puVar1 + 8,uVar6,6);
              if (((ulong)pIVar5 & 1) != 0) {
                _objc_msgSend(local_68[0],"doubleValue");
                if (*(long *)(IVar2 + 0x10) != 0) {
                  uVar10 = uVar9;
                  _swift_bridgeObjectRetain(IVar2);
                  lVar3 = 0x6874646957;
                  uVar7 = 0;
                  FUN_1001a2c70(0x6874646957);
                  if ((uVar7 & 1) == 0) goto LAB_1000c76e8;
                  FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar3 * 0x20,local_68 + 1);
                  _swift_bridgeObjectRelease(IVar2);
                  pIVar5 = local_68;
                  _swift_dynamicCast(pIVar5,local_68 + 1,puVar1 + 8,uVar6,6);
                  if (((ulong)pIVar5 & 1) == 0) goto LAB_1000c76f0;
                  _objc_msgSend(local_68[0],"doubleValue");
                  if (*(long *)(IVar2 + 0x10) == 0) {
LAB_1000c7704:
                    uVar11 = 0;
                    local_68[2] = 0;
                    local_68[1] = 0;
                    local_68[4] = 0;
                    local_68[3] = 0;
                  }
                  else {
                    uVar11 = uVar10;
                    _swift_bridgeObjectRetain(IVar2);
                    lVar3 = 0x746867696548;
                    uVar7 = 0;
                    FUN_1001a2c70(0x746867696548);
                    if ((uVar7 & 1) == 0) {
                      _swift_bridgeObjectRelease(IVar2);
                      goto LAB_1000c7704;
                    }
                    FUN_10003e8bc(*(long *)(IVar2 + 0x38) + lVar3 * 0x20,local_68 + 1);
                    _swift_bridgeObjectRelease(IVar2);
                  }
                  _swift_bridgeObjectRelease(IVar2);
                  if (local_68[4] == 0) goto LAB_1000c76b4;
                  pIVar5 = local_68;
                  _swift_dynamicCast(pIVar5,local_68 + 1,puVar1 + 8,uVar6,6);
                  if (((ulong)pIVar5 & 1) != 0) {
                    _objc_msgSend(local_68[0],"doubleValue");
                    uVar8 = 0;
                    goto LAB_1000c76c8;
                  }
                  goto LAB_1000c76bc;
                }
              }
            }
          }
        }
      }
LAB_1000c76f0:
      _swift_bridgeObjectRelease(IVar2);
    }
  }
LAB_1000c76bc:
  param_2 = 0;
  uVar9 = 0;
  uVar8 = 1;
  uVar10 = 0;
  uVar11 = 0;
LAB_1000c76c8:
  param_1[1] = uVar9;
  *param_1 = param_2;
  param_1[3] = uVar11;
  param_1[2] = uVar10;
  *(undefined1 *)(param_1 + 4) = uVar8;
  return;
}

