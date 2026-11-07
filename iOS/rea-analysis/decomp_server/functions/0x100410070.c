// rea decompile_all
// name: FUN_100410070
// address: 0x100410070
// body: available
// range: 0x100410070-0x100410513 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100410510 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x00010041032c) */
/* WARNING: Removing unreachable block (ram,0x000100410118) */

undefined * FUN_100410070(void)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  undefined **ppuVar6;
  undefined **ppuVar7;
  ID IVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined8 uVar11;
  undefined *puVar12;
  undefined **ppuVar13;
  ulong uVar14;
  undefined *puVar15;
  long unaff_x20;
  undefined *local_200 [2];
  undefined *local_1f0;
  undefined8 uStack_1e8;
  undefined8 uStack_1e0;
  undefined8 uStack_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 uStack_1b8;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 uStack_198;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined *local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined *local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined1 uStack_88;
  undefined7 uStack_87;
  undefined1 local_80;
  undefined7 uStack_7f;
  undefined1 uStack_78;
  long local_70;
  
  uVar14 = 0;
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  FUN_1000cc648();
  lVar3 = 0;
  __s10Foundation11JSONEncoderCMa();
  lVar4 = lVar3;
  _swift_allocObject();
  __s10Foundation11JSONEncoderCACycfc();
  uStack_e8 = *(undefined8 *)(unaff_x20 + 8);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x18);
  local_d8 = *(undefined8 *)(unaff_x20 + 0x20);
  local_f0 = (undefined *)CONCAT44(local_f0._4_4_,*(undefined4 *)(unaff_x20 + 4));
  lVar5 = lVar4;
  FUN_1004122cc();
  puVar15 = &DAT_1009bcda8;
  ppuVar6 = &local_f0;
  __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar6,&DAT_1009bcda8,lVar5);
  _swift_release(lVar4);
  ppuVar7 = ppuVar6;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar6,puVar15);
  local_f0 = (undefined *)0x0;
  IVar8 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     ppuVar7,0,&local_f0);
  if (IVar8 == 0) {
    puVar12 = local_f0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_f0);
    _swift_willThrow(0);
    FUN_100006cdc(ppuVar6,puVar15);
    _swift_errorRelease(puVar12);
    goto LAB_100410128;
  }
  __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_f0,IVar8);
  _swift_unknownObjectRelease(IVar8);
  puVar12 = &DAT_100a759d8;
  FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
  ppuVar7 = &local_1f0;
  _swift_dynamicCast(ppuVar7,&local_f0,PTR___sypN_100995e88 + 8,puVar12,6);
  puVar10 = local_1f0;
  if (((ulong)ppuVar7 & 1) == 0) {
    FUN_100006cdc(ppuVar6,puVar15);
    goto LAB_100410128;
  }
  puVar9 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native(puVar2);
  local_f0 = puVar2;
  FUN_100412328(puVar10,FUN_10023fa68,0,puVar9,&local_f0);
  _swift_bridgeObjectRelease(puVar10);
  puVar2 = local_f0;
  uStack_a8 = *(undefined8 *)(unaff_x20 + 0x70);
  local_b0 = *(undefined8 *)(unaff_x20 + 0x68);
  uStack_98 = *(undefined8 *)(unaff_x20 + 0x80);
  uStack_a0 = *(undefined8 *)(unaff_x20 + 0x78);
  local_90 = *(undefined8 *)(unaff_x20 + 0x88);
  uStack_88 = (undefined1)*(undefined8 *)(unaff_x20 + 0x90);
  uStack_7f = (undefined7)*(undefined8 *)(unaff_x20 + 0x99);
  uStack_78 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x99) >> 0x38);
  uStack_87 = (undefined7)*(undefined8 *)(unaff_x20 + 0x91);
  local_80 = (undefined1)((ulong)*(undefined8 *)(unaff_x20 + 0x91) >> 0x38);
  uStack_e8 = *(undefined8 *)(unaff_x20 + 0x30);
  local_f0 = *(undefined **)(unaff_x20 + 0x28);
  local_d8 = *(undefined8 *)(unaff_x20 + 0x40);
  local_e0 = *(undefined8 *)(unaff_x20 + 0x38);
  uStack_c8 = *(undefined8 *)(unaff_x20 + 0x50);
  local_d0 = *(undefined8 *)(unaff_x20 + 0x48);
  uStack_b8 = *(undefined8 *)(unaff_x20 + 0x60);
  uStack_c0 = *(undefined8 *)(unaff_x20 + 0x58);
  iVar1 = (int)&local_f0;
  FUN_10041230c();
  if (iVar1 != 1) {
    uStack_1a8 = uStack_a8;
    local_1b0 = local_b0;
    uStack_198 = uStack_98;
    uStack_1a0 = uStack_a0;
    uStack_188 = CONCAT71(uStack_87,uStack_88);
    local_190 = local_90;
    local_180 = CONCAT71(uStack_7f,local_80);
    uStack_1e8 = uStack_e8;
    local_1f0 = local_f0;
    uStack_1d8 = local_d8;
    uStack_1e0 = local_e0;
    uStack_1c8 = uStack_c8;
    local_1d0 = local_d0;
    uStack_1b8 = uStack_b8;
    uStack_1c0 = uStack_c0;
    _swift_allocObject(lVar3,*(undefined4 *)(lVar3 + 0x30),*(undefined2 *)(lVar3 + 0x34));
    __s10Foundation11JSONEncoderCACycfc();
    uStack_128 = uStack_1a8;
    local_130 = local_1b0;
    uStack_118 = uStack_198;
    uStack_120 = uStack_1a0;
    uStack_108 = uStack_188;
    local_110 = local_190;
    local_100 = local_180;
    uStack_168 = uStack_1e8;
    local_170 = local_1f0;
    uStack_158 = uStack_1d8;
    uStack_160 = uStack_1e0;
    uStack_148 = uStack_1c8;
    local_150 = local_1d0;
    uStack_138 = uStack_1b8;
    uStack_140 = uStack_1c0;
    lVar4 = lVar3;
    FUN_100412660();
    puVar10 = &DAT_1009bd2b0;
    ppuVar7 = &local_170;
    __s10Foundation11JSONEncoderC6encodeyAA4DataVxKSERzlFTj(ppuVar7,&DAT_1009bd2b0,lVar4);
    _swift_release(lVar3);
    ppuVar13 = ppuVar7;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(ppuVar7,puVar10);
    local_170 = (undefined *)0x0;
    IVar8 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                       ppuVar13,0,&local_170);
    if (IVar8 == 0) {
      puVar12 = local_170;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_170);
      _swift_willThrow(0);
      FUN_100006cdc(ppuVar7,puVar10);
      _swift_errorRelease(puVar12);
LAB_100410340:
      puVar12 = PTR___swiftEmptyArrayStorage_100995ea0;
      FUN_1000cc648(PTR___swiftEmptyArrayStorage_100995ea0);
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_170,IVar8);
      FUN_100006cdc(ppuVar7,puVar10);
      _swift_unknownObjectRelease(IVar8);
      _swift_dynamicCast(local_200,&local_170,PTR___sypN_100995e88 + 8,puVar12,6);
      puVar12 = local_200[0];
      if ((uVar14 & 1) == 0) goto LAB_100410340;
    }
    puVar10 = puVar2;
    _swift_isUniquelyReferenced_nonNull_native(puVar2);
    local_170 = puVar2;
    FUN_100412328(puVar12,FUN_10023fa68,0,puVar10,&local_170);
    _swift_bridgeObjectRelease(puVar12);
    puVar2 = local_170;
  }
  uVar11 = *(undefined8 *)(unaff_x20 + 0xb0);
  FUN_100183520(uVar11);
  puVar12 = puVar2;
  _swift_isUniquelyReferenced_nonNull_native(puVar2);
  local_170 = puVar2;
  FUN_100412328(uVar11,FUN_10023fa68,0,puVar12,&local_170);
  _swift_bridgeObjectRelease(uVar11);
  FUN_100006cdc(ppuVar6,puVar15);
  puVar2 = local_170;
LAB_100410128:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return puVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

