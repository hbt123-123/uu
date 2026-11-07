// rea decompile_all
// name: FUN_1002d9fd4
// address: 0x1002d9fd4
// body: available
// range: 0x1002d9fd4-0x1002da387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1002d9fd4(undefined8 param_1,long param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined8 uVar5;
  ID IVar6;
  long lVar7;
  long lVar8;
  long unaff_x20;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  long lVar14;
  undefined1 auVar15 [16];
  undefined1 *local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_88;
  undefined1 *local_80;
  undefined8 uStack_78;
  
  lVar2 = 0;
  __s10Foundation12DateIntervalVMa();
  lVar11 = *(long *)(lVar2 + -8);
  lVar9 = (long)&local_b0 - (*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a82c30;
  local_98 = lVar2;
  FUN_100004bb4(&DAT_100a82c30,&DAT_1008171f0);
  lVar10 = lVar9 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar4 + -8);
  lVar8 = lVar10 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007f314();
  lVar2 = lVar10;
  (**(code **)(lVar14 + 0x30))(lVar10,1,lVar4);
  if ((int)lVar2 == 1) {
    FUN_100040bb4(lVar10,&DAT_100a82c30,&DAT_1008171f0);
    local_80 = (undefined1 *)0x0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x1c);
    __sSS6appendyySSF(0xd00000000000001a,0x80000001008a9fa0);
    iVar1 = *(int *)(param_2 + 0x3c);
    uVar5 = 0;
    __ss6ResultOMa(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                   *(undefined8 *)(param_2 + 0x20));
    __ss26DefaultStringInterpolationV06appendC0yyxlF(unaff_x20 + iVar1,uVar5);
    puVar13 = local_80;
    uVar5 = uStack_78;
  }
  else {
    (**(code **)(lVar14 + 0x20))(lVar8,lVar10,lVar4);
    lVar2 = lVar8;
    FUN_1002dc8e4();
    lVar7 = *(long *)(unaff_x20 + *(int *)(param_2 + 0x2c));
    local_a8 = lVar2;
    if (lVar7 == 0) {
      uVar5 = 0x80000001008a9fc0;
      local_b0 = &DAT_d000000000000010;
    }
    else {
      local_88 = lVar7;
      FUN_1002da388(&local_80,&local_88);
      local_b0 = local_80;
      uVar5 = uStack_78;
    }
    IVar6 = *(ID *)(unaff_x20 + *(int *)(param_2 + 0x34));
    local_a0 = lVar8;
    if (IVar6 == 0) {
      uVar12 = 0xe400000000000000;
      puVar13 = (undefined1 *)0x656e6f4e;
    }
    else {
      local_80 = (undefined1 *)0x0;
      uStack_78 = 0xe000000000000000;
      IVar6 = _objc_msgSend(IVar6,"taskInterval");
      __s10Foundation12DateIntervalV36_unconditionallyBridgeFromObjectiveCyACSo06NSDateC0CSgFZ
                (lVar9,IVar6);
      __s10Foundation12DateIntervalV8durationSdvg(0);
      (**(code **)(lVar11 + 8))(lVar9,local_98);
      __sSd5write2toyxz_ts16TextOutputStreamRzlF
                (param_1,&local_80,PTR___ss26DefaultStringInterpolationVN_100995bf0,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
      __sSS6appendyySSF(0x73,0xe100000000000000);
      uVar12 = uStack_78;
      puVar13 = local_80;
    }
    local_80 = (undefined1 *)0x0;
    uStack_78 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x47);
    __sSS6appendyySSF(local_a8,lVar10);
    _swift_bridgeObjectRelease(lVar10);
    __sSS6appendyySSF(10,0xe100000000000000);
    __sSS6appendyySSF(local_b0,uVar5);
    _swift_bridgeObjectRelease(uVar5);
    __sSS6appendyySSF(0xd000000000000015,0x80000001008a9fe0);
    __sSS6appendyySSF(puVar13,uVar12);
    _swift_bridgeObjectRelease(uVar12);
    __sSS6appendyySSF(0xd00000000000001b,0x80000001008aa000);
    __sSd5write2toyxz_ts16TextOutputStreamRzlF
              (*(undefined8 *)(unaff_x20 + *(int *)(param_2 + 0x38)),&local_80,
               PTR___ss26DefaultStringInterpolationVN_100995bf0,
               PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
    __sSS6appendyySSF(0x6c757365525b0a73,0xec000000203a5d74);
    iVar1 = *(int *)(param_2 + 0x3c);
    uVar5 = 0;
    __ss6ResultOMa(0,*(undefined8 *)(param_2 + 0x10),*(undefined8 *)(param_2 + 0x18),
                   *(undefined8 *)(param_2 + 0x20));
    __ss26DefaultStringInterpolationV06appendC0yyxlF(unaff_x20 + iVar1,uVar5);
    uVar5 = uStack_78;
    puVar13 = local_80;
    (**(code **)(lVar14 + 8))(local_a0,lVar4);
  }
  auVar15._8_8_ = uVar5;
  auVar15._0_8_ = puVar13;
  return auVar15;
}

