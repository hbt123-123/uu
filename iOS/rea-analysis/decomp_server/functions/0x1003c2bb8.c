// rea decompile_all
// name: FUN_1003c2bb8
// address: 0x1003c2bb8
// body: available
// range: 0x1003c2bb8-0x1003c407b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003c35b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x0001003c2f0c) */

void FUN_1003c2bb8(ulong *param_1,ulong param_2,ulong param_3,int *param_4,ulong param_5,
                  int *param_6,int *param_7,int *param_8,ulong param_9,int param_10)

{
  ulong *puVar1;
  long *plVar2;
  uint uVar3;
  undefined *puVar4;
  ulong *puVar5;
  long lVar6;
  ID IVar7;
  int *piVar8;
  long lVar9;
  undefined8 *puVar10;
  undefined8 *puVar11;
  int *piVar12;
  int *piVar13;
  undefined *puVar14;
  long lVar15;
  ulong uVar16;
  long lVar17;
  int iVar18;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  int *piVar19;
  long extraout_x8_02;
  long extraout_x8_03;
  code *pcVar20;
  long extraout_x12;
  undefined8 uVar21;
  ulong uVar22;
  long unaff_x21;
  long lVar23;
  long lVar24;
  long lVar25;
  double dVar26;
  int aiStack_1a0 [2];
  undefined *local_198;
  int *local_190;
  long local_188;
  ulong local_180;
  int *local_178;
  ulong local_170;
  int *local_168;
  long local_160;
  int *local_158;
  int *local_150;
  long local_148;
  ID local_140;
  int *local_138;
  ulong local_130;
  long local_128;
  long local_120;
  long local_118;
  ulong *local_110;
  int *local_108;
  ulong local_100;
  long local_f8;
  int *local_f0;
  int local_e0;
  undefined4 uStack_dc;
  int *piStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  long local_b8;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar6 = 0;
  local_170 = param_5;
  local_168 = param_6;
  local_158 = param_7;
  local_150 = param_8;
  local_130 = param_9;
  local_110 = param_1;
  local_108 = param_4;
  local_100 = param_3;
  __s10Foundation4DateVMa();
  local_120 = *(long *)(lVar6 + -8);
  local_118 = lVar6;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_120 + 0x40));
  piVar8 = (int *)((long)aiStack_1a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0));
  local_138 = piVar8;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar6 = (long)piVar8 - extraout_x12;
  IVar7 = 0;
  local_128 = lVar6;
  __s10Foundation6LocaleVMa();
  local_148 = *(long *)(IVar7 - 8);
  local_140 = IVar7;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_148 + 0x40));
  lVar6 = lVar6 - (extraout_x8_00 + 0xfU & 0xfffffffffffffff0);
  puVar14 = &DAT_100a79890;
  local_160 = lVar6;
  FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar14 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  piVar19 = (int *)(lVar6 - extraout_x8_01);
  piVar8 = (int *)0x0;
  local_178 = piVar19;
  __s10Foundation3URLVMa();
  local_f8 = *(long *)(piVar8 + -2);
  local_f0 = piVar8;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_f8 + 0x40));
  lVar23 = (long)piVar19 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  lVar9 = 0;
  __s10Foundation17URLResourceValuesVMa();
  lVar24 = *(long *)(lVar9 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar24 + 0x40));
  lVar25 = lVar23 - (extraout_x8_03 + 0xfU & 0xfffffffffffffff0);
  puVar10 = (undefined8 *)&DAT_100a76708;
  FUN_100004bb4(&DAT_100a76708,&DAT_10080c350);
  _swift_initStackObject();
  dVar26 = 1.48219693752374e-323;
  puVar10[3] = 6;
  puVar10[2] = 3;
  puVar10[4] = *(undefined8 *)PTR__NSURLIsRegularFileKey_100995380;
  uVar21 = *(undefined8 *)PTR__NSURLFileSizeKey_100995368;
  puVar10[5] = *(undefined8 *)PTR__NSURLIsSymbolicLinkKey_100995388;
  puVar10[6] = uVar21;
  puVar11 = puVar10;
  FUN_100128084();
  _swift_setDeallocating(puVar10);
  uVar21 = 0;
  FUN_10000603c(0);
  uVar16 = 3;
  _swift_arrayDestroy(puVar10 + 4,3,uVar21);
  __s10Foundation3URLV14resourceValues7forKeysAA011URLResourceD0VShySo16NSURLResourceKeyaG_tKF
            (lVar25,puVar11);
  _swift_bridgeObjectRelease();
  piVar8 = local_f0;
  lVar6 = local_f8;
  if (unaff_x21 != 0) goto LAB_1003c2f7c;
  __s10Foundation17URLResourceValuesV13isRegularFileSbSgvg();
  if ((((((uint)puVar11 & 0xff) == 2) || (((ulong)puVar11 & 1) == 0)) ||
      ((__s10Foundation17URLResourceValuesV14isSymbolicLinkSbSgvg(), ((uint)puVar11 & 0xff) != 2 &&
       (((ulong)puVar11 & 1) != 0)))) ||
     ((__s10Foundation17URLResourceValuesV8fileSizeSiSgvg(), (uVar16 & 1) != 0 ||
      (0x500000 < (long)puVar11)))) {
    FUN_1003d111c();
    _swift_allocError(&DAT_1009b9720,puVar11,0,0);
    *puVar11 = 0x100000000000001e;
    puVar11[1] = 0x80000001008b4380;
    _swift_willThrow();
LAB_1003c2f70:
    pcVar20 = *(code **)(lVar24 + 8);
  }
  else {
    FUN_10004003c(0,&DAT_100a77d00,&PTR__OBJC_CLASS___NSFileHandle_100a658e8);
    (**(code **)(lVar6 + 0x10))(lVar23,param_2,piVar8);
    FUN_1001877f4();
    piVar19 = (int *)0x500001;
    __sSo12NSFileHandleC10FoundationE4read9upToCountAC4DataVSgSi_tKF();
    piVar8 = (int *)0x0;
    if (param_2 >> 0x3c < 0xf) {
      piVar8 = piVar19;
    }
    uVar16 = 0xc000000000000000;
    if (param_2 >> 0x3c < 0xf) {
      uVar16 = param_2;
    }
    uVar3 = (uint)(uVar16 >> 0x20);
    local_f8 = lVar25;
    if (1 < uVar3 >> 0x1e) {
      if (uVar3 >> 0x1e != 2) goto LAB_1003c3014;
      lVar6 = *(long *)(piVar8 + 6) - *(long *)(piVar8 + 4);
      if (SBORROW8(*(long *)(piVar8 + 6),*(long *)(piVar8 + 4))) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1003c35d4);
        (*pcVar20)();
      }
LAB_1003c300c:
      piVar13 = piVar8;
      if (lVar6 < 0x500001) goto LAB_1003c3014;
LAB_1003c37cc:
      FUN_1003d111c();
      _swift_allocError(&DAT_1009b9720,piVar19,0,0);
      piVar19[0] = 0x36;
      piVar19[1] = 0x10000000;
      piVar19[2] = 0x8b43a0;
      piVar19[3] = -0x7fffffff;
      _swift_willThrow();
      FUN_100006cdc(piVar13,uVar16);
      FUN_1000e6e58(lVar23);
      lVar25 = local_f8;
      goto LAB_1003c2f70;
    }
    if (uVar3 >> 0x1e != 0) {
      iVar18 = (int)((ulong)piVar8 >> 0x20);
      if (SBORROW4(iVar18,(int)piVar8)) {
                    /* WARNING: Does not return */
        pcVar20 = (code *)SoftwareBreakpoint(1,0x1003c35d0);
        (*pcVar20)();
      }
      lVar6 = (long)(iVar18 - (int)piVar8);
      goto LAB_1003c300c;
    }
LAB_1003c3014:
    piVar12 = (int *)0xa;
    local_f0 = piVar8;
    FUN_1003c407c(10,piVar8,uVar16);
    piVar19 = piVar12;
    piVar13 = local_f0;
    if (((ulong)piVar8 & 1) != 0) goto LAB_1003c37cc;
    if (uVar3 >> 0x1e < 2) {
      if (uVar3 >> 0x1e == 0) {
        lVar6 = 0;
        uVar22 = uVar16 >> 0x30 & 0xff;
      }
      else {
        lVar6 = (long)(int)local_f0;
        uVar22 = (long)local_f0 >> 0x20;
      }
    }
    else if (uVar3 >> 0x1e == 2) {
      lVar6 = *(long *)(local_f0 + 4);
      uVar22 = *(ulong *)(local_f0 + 6);
    }
    else {
      uVar22 = 0;
      lVar6 = 0;
    }
    local_190 = (int *)(uVar16 >> 0x3e);
    local_188 = lVar23;
    local_180 = uVar16;
    if (((long)uVar22 < lVar6) || ((long)piVar12 < lVar6)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1003c35b8);
      (*pcVar20)();
    }
    piVar8 = piVar12;
    __s10Foundation4DataV15_RepresentationOyACSnySiGcig(lVar6,piVar12,local_f0,uVar16);
    lVar25 = lVar6;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    FUN_100006cdc(lVar6,piVar8);
    local_d0 = 0;
    IVar7 = NSJSONSerialization::JSONObjectWithData_options_error_
                      ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                       lVar25,0,&local_d0);
    if (IVar7 == 0) {
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_d0);
LAB_1003c31d0:
      _swift_willThrow();
LAB_1003c31d4:
      FUN_100006cdc(local_f0,local_180);
      FUN_1000e6e58(local_188);
      lVar25 = local_f8;
      goto LAB_1003c2f70;
    }
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_d0,IVar7);
    _swift_unknownObjectRelease(IVar7);
    puVar14 = &DAT_100a759d8;
    FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
    piVar19 = &local_e0;
    _swift_dynamicCast(piVar19,&local_d0,PTR___sypN_100995e88 + 8,puVar14,6);
    lVar25 = local_f8;
    piVar13 = local_f0;
    uVar16 = local_180;
    lVar23 = local_188;
    if (((ulong)piVar19 & 1) == 0) goto LAB_1003c37cc;
    lVar6 = (long)piVar12 + 1;
    if (SCARRY8((long)piVar12,1)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1003c35d8);
      (*pcVar20)();
    }
    iVar18 = (int)local_190;
    local_198 = &_OBJC_CLASS___NSJSONSerialization;
    if (iVar18 < 2) {
      if (iVar18 == 0) {
        lVar23 = 0;
        uVar16 = local_180 >> 0x30 & 0xff;
      }
      else {
        lVar23 = (long)(int)local_f0;
        uVar16 = (long)local_f0 >> 0x20;
      }
    }
    else if (iVar18 == 2) {
      lVar23 = *(long *)(local_f0 + 4);
      uVar16 = *(ulong *)(local_f0 + 6);
    }
    else {
      uVar16 = 0;
      lVar23 = 0;
    }
    if (((long)uVar16 < lVar6) || ((long)uVar16 < lVar23)) {
                    /* WARNING: Does not return */
      pcVar20 = (code *)SoftwareBreakpoint(1,0x1003c35dc);
      (*pcVar20)();
    }
    local_190 = (int *)CONCAT44(uStack_dc,local_e0);
    __s10Foundation4DataV15_RepresentationOyACSnySiGcig();
    lVar23 = lVar6;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF();
    FUN_100006cdc(lVar6,uVar16);
    local_d0 = 0;
    IVar7 = _objc_msgSend((ID)local_198,"JSONObjectWithData:options:error:",lVar23,0,&local_d0);
    uVar21 = local_d0;
    if (IVar7 == 0) {
      _swift_bridgeObjectRelease(local_190);
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(uVar21);
      _swift_willThrow(0);
      FUN_100006cdc(local_f0,local_180);
      FUN_1000e6e58(local_188);
      goto LAB_1003c2f70;
    }
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_d0,IVar7);
    _swift_unknownObjectRelease(IVar7);
    puVar4 = PTR___sypN_100995e88;
    piVar8 = &local_e0;
    _swift_dynamicCast(piVar8,&local_d0,PTR___sypN_100995e88 + 8,puVar14,6);
    piVar19 = local_190;
    if (((ulong)piVar8 & 1) == 0) {
LAB_1003c37ac:
      _swift_bridgeObjectRelease();
      piVar13 = local_f0;
      uVar16 = local_180;
      lVar23 = local_188;
      goto LAB_1003c37cc;
    }
    piVar8 = (int *)CONCAT44(uStack_dc,local_e0);
    if (*(long *)(local_190 + 4) == 0) {
      _swift_bridgeObjectRelease(piVar8);
      goto LAB_1003c37ac;
    }
    _swift_bridgeObjectRetain(local_190);
    lVar6 = 0x657079745f677562;
    uVar16 = 0;
    FUN_1001a2c70(0x657079745f677562);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar8);
LAB_1003c3404:
      _swift_bridgeObjectRelease_n(piVar19,2);
      piVar13 = local_f0;
      uVar16 = local_180;
      lVar23 = local_188;
      goto LAB_1003c37cc;
    }
    FUN_10003e8bc(*(long *)(piVar19 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar19);
    piVar13 = &local_e0;
    _swift_dynamicCast(piVar13,&local_d0,puVar4 + 8,PTR___sSSN_1009957f8,6);
    piVar19 = piStack_d8;
    if (((ulong)piVar13 & 1) == 0) {
LAB_1003c379c:
      _swift_bridgeObjectRelease(piVar8);
      piVar19 = local_190;
      goto LAB_1003c37ac;
    }
    uVar16 = CONCAT44(uStack_dc,local_e0);
    if ((uVar16 == 0x393033) && (piStack_d8 == (int *)0xe300000000000000)) {
      _swift_bridgeObjectRelease(0xe300000000000000);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar16,piStack_d8,0x393033,0xe300000000000000,0);
      _swift_bridgeObjectRelease(piVar19);
      if ((uVar16 & 1) == 0) goto LAB_1003c379c;
    }
    if (*(long *)(local_190 + 4) == 0) goto LAB_1003c379c;
    _swift_bridgeObjectRetain(local_190);
    lVar6 = 0x656d616e5f707061;
    uVar16 = 0;
    FUN_1001a2c70(0x656d616e5f707061);
    piVar19 = local_190;
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar8);
      piVar19 = local_190;
      goto LAB_1003c3404;
    }
    FUN_10003e8bc(*(long *)(local_190 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar19);
    piVar13 = &local_e0;
    _swift_dynamicCast(piVar13,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    piVar19 = piStack_d8;
    if (((ulong)piVar13 & 1) == 0) goto LAB_1003c379c;
    uVar16 = CONCAT44(uStack_dc,local_e0);
    if ((uVar16 == local_100) && (piStack_d8 == local_108)) {
      _swift_bridgeObjectRelease(piStack_d8);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar16,piStack_d8,local_100,local_108,0);
      _swift_bridgeObjectRelease(piVar19);
      if ((uVar16 & 1) == 0) goto LAB_1003c379c;
    }
    if (*(long *)(piVar8 + 4) == 0) goto LAB_1003c379c;
    _swift_bridgeObjectRetain(piVar8);
    lVar6 = 0x656d614e636f7270;
    uVar16 = 0;
    FUN_1001a2c70(0x656d614e636f7270);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(local_190);
      piVar19 = piVar8;
      goto LAB_1003c3404;
    }
    FUN_10003e8bc(*(long *)(piVar8 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar8);
    piVar13 = &local_e0;
    _swift_dynamicCast(piVar13,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    piVar19 = piStack_d8;
    if (((ulong)piVar13 & 1) == 0) goto LAB_1003c379c;
    uVar16 = CONCAT44(uStack_dc,local_e0);
    if ((uVar16 == local_100) && (piStack_d8 == local_108)) {
      _swift_bridgeObjectRelease(piStack_d8);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar16,piStack_d8,local_100,local_108,0);
      _swift_bridgeObjectRelease(piVar19);
      if ((uVar16 & 1) == 0) goto LAB_1003c379c;
    }
    if (*(long *)(piVar8 + 4) == 0) goto LAB_1003c379c;
    _swift_bridgeObjectRetain(piVar8);
    lVar6 = 0x444972657375;
    uVar16 = 0;
    FUN_1001a2c70(0x444972657375);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(local_190);
      local_190 = piVar8;
      goto LAB_1003c379c;
    }
    FUN_10003e8bc(*(long *)(piVar8 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar8);
    piVar19 = &local_e0;
    _swift_dynamicCast(piVar19,&local_d0,PTR___sypN_100995e88 + 8,PTR___ss6UInt32VN_100995dc0,6);
    if (((((ulong)piVar19 & 1) == 0) || (local_e0 != param_10)) || (*(long *)(local_190 + 4) == 0))
    goto LAB_1003c379c;
    lVar25 = 0x746e656469636e69;
    _swift_bridgeObjectRetain(local_190);
    uVar16 = 0xeb0000000064695f;
    lVar6 = lVar25;
    FUN_1001a2c70(0x746e656469636e69);
    piVar19 = local_190;
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar8);
      piVar8 = local_190;
      goto LAB_1003c379c;
    }
    FUN_10003e8bc(*(long *)(local_190 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar19);
    piVar12 = &local_e0;
    _swift_dynamicCast(piVar12,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    piVar19 = piStack_d8;
    piVar13 = local_178;
    if (((ulong)piVar12 & 1) == 0) goto LAB_1003c379c;
    uVar16 = CONCAT44(uStack_dc,local_e0);
    __s10Foundation4UUIDV10uuidStringACSgSSh_tcfC(local_178,uVar16,piStack_d8);
    lVar6 = 0;
    __s10Foundation4UUIDVMa();
    (**(code **)(*(long *)(lVar6 + -8) + 0x30))(piVar13,1,lVar6);
    if ((int)piVar13 == 1) {
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(piVar8);
      _swift_bridgeObjectRelease(local_190);
      piVar19 = local_178;
      FUN_100040bb4(local_178,&DAT_100a79890,&DAT_10080e600);
      piVar13 = local_f0;
      uVar16 = local_180;
      lVar23 = local_188;
      goto LAB_1003c37cc;
    }
    FUN_100040bb4(local_178,&DAT_100a79890,&DAT_10080e600);
    if (*(long *)(piVar8 + 4) == 0) {
LAB_1003c3900:
      _swift_bridgeObjectRelease(piVar19);
      goto LAB_1003c379c;
    }
    _swift_bridgeObjectRetain(piVar8);
    uVar22 = 0;
    FUN_1001a2c70(0x746e656469636e69);
    if ((uVar22 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar8);
      goto LAB_1003c3900;
    }
    FUN_10003e8bc(*(long *)(piVar8 + 0xe) + lVar25 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar8);
    piVar12 = &local_e0;
    _swift_dynamicCast(piVar12,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    piVar13 = piStack_d8;
    if (((ulong)piVar12 & 1) == 0) goto LAB_1003c3900;
    uVar22 = CONCAT44(uStack_dc,local_e0);
    if ((uVar22 == uVar16) && (piStack_d8 == piVar19)) {
      _swift_bridgeObjectRelease(piStack_d8);
    }
    else {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (uVar22,piStack_d8,uVar16,piVar19,0);
      _swift_bridgeObjectRelease(piVar13);
      if ((uVar22 & 1) == 0) goto LAB_1003c3900;
    }
    if (*(long *)(local_190 + 4) == 0) {
LAB_1003c3a40:
      _swift_bridgeObjectRelease(piVar8);
      _swift_bridgeObjectRelease(local_190);
      goto LAB_1003c37ac;
    }
    _swift_bridgeObjectRetain(local_190);
    lVar6 = 0x737265765f707061;
    uVar22 = 0xeb000000006e6f69;
    FUN_1001a2c70(0x737265765f707061);
    piVar13 = local_190;
    if ((uVar22 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar8);
      piVar8 = local_190;
      goto LAB_1003c3a40;
    }
    FUN_10003e8bc(*(long *)(local_190 + 0xe) + lVar6 * 0x20,&local_d0);
    _swift_bridgeObjectRelease(piVar13);
    piVar12 = &local_e0;
    _swift_dynamicCast(piVar12,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    piVar13 = piStack_d8;
    if (((ulong)piVar12 & 1) == 0) goto LAB_1003c3900;
    local_100 = CONCAT44(uStack_dc,local_e0);
    if (*(long *)(local_190 + 4) == 0) {
LAB_1003c3a64:
      dVar26 = 0.0;
      uStack_c8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      _swift_bridgeObjectRetain(local_190);
      lVar6 = 0x65765f646c697562;
      uVar22 = 0;
      FUN_1001a2c70(0x65765f646c697562);
      piVar12 = local_190;
      if ((uVar22 & 1) == 0) {
        _swift_bridgeObjectRelease(local_190);
        goto LAB_1003c3a64;
      }
      FUN_10003e8bc(*(long *)(local_190 + 0xe) + lVar6 * 0x20,&local_d0);
      _swift_bridgeObjectRelease(piVar12);
    }
    _swift_bridgeObjectRelease(local_190);
    if (local_b8 == 0) {
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(piVar13);
LAB_1003c3eb4:
      _swift_bridgeObjectRelease(piVar8);
      piVar19 = (int *)&local_d0;
      FUN_100040bb4(piVar19,&DAT_100a766e0,&DAT_10080bdb0);
      piVar13 = local_f0;
      uVar16 = local_180;
      lVar23 = local_188;
      goto LAB_1003c37cc;
    }
    piVar12 = &local_e0;
    _swift_dynamicCast(piVar12,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)piVar12 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(piVar13);
      piVar19 = piVar8;
      goto LAB_1003c37ac;
    }
    local_178 = (int *)CONCAT44(uStack_dc,local_e0);
    local_108 = piStack_d8;
    if (*(long *)(piVar8 + 4) == 0) {
LAB_1003c3b44:
      dVar26 = 0.0;
      uStack_c8 = 0;
      local_d0 = 0;
      local_b8 = 0;
      uStack_c0 = 0;
    }
    else {
      _swift_bridgeObjectRetain(piVar8);
      lVar6 = 0x5465727574706163;
      uVar22 = 0xeb00000000656d69;
      FUN_1001a2c70(0x5465727574706163);
      if ((uVar22 & 1) == 0) {
        _swift_bridgeObjectRelease(piVar8);
        goto LAB_1003c3b44;
      }
      FUN_10003e8bc(*(long *)(piVar8 + 0xe) + lVar6 * 0x20,&local_d0);
      _swift_bridgeObjectRelease(piVar8);
    }
    _swift_bridgeObjectRelease(piVar8);
    if (local_b8 == 0) {
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(local_108);
      piVar8 = piVar13;
      goto LAB_1003c3eb4;
    }
    piVar8 = &local_e0;
    _swift_dynamicCast(piVar8,&local_d0,PTR___sypN_100995e88 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)piVar8 & 1) == 0) {
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(local_108);
      piVar19 = piVar13;
      goto LAB_1003c37ac;
    }
    local_198 = (undefined *)CONCAT44(uStack_dc,local_e0);
    local_190 = piStack_d8;
    if ((((local_168 != (int *)0x0) && ((local_100 != local_170 || (piVar13 != local_168)))) &&
        (uVar22 = local_100,
        __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                  (local_100,piVar13,local_170,local_168,0), (uVar22 & 1) == 0)) ||
       ((local_150 != (int *)0x0 &&
        (((local_178 != local_158 || (local_108 != local_150)) &&
         (piVar8 = local_178,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (local_178,local_108,local_158,local_150,0), ((ulong)piVar8 & 1) == 0)))))) {
      _swift_bridgeObjectRelease(piVar13);
      _swift_bridgeObjectRelease(piVar19);
      _swift_bridgeObjectRelease(local_190);
      piVar8 = local_108;
      _swift_bridgeObjectRelease();
      FUN_1003d111c();
      _swift_allocError(&DAT_1009b9720,piVar8,0,0);
      piVar8[0] = -0x19777619;
      piVar8[1] = -0x471b5364;
      piVar8[2] = -0x59531873;
      piVar8[3] = -0x54000000;
      goto LAB_1003c31d0;
    }
    puVar14 = &_OBJC_CLASS___NSDateFormatter;
    _objc_allocWithZone();
    IVar7 = _objc_msgSend((ID)puVar14,"init");
    lVar6 = local_160;
    uVar21 = 0x4f505f53555f6e65;
    __s10Foundation6LocaleV10identifierACSS_tcfC(local_160,0x4f505f53555f6e65,0xeb00000000584953);
    __s10Foundation6LocaleV19_bridgeToObjectiveCSo8NSLocaleCyF();
    (**(code **)(local_148 + 8))(lVar6,local_140);
    _objc_msgSend(IVar7,"setLocale:",uVar21);
    uVar21 = 0xd00000000000001a;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001a,0x80000001008b43e0);
    _objc_msgSend(IVar7,"setDateFormat:",uVar21);
    piVar8 = local_190;
    puVar14 = local_198;
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(local_198,local_190);
    _swift_bridgeObjectRelease(piVar8);
    local_140 = IVar7;
    IVar7 = _objc_msgSend(IVar7,"dateFromString:",puVar14);
    piVar8 = local_138;
    if (IVar7 == 0) {
LAB_1003c3e30:
      _swift_bridgeObjectRelease(local_108);
      _swift_bridgeObjectRelease(piVar13);
      _swift_bridgeObjectRelease();
      FUN_1003d111c();
      _swift_allocError(&DAT_1009b9720,piVar19,0,0);
      piVar19[0] = 0x28;
      piVar19[1] = 0x10000000;
      piVar19[2] = 0x8b4400;
      piVar19[3] = -0x7fffffff;
      _swift_willThrow();
      goto LAB_1003c31d4;
    }
    __s10Foundation4DateV36_unconditionallyBridgeFromObjectiveCyACSo6NSDateCSgFZ(local_138,IVar7);
    lVar25 = local_118;
    lVar6 = local_128;
    (**(code **)(local_120 + 0x20))(local_128,piVar8,local_118);
    puVar10 = &DAT_100a76230;
    FUN_100005c90(&DAT_100a76230,PTR___s10Foundation4DateVMa_100996208,
                  PTR___s10Foundation4DateVSLAAMc_100996220);
    uVar22 = local_130;
    __sSL1loiySbx_xtFZTj(local_130,lVar6,lVar25,puVar10);
    if (((uVar22 & 1) != 0) ||
       (__s10Foundation4DateV17timeIntervalSinceySdACF(local_128), 172800.0 < dVar26)) {
      (**(code **)(local_120 + 8))(local_128,local_118);
      goto LAB_1003c3e30;
    }
    piVar8 = piVar19;
    __sSS10lowercasedSSyF();
    local_138 = piVar8;
    local_130 = uVar16;
    _swift_bridgeObjectRelease(piVar19);
    lVar15 = 0;
    FUN_1003c5f68();
    puVar5 = local_110;
    lVar23 = local_118;
    lVar25 = local_128;
    lVar6 = (long)local_110 + (long)*(int *)(lVar15 + 0x14);
    lVar17 = local_128;
    (**(code **)(local_120 + 0x10))(lVar6,local_128,local_118);
    __s10Foundation3URLV17lastPathComponentSSvg();
    (**(code **)(local_120 + 8))(lVar25,lVar23);
    *puVar5 = local_130;
    puVar5[1] = (ulong)local_138;
    puVar1 = (ulong *)((long)puVar5 + (long)*(int *)(lVar15 + 0x18));
    *puVar1 = local_100;
    puVar1[1] = (ulong)piVar13;
    puVar10 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar15 + 0x1c));
    *puVar10 = local_178;
    puVar10[1] = local_108;
    puVar10 = (undefined8 *)((long)puVar5 + (long)*(int *)(lVar15 + 0x20));
    *puVar10 = local_f0;
    puVar10[1] = local_180;
    plVar2 = (long *)((long)puVar5 + (long)*(int *)(lVar15 + 0x24));
    *plVar2 = lVar6;
    plVar2[1] = lVar17;
    FUN_1000e6e58(local_188);
    pcVar20 = *(code **)(lVar24 + 8);
    lVar25 = local_f8;
  }
  (*pcVar20)(lVar25,lVar9);
LAB_1003c2f7c:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

