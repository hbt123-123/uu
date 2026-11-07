// rea decompile_all
// name: FUN_1000d6364
// address: 0x1000d6364
// body: available
// range: 0x1000d6364-0x1000d684f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d684c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_1000d6364(undefined8 param_1,uint param_2,ID param_3)

{
  ulong uVar1;
  byte bVar2;
  long lVar3;
  ID IVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long extraout_x8;
  long lVar11;
  long extraout_x12;
  long extraout_x12_00;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  long lVar16;
  undefined1 auStack_f0 [16];
  undefined8 uStack_e0;
  byte abStack_d8 [8];
  long alStack_d0 [2];
  undefined1 auStack_c0 [8];
  ID local_b8;
  long local_b0;
  uint local_a4;
  ulong local_a0;
  long local_98;
  ID local_90;
  undefined1 *local_88;
  byte local_79 [9];
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar15 = *(long *)(lVar3 + -8);
  lVar12 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar15 + 0x40));
  local_88 = auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)(auStack_c0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  local_b0 = lVar11;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = lVar11 - extraout_x12_00;
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  local_70 = (undefined *)0x0;
  local_90 = param_3;
  IVar4 = _objc_msgSend(param_3,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:"
                        ,lVar12,0,0,&local_70);
  if (IVar4 == 0) {
    puVar6 = local_70;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    uVar9 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar9);
    *(undefined8 *)(lVar11 + -0x20) = param_1;
    *(byte *)(lVar11 + -0x18) = (byte)param_2 & 1;
    *(undefined **)(lVar11 + -0x10) = puVar6;
    FUN_1003fb4ec(FUN_1000d7a34,lVar11 + -0x30,0xd0000000000000a3,0x8000000100886660,
                  0xd00000000000003e,0x8000000100886710,0x175,0);
    _swift_errorRelease(puVar6);
    puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_a4 = param_2;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar4,lVar3);
    lVar12 = *(long *)(IVar4 + 0x10);
    if (lVar12 == 0) {
      _swift_bridgeObjectRelease();
      puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
      if ((local_a4 & 1) == 0) {
        puVar6 = &DAT_100a75a28;
        FUN_100004bb4(&DAT_100a75a28,&DAT_100809ad0);
        bVar2 = *(byte *)(lVar15 + 0x50);
        _swift_allocObject();
        *(undefined8 *)(puVar6 + 0x18) = 2;
        *(undefined8 *)(puVar6 + 0x10) = 1;
        (**(code **)(lVar15 + 0x10))
                  (puVar6 + ((ulong)bVar2 + 0x20 & ((ulong)bVar2 ^ 0xffffffffffffffff)),param_1,
                   lVar3);
      }
    }
    else {
      local_70 = PTR___swiftEmptyArrayStorage_100995ea0;
      local_a0 = (ulong)*(byte *)(lVar15 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar15 + 0x50) ^ 0xffffffffffffffff);
      lVar16 = IVar4 + local_a0;
      lVar13 = *(long *)(lVar15 + 0x48);
      pcVar14 = *(code **)(lVar15 + 0x10);
      local_b8 = IVar4;
      local_98 = lVar15;
      do {
        lVar5 = lVar11;
        lVar10 = lVar16;
        (*pcVar14)(lVar11,lVar16,lVar3);
        local_79[0] = 0;
        __s10Foundation3URLV4pathSSvg();
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
        _swift_bridgeObjectRelease(lVar10);
        IVar4 = _objc_msgSend(local_90,"fileExistsAtPath:isDirectory:",lVar5,local_79);
        if (((int)IVar4 == 0) || ((local_79[0] & 1) == 0)) {
          (*pcVar14)(local_88,lVar11,lVar3);
          puVar6 = local_70;
          puVar7 = local_70;
          _swift_isUniquelyReferenced_nonNull_native();
          puVar8 = puVar6;
          if (((ulong)puVar7 & 1) == 0) {
            puVar8 = (undefined *)0x0;
            FUN_100033f0c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
          }
          uVar1 = *(ulong *)(puVar8 + 0x10);
          puVar6 = puVar8;
          if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
            puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
            FUN_100033f0c(puVar6,uVar1 + 1,1,puVar8);
          }
          lVar15 = local_98;
          *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
          (**(code **)(local_98 + 0x20))(puVar6 + uVar1 * lVar13 + local_a0,local_88,lVar3);
          local_70 = puVar6;
        }
        else {
          if ((local_a4 & 1) == 0) {
            (*pcVar14)(local_b0,lVar11,lVar3);
            puVar6 = local_70;
            puVar7 = local_70;
            _swift_isUniquelyReferenced_nonNull_native();
            puVar8 = puVar6;
            if (((ulong)puVar7 & 1) == 0) {
              puVar8 = (undefined *)0x0;
              FUN_100033f0c(0,*(long *)(puVar6 + 0x10) + 1,1,puVar6);
            }
            uVar1 = *(ulong *)(puVar8 + 0x10);
            puVar6 = puVar8;
            if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
              puVar6 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
              FUN_100033f0c(puVar6,uVar1 + 1,1,puVar8);
            }
            lVar15 = local_98;
            *(ulong *)(puVar6 + 0x10) = uVar1 + 1;
            (**(code **)(local_98 + 0x20))(puVar6 + uVar1 * lVar13 + local_a0,local_b0,lVar3);
            local_70 = puVar6;
          }
          FUN_1000d6364(lVar11,local_a4 & 1,local_90);
          (*(code *)PTR____chkstk_darwin_100995498)();
          *(long *)(lVar11 + -0x10) = lVar11;
          FUN_10018be14(FUN_1000d7a44);
          FUN_10005f374();
        }
        (**(code **)(lVar15 + 8))(lVar11,lVar3);
        lVar16 = lVar16 + lVar13;
        lVar12 = lVar12 + -1;
      } while (lVar12 != 0);
      _swift_bridgeObjectRelease(local_b8);
      puVar6 = local_70;
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar6);
  }
  return;
}

