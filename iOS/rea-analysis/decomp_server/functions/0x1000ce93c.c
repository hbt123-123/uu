// rea decompile_all
// name: FUN_1000ce93c
// address: 0x1000ce93c
// body: available
// range: 0x1000ce93c-0x1000cf0cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000cf0a8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001000cf0ac) */

void FUN_1000ce93c(undefined8 *param_1,undefined *param_2,undefined8 param_3,undefined8 param_4)

{
  ulong uVar1;
  ID *pIVar2;
  undefined8 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined1 uVar12;
  long lVar13;
  long extraout_x8;
  long lVar14;
  long extraout_x12;
  long extraout_x12_00;
  ID IVar15;
  ulong uVar16;
  long unaff_x20;
  undefined8 uVar17;
  undefined *puVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  long lVar22;
  undefined1 auStack_160 [16];
  undefined8 auStack_150 [4];
  ID local_130;
  undefined8 *local_128;
  long local_120;
  undefined *local_118;
  undefined8 local_110;
  long local_108;
  code *local_100;
  ulong local_b8;
  long local_b0;
  char local_9f;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined *local_98;
  undefined8 uStack_90;
  undefined *local_88;
  undefined8 uStack_80;
  undefined1 local_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(uVar1 - 8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar14 = (long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar21 = lVar14 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar22 = uVar21 - extraout_x12_00;
  local_9f = '\0';
  pIVar2 = (ID *)(unaff_x20 + 0x10);
  FUN_10003f030(pIVar2,*(undefined8 *)(unaff_x20 + 0x28));
  IVar15 = *pIVar2;
  puVar18 = param_2;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_2,param_3);
  IVar15 = _objc_msgSend(IVar15,"fileExistsAtPath:isDirectory:",puVar18,&local_9f);
  if ((int)IVar15 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined **)(lVar22 + -0x10) = param_2;
    *(undefined8 *)(lVar22 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000d2ab4,lVar22 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                  0xd000000000000022,0x8000000100886240,0xea,0);
    _swift_bridgeObjectRetain(param_3);
    puVar18 = (undefined *)0x0;
    uVar17 = 0;
    local_78 = 0;
  }
  else if (local_9f == '\x01') {
    __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(lVar22,param_2,param_3,1);
    pIVar2 = (ID *)(unaff_x20 + 0x10);
    FUN_10003f030(pIVar2,*(undefined8 *)(unaff_x20 + 0x28));
    puVar18 = &DAT_100a76708;
    FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
    _swift_allocObject();
    puVar4 = PTR__NSURLIsDirectoryKey_100995378;
    *(undefined8 *)(puVar18 + 0x18) = 6;
    *(undefined8 *)(puVar18 + 0x10) = 3;
    uVar17 = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
    *(undefined8 *)(puVar18 + 0x20) = *(undefined8 *)puVar4;
    *(undefined8 *)(puVar18 + 0x28) = uVar17;
    uVar17 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
    *(undefined8 *)(puVar18 + 0x30) = uVar17;
    IVar15 = *pIVar2;
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(uVar17);
    uVar3 = 0;
    FUN_10000603c(0);
    puVar4 = puVar18;
    __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(puVar18,uVar3);
    local_98 = (undefined *)0x0;
    IVar15 = _objc_msgSend(IVar15,
                           "contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:",
                           uVar17,puVar4,param_4,&local_98);
    if (IVar15 != 0) {
      local_120 = lVar22;
      local_118 = param_2;
      local_110 = param_3;
      __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar15,uVar1);
      _swift_bridgeObjectRelease(puVar18);
      local_b0 = *(long *)(IVar15 + 0x10);
      if (local_b0 == 0) {
        _swift_bridgeObjectRelease(IVar15);
        puVar18 = PTR___swiftEmptyArrayStorage_100995ea0;
      }
      else {
        local_98 = PTR___swiftEmptyArrayStorage_100995ea0;
        local_128 = param_1;
        FUN_10006fe38(0,local_b0,0);
        lVar22 = IVar15 + ((ulong)*(byte *)(lVar13 + 0x50) + 0x20 &
                          ((ulong)*(byte *)(lVar13 + 0x50) ^ 0xffffffffffffffff));
        local_108 = *(long *)(lVar13 + 0x48);
        local_100 = *(code **)(lVar13 + 0x10);
        local_130 = IVar15;
        while( true ) {
          puVar18 = local_98;
          local_b0 = local_b0 + -1;
          lVar9 = lVar22;
          (*local_100)(uVar21,lVar22,uVar1);
          uVar5 = uVar21;
          FUN_1000d15e4();
          if ((uVar5 & 1) == 0) {
            uVar6 = uVar21;
            FUN_1000d1878();
            local_b8 = uVar6;
          }
          else {
            local_b8 = 0;
            uVar6 = uVar5;
          }
          __s10Foundation3URLV17lastPathComponentSSvg();
          uVar7 = uVar6;
          lVar10 = lVar9;
          __s10Foundation3URLV016standardizedFileB0ACvg(lVar14);
          __s10Foundation3URLV4pathSSvg();
          pcVar19 = *(code **)(lVar13 + 8);
          uVar11 = uVar1;
          (*pcVar19)(lVar14);
          uVar8 = uVar21;
          FUN_1000d1b9c();
          if ((uVar5 & 1) == 0) {
            uVar16 = uVar8;
            __s10Foundation3URLV13pathExtensionSSvg();
            uVar20 = uVar11;
            __sSS10lowercasedSSyF();
            _swift_bridgeObjectRelease(uVar11);
            uVar11 = uVar16 & 0xffffffffffff;
            if ((uVar20 & 0x2000000000000000) != 0) {
              uVar11 = uVar20 >> 0x38 & 0xf;
            }
            if (uVar11 == 0) {
              _swift_bridgeObjectRelease(uVar20);
              uVar20 = 0xe400000000000000;
              uVar16 = 0x61746164;
            }
          }
          else {
            uVar20 = 0xe600000000000000;
            uVar16 = 0x7265646c6f66;
          }
          (*pcVar19)(uVar21,uVar1);
          uVar11 = *(ulong *)(puVar18 + 0x10);
          local_98 = puVar18;
          if (*(ulong *)(puVar18 + 0x18) >> 1 <= uVar11) {
            FUN_10006fe38(1 < *(ulong *)(puVar18 + 0x18),uVar11 + 1,1);
          }
          puVar18 = local_98;
          *(ulong *)(local_98 + 0x10) = uVar11 + 1;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x20) = uVar6;
          *(long *)(local_98 + uVar11 * 0x48 + 0x28) = lVar9;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x30) = uVar7;
          *(long *)(local_98 + uVar11 * 0x48 + 0x38) = lVar10;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x40) = local_b8;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x48) = uVar8;
          local_98[uVar11 * 0x48 + 0x50] = (byte)uVar5 & 1;
          local_98[uVar11 * 0x48 + 0x51] = 0;
          *(undefined4 *)(local_98 + uVar11 * 0x48 + 0x52) = local_9e;
          *(undefined2 *)(local_98 + uVar11 * 0x48 + 0x56) = local_9a;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x58) = uVar16;
          *(ulong *)(local_98 + uVar11 * 0x48 + 0x60) = uVar20;
          if (local_b0 == 0) break;
          lVar22 = lVar22 + local_108;
        }
        _swift_bridgeObjectRelease(local_130);
        param_1 = local_128;
      }
      local_98 = puVar18;
      _swift_retain_n(unaff_x20,2);
      _swift_bridgeObjectRetain(puVar18);
      uVar17 = 0;
      FUN_1000d3510(&local_98,unaff_x20);
      _swift_bridgeObjectRelease(puVar18);
      _swift_release(unaff_x20);
      puVar18 = local_98;
      (**(code **)(lVar13 + 8))(local_120,uVar1);
      _swift_release(unaff_x20);
      param_3 = local_110;
      _swift_bridgeObjectRetain(local_110);
      local_78 = 0;
      uVar12 = 0;
      param_2 = local_118;
      goto LAB_1000cefcc;
    }
    puVar4 = local_98;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    (**(code **)(lVar13 + 8))(lVar22,uVar1);
    _swift_bridgeObjectRelease(puVar18);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined **)(lVar22 + -0x20) = param_2;
    *(undefined8 *)(lVar22 + -0x18) = param_3;
    *(undefined **)(lVar22 + -0x10) = puVar4;
    FUN_1003fb4ec(FUN_1000d2ac4,lVar22 + -0x30,0xd0000000000000af,0x8000000100885ec0,
                  0xd000000000000022,0x8000000100886240,0x101,0);
    FUN_1000d35b0(&local_98,puVar4,param_2,param_3);
    param_2 = local_98;
    _swift_errorRelease(puVar4);
    puVar18 = local_88;
    uVar17 = uStack_80;
    param_3 = uStack_90;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined **)(lVar22 + -0x10) = param_2;
    *(undefined8 *)(lVar22 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000d2abc,lVar22 + -0x20,0xd0000000000000af,0x8000000100885ec0,
                  0xd000000000000022,0x8000000100886240,0xef,0);
    _swift_bridgeObjectRetain(param_3);
    puVar18 = (undefined *)0x0;
    uVar17 = 0;
    local_78 = 1;
  }
  uVar12 = 1;
LAB_1000cefcc:
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = puVar18;
  param_1[3] = uVar17;
  *(undefined1 *)(param_1 + 4) = local_78;
  *(undefined1 *)((long)param_1 + 0x21) = uVar12;
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

