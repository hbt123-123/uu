// rea decompile_all
// name: FUN_100401b34
// address: 0x100401b34
// body: available
// range: 0x100401b34-0x10040223b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100402224 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Removing unreachable block (ram,0x000100402228) */

undefined * FUN_100401b34(undefined8 param_1,ulong param_2,long param_3,ID param_4)

{
  ulong uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ID IVar8;
  long lVar9;
  ulong uVar10;
  undefined *puVar11;
  ID IVar12;
  ulong uVar13;
  long lVar14;
  char *pcVar15;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x12;
  code *pcVar16;
  long lVar17;
  long lVar18;
  undefined8 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined **ppuVar22;
  undefined8 auStack_180 [2];
  undefined1 auStack_170 [16];
  long alStack_160 [2];
  undefined1 auStack_150 [16];
  undefined8 auStack_140 [2];
  undefined8 local_130;
  ID local_128;
  undefined8 local_120;
  undefined **local_118;
  long local_110;
  undefined *local_108;
  ulong local_100;
  long local_f8;
  long local_f0;
  ulong local_e8;
  long local_e0;
  long local_d8;
  undefined *local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = 0;
  local_100 = param_2;
  local_e0 = param_3;
  FUN_1005cac3c();
  local_110 = *(long *)(uVar1 - 8);
  local_e8 = uVar1;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_110 + 0x40));
  puVar3 = (undefined *)((long)&local_130 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  lVar2 = 0;
  local_108 = puVar3;
  __s10Foundation3URLVMa();
  lVar17 = *(long *)(lVar2 + -8);
  local_d8 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar17 + 0x40));
  lVar2 = (long)puVar3 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  local_f0 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar2 = lVar2 - extraout_x12;
  puVar3 = &DAT_100a76708;
  local_f8 = lVar2;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  *(undefined8 *)(puVar3 + 0x18) = 4;
  *(undefined8 *)(puVar3 + 0x10) = 2;
  puVar19 = (undefined8 *)(puVar3 + 0x20);
  *puVar19 = *(undefined8 *)PTR__NSURLContentModificationDateKey_100995358;
  *(undefined8 *)(puVar3 + 0x28) = *(undefined8 *)PTR__NSURLCreationDateKey_100995360;
  puVar4 = puVar3;
  FUN_100128084();
  _swift_setDeallocating(puVar3);
  uVar5 = 0;
  FUN_10000603c();
  _swift_arrayDestroy(puVar19,2,uVar5);
  __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF();
  ppuVar22 = *(undefined ***)(puVar4 + 0x10);
  ppuVar6 = (undefined **)PTR___swiftEmptyArrayStorage_100995ea0;
  if (ppuVar22 != (undefined **)0x0) {
    ppuVar6 = ppuVar22;
    local_130 = uVar5;
    local_128 = param_4;
    local_120 = param_1;
    FUN_10040a2a8(ppuVar22,0);
    ppuVar7 = &local_c8;
    FUN_10040ba18(ppuVar7,ppuVar6 + 4,ppuVar22,puVar4);
    local_118 = ppuVar7;
    _swift_bridgeObjectRetain();
    FUN_10003f638(local_c8,uStack_c0,local_b8,uStack_b0,local_a8);
    uVar5 = local_130;
    param_1 = local_120;
    param_4 = local_128;
    if (local_118 != ppuVar22) {
                    /* WARNING: Does not return */
      pcVar16 = (code *)SoftwareBreakpoint(1,0x10040220c);
      (*pcVar16)();
    }
  }
  ppuVar22 = ppuVar6;
  __sSa10FoundationE19_bridgeToObjectiveCSo7NSArrayCyF(ppuVar6,uVar5);
  _swift_release(ppuVar6);
  local_c8 = (undefined *)0x0;
  IVar8 = _objc_msgSend(param_4,"contentsOfDirectoryAtURL:includingPropertiesForKeys:options:error:"
                        ,puVar19,ppuVar22,4,&local_c8);
  puVar3 = local_c8;
  uVar1 = local_100;
  if (IVar8 == 0) {
    _swift_bridgeObjectRelease(puVar4);
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
    _swift_willThrow(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined8 *)(lVar2 + -0x10) = param_1;
    *(undefined **)(lVar2 + -8) = puVar3;
    puVar4 = local_108;
    lVar17 = local_110;
    (**(code **)(local_110 + 0x68))(local_108,4,local_e8);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar8 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar9 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar11 = puVar4;
      FUN_1005cc2b8();
      if (((ulong)puVar11 & 1) == 0) {
        _swift_release(lVar9);
      }
      else {
        IVar12 = 0xd000000000000081;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000081,0x80000001008b5420)
        ;
        pcVar15 = "lastPathComponent";
        IVar12 = _objc_msgSend(IVar12,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar12);
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        *(code **)(lVar2 + -0x30) = FUN_1004032e8;
        *(long *)(lVar2 + -0x28) = lVar2 + -0x20;
        *(undefined8 *)(lVar2 + -0x50) = 0x80000001008b5720;
        *(undefined8 *)(lVar2 + -0x48) = 0x133;
        puVar4 = local_108;
        FUN_1005cc010(thunk_FUN_1003a85e4,lVar2 + -0x40,local_108,0x65746f6d65525555,
                      0xe800000000000000,IVar12,pcVar15,0xd00000000000002b);
        _swift_release(lVar9);
        _swift_bridgeObjectRelease(pcVar15);
      }
    }
    _objc_msgSend(IVar8,"unlock");
    (**(code **)(lVar17 + 8))(puVar4,local_e8);
    _swift_errorRelease(puVar3);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_108 = puVar4;
    __sSa10FoundationE36_unconditionallyBridgeFromObjectiveCySayxGSo7NSArrayCSgFZ(IVar8,local_d8);
    local_e8 = *(ulong *)(IVar8 + 0x10);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (local_e8 != 0) {
      uVar21 = 0;
      lVar2 = local_f8;
      do {
        if (*(ulong *)(IVar8 + 0x10) <= uVar21) {
                    /* WARNING: Does not return */
          pcVar16 = (code *)SoftwareBreakpoint(1,0x100402208);
          (*pcVar16)();
        }
        uVar20 = (ulong)*(byte *)(lVar17 + 0x50) + 0x20 &
                 ((ulong)*(byte *)(lVar17 + 0x50) ^ 0xffffffffffffffff);
        lVar18 = *(long *)(lVar17 + 0x48);
        uVar13 = IVar8 + uVar20 + lVar18 * uVar21;
        lVar9 = lVar2;
        (**(code **)(lVar17 + 0x10))(lVar2,uVar13,local_d8);
        __s10Foundation3URLV17lastPathComponentSSvg();
        uVar10 = uVar1;
        lVar14 = local_e0;
        __sSS9hasPrefixySbSSF(uVar1,local_e0,lVar9,uVar13);
        _swift_bridgeObjectRelease();
        if ((uVar10 & 1) == 0) {
LAB_100401e04:
          (**(code **)(lVar17 + 8))(lVar2,local_d8);
        }
        else {
          __s10Foundation3URLV13pathExtensionSSvg();
          if ((uVar13 == 0x676f6c78) && (lVar14 == -0x1c00000000000000)) {
            _swift_bridgeObjectRelease(0xe400000000000000);
          }
          else {
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      ();
            _swift_bridgeObjectRelease(lVar14);
            lVar2 = local_f8;
            if ((uVar13 & 1) == 0) goto LAB_100401e04;
          }
          lVar2 = local_f8;
          pcVar16 = *(code **)(lVar17 + 0x20);
          (*pcVar16)(local_f0,local_f8,local_d8);
          puVar3 = puVar4;
          _swift_isUniquelyReferenced_nonNull_native();
          local_c8 = puVar4;
          if (((ulong)puVar3 & 1) == 0) {
            FUN_10006fcb0(0,*(long *)(puVar4 + 0x10) + 1,1);
            lVar2 = local_f8;
          }
          uVar1 = *(ulong *)(local_c8 + 0x10);
          if (*(ulong *)(local_c8 + 0x18) >> 1 <= uVar1) {
            FUN_10006fcb0(1 < *(ulong *)(local_c8 + 0x18),uVar1 + 1,1);
            lVar2 = local_f8;
          }
          puVar4 = local_c8;
          *(ulong *)(local_c8 + 0x10) = uVar1 + 1;
          (*pcVar16)(local_c8 + uVar1 * lVar18 + uVar20,local_f0,local_d8);
          uVar1 = local_100;
        }
        uVar21 = uVar21 + 1;
      } while (local_e8 != uVar21);
    }
    _swift_bridgeObjectRelease(IVar8);
    puVar11 = local_108;
    local_c8 = puVar4;
    _swift_bridgeObjectRetain(local_108);
    _swift_retain(puVar4);
    FUN_1004010bc(&local_c8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    puVar3 = local_c8;
    _swift_release(puVar4);
    _swift_bridgeObjectRelease(puVar11);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return puVar3;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

