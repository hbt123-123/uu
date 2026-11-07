// rea decompile_all
// name: FUN_1001c61e0
// address: 0x1001c61e0
// body: available
// range: 0x1001c61e0-0x1001c698b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001c6988 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

void FUN_1001c61e0(undefined4 param_1,ulong param_2,long param_3,ulong param_4)

{
  uint uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  ID IVar6;
  undefined *puVar7;
  long *plVar8;
  long lVar9;
  undefined8 uVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined *puVar15;
  ulong uVar16;
  uint uVar17;
  undefined8 *unaff_x20;
  undefined4 uVar18;
  undefined1 auStack_1a0 [16];
  undefined8 local_190;
  code *local_188;
  undefined *puStack_180;
  code *local_178;
  long *plStack_170;
  code *local_168;
  long *plStack_160;
  long *local_158;
  ulong local_150;
  undefined8 local_148;
  ulong local_140;
  undefined8 local_138;
  undefined8 local_130;
  long local_128;
  long local_120;
  long local_118;
  long local_110;
  long local_108;
  ulong local_100;
  undefined8 local_f8;
  undefined *local_f0;
  long local_e8;
  undefined8 uStack_e0;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  long local_a8;
  long local_a0;
  undefined8 uStack_98;
  long local_90;
  undefined8 uStack_88;
  long local_80;
  undefined8 uStack_78;
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_f8 = *unaff_x20;
  local_c8 = 0x78;
  local_d0 = 0x28;
  local_80 = 0;
  uStack_78 = 0;
  local_90 = 0;
  uStack_88 = 0;
  local_a0 = 0;
  uStack_98 = 0;
  uVar1 = (uint)(param_4 >> 0x20);
  uVar17 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar17 == 0) {
      if ((param_4 & 0xff000000000000) == 0) goto LAB_1001c65e0;
    }
    else if ((long)(int)param_3 == param_3 >> 0x20) goto LAB_1001c65e0;
  }
  else if ((uVar17 != 2) || (*(long *)(param_3 + 0x10) == *(long *)(param_3 + 0x18)))
  goto LAB_1001c65e0;
  lVar5 = param_3;
  __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(param_3,param_4);
  local_c0 = 0;
  IVar6 = NSJSONSerialization::JSONObjectWithData_options_error_
                    ((ID)&_OBJC_CLASS___NSJSONSerialization,"JSONObjectWithData:options:error:",
                     lVar5,0,&local_c0);
  if (IVar6 == 0) {
    uVar10 = local_c0;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_c0);
    _swift_willThrow(0);
    _swift_errorRelease(uVar10);
    goto LAB_1001c65e0;
  }
  __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_c0,IVar6);
  _swift_unknownObjectRelease(IVar6);
  puVar7 = &DAT_100a759d8;
  FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
  puVar14 = PTR___sypN_100995e88;
  plVar8 = &local_e8;
  _swift_dynamicCast(plVar8,&local_c0,PTR___sypN_100995e88 + 8,puVar7,6);
  lVar5 = local_e8;
  if (((ulong)plVar8 & 1) == 0) goto LAB_1001c65e0;
  if (*(long *)(local_e8 + 0x10) != 0) {
    _swift_bridgeObjectRetain(local_e8);
    lVar9 = 0x736c6f63;
    uVar16 = 0;
    FUN_1001a2c70(0x736c6f63);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_c0);
      _swift_bridgeObjectRelease(lVar5);
      plVar8 = &local_e8;
      _swift_dynamicCast(plVar8,&local_c0,puVar14 + 8,PTR___sSiN_100995968,6);
      if (((ulong)plVar8 & 1) != 0) {
        local_c8 = local_e8;
      }
    }
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar9 = 0x73776f72;
    uVar16 = 0;
    FUN_1001a2c70(0x73776f72);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_c0);
      _swift_bridgeObjectRelease(lVar5);
      plVar8 = &local_e8;
      _swift_dynamicCast(plVar8,&local_c0,puVar14 + 8,PTR___sSiN_100995968,6);
      if (((ulong)plVar8 & 1) != 0) {
        local_d0 = local_e8;
      }
    }
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar9 = 0x6c6c656873;
    uVar16 = 0;
    FUN_1001a2c70(0x6c6c656873);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_c0);
      _swift_bridgeObjectRelease(lVar5);
      plVar8 = &local_e8;
      _swift_dynamicCast(plVar8,&local_c0,puVar14 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)plVar8 & 1) != 0) {
        local_80 = local_e8;
        uStack_78 = uStack_e0;
      }
    }
  }
  if (*(long *)(lVar5 + 0x10) != 0) {
    _swift_bridgeObjectRetain(lVar5);
    lVar9 = 0x6e6f6974706f;
    uVar16 = 0;
    FUN_1001a2c70(0x6e6f6974706f);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
    }
    else {
      FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_c0);
      _swift_bridgeObjectRelease(lVar5);
      plVar8 = &local_e8;
      _swift_dynamicCast(plVar8,&local_c0,puVar14 + 8,PTR___sSSN_1009957f8,6);
      if (((ulong)plVar8 & 1) != 0) {
        local_90 = local_e8;
        uStack_88 = uStack_e0;
      }
    }
  }
  if (*(long *)(lVar5 + 0x10) == 0) {
LAB_1001c6584:
    uStack_b8 = 0;
    local_c0 = 0;
    local_a8 = 0;
    uStack_b0 = 0;
  }
  else {
    _swift_bridgeObjectRetain(lVar5);
    lVar9 = 0x656d616e;
    uVar16 = 0;
    FUN_1001a2c70(0x656d616e);
    if ((uVar16 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar5);
      goto LAB_1001c6584;
    }
    FUN_10003e8bc(*(long *)(lVar5 + 0x38) + lVar9 * 0x20,&local_c0);
    _swift_bridgeObjectRelease(lVar5);
  }
  _swift_bridgeObjectRelease(lVar5);
  if (local_a8 == 0) {
    FUN_100040bb4(&local_c0,&DAT_100a766e0,&DAT_10080bdb0);
  }
  else {
    plVar8 = &local_e8;
    _swift_dynamicCast(plVar8,&local_c0,puVar14 + 8,PTR___sSSN_1009957f8,6);
    if (((ulong)plVar8 & 1) != 0) {
      local_a0 = local_e8;
      uStack_98 = uStack_e0;
    }
  }
LAB_1001c65e0:
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_190 = CONCAT71(local_190._1_7_,(char)param_2);
  uVar18 = (undefined4)(param_2 >> 0x20);
  local_190 = CONCAT44(uVar18,CONCAT22((short)(param_2 >> 0x10),(undefined2)local_190));
  local_178 = (code *)&local_c8;
  plStack_170 = &local_d0;
  local_168 = (code *)&local_80;
  plStack_160 = &local_90;
  local_158 = &local_a0;
  local_188 = (code *)param_3;
  puStack_180 = (undefined *)param_4;
  local_100 = param_2 >> 0x10;
  FUN_1003fb48c(FUN_1001ca53c,auStack_1a0,0xd000000000000095,0x8000000100885070,0xd000000000000019,
                0x800000010089d2e0,0x46,0);
  puVar7 = &DAT_1009a31d8;
  _swift_allocObject(&DAT_1009a31d8,0x14,7);
  *(undefined4 *)(puVar7 + 0x10) = uVar18;
  local_150 = param_4;
  local_140 = param_2 >> 0x20;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  local_108 = local_a0;
  local_138 = uStack_98;
  local_110 = local_80;
  local_130 = uStack_78;
  local_118 = local_c8;
  local_120 = local_d0;
  local_128 = local_90;
  local_148 = uStack_88;
  puVar14 = &DAT_1009a31a0;
  puVar11 = puVar14;
  _swift_allocObject(&DAT_1009a31a0,0x18,7);
  local_f0 = puVar11;
  _swift_weakInit(puVar11 + 0x10);
  puVar12 = &DAT_1009a3200;
  _swift_allocObject(&DAT_1009a3200,0x28,7);
  *(undefined **)(puVar12 + 0x10) = puVar11;
  *(undefined4 *)(puVar12 + 0x18) = param_1;
  *(undefined **)(puVar12 + 0x20) = puVar7;
  puVar13 = puVar14;
  _swift_allocObject(&DAT_1009a31a0,0x18,7);
  _swift_weakInit(puVar13 + 0x10);
  puVar11 = &DAT_1009a3228;
  _swift_allocObject(&DAT_1009a3228,0x28,7);
  *(undefined **)(puVar11 + 0x10) = puVar13;
  *(undefined4 *)(puVar11 + 0x18) = param_1;
  *(undefined8 *)(puVar11 + 0x20) = local_f8;
  _swift_allocObject(&DAT_1009a31a0,0x18,7);
  _swift_weakInit(puVar14 + 0x10);
  puVar15 = &DAT_1009a3250;
  _swift_allocObject(&DAT_1009a3250,0x40,7);
  uVar2 = local_140;
  uVar16 = local_150;
  *(undefined **)(puVar15 + 0x10) = puVar14;
  *(undefined **)(puVar15 + 0x18) = puVar7;
  *(undefined4 *)(puVar15 + 0x20) = param_1;
  puVar15[0x28] = (char)param_2;
  *(short *)(puVar15 + 0x2a) = (short)local_100;
  *(int *)(puVar15 + 0x2c) = (int)local_140;
  *(long *)(puVar15 + 0x30) = param_3;
  *(ulong *)(puVar15 + 0x38) = local_150;
  _swift_retain_n(puVar7,2);
  _swift_retain(local_f0);
  _swift_retain(puVar13);
  _swift_retain(puVar14);
  FUN_100008184(param_3,uVar16);
  uVar4 = local_130;
  uVar3 = local_138;
  uVar10 = local_148;
  local_168 = FUN_1001ca618;
  local_178 = FUN_1001ca5d4;
  local_188 = FUN_1001ca5a0;
  local_190 = local_148;
  puStack_180 = puVar12;
  plStack_170 = (long *)puVar11;
  plStack_160 = (long *)puVar15;
  FUN_1001d47ac(uVar2,local_108,local_138,local_110,local_130,local_118,local_120,local_128);
  _swift_release(puVar7);
  _swift_release(local_f0);
  _swift_release(puVar12);
  _swift_release(puVar13);
  _swift_release(puVar11);
  _swift_release(puVar14);
  _swift_release(puVar15);
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar10);
  _swift_bridgeObjectRelease(uVar4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

