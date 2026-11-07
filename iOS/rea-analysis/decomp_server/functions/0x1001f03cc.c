// rea decompile_all
// name: FUN_1001f03cc
// address: 0x1001f03cc
// body: available
// range: 0x1001f03cc-0x1001f0703 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f03cc(ID *param_1,long param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
                  )

{
  undefined4 uVar1;
  undefined *puVar2;
  long lVar3;
  undefined *puVar4;
  ID IVar5;
  undefined *puVar6;
  undefined8 uVar7;
  undefined *puVar8;
  char *pcVar9;
  long extraout_x8;
  long lVar10;
  long lVar11;
  ID local_a0;
  char *pcStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  ID local_80;
  ID IStack_78;
  
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar10 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  local_a0 = 0;
  pcStack_98 = (char *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xab);
  local_80 = local_a0;
  IStack_78 = (ID)pcStack_98;
  __sSS6appendyySSF(0x1000000000000040,0x80000001008a1510);
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar2 = PTR___ss6UInt32VN_100995dc0;
  uVar1 = *(undefined4 *)(param_2 + 0x10);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_a0._0_4_ = uVar1;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x1000000000000019,0x8000000100881060);
  puVar4 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  uVar7 = 1;
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  __s10Foundation4DateVACycfC(lVar10);
  __s10Foundation4DateV17timeIntervalSinceySdACF(param_3);
  (**(code **)(lVar11 + 8))(lVar10,lVar3);
  puVar6 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar4 + 0x38) = PTR___sSdN_1009958f0;
  *(undefined **)(puVar4 + 0x40) = puVar6;
  *(undefined8 *)(puVar4 + 0x20) = uVar7;
  uVar7 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x1000000000000030,0x80000001008a1560);
  local_a0 = CONCAT44(local_a0._4_4_,uVar1);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x61657268748cbcef,0xaa00000000003d64);
  pcVar9 = "currentThread";
  IVar5 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74();
  puVar6 = &DAT_100a76a18;
  local_a0 = IVar5;
  pcStack_98 = pcVar9;
  local_90 = puVar4;
  uStack_88 = param_5;
  FUN_100004bb4(&DAT_100a76a18,&DAT_10080b4c0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_a0,&local_80,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(pcVar9);
  __sSS6appendyySSF(0x726854736f8cbcef,0xae003d6449646165);
  IVar5 = 0;
  FUN_10004003c(0,&DAT_100a76a20,&PTR__OBJC_CLASS___NSThread_100a65838);
  FUN_100399ba8();
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_a0 = IVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = (ID)PTR___sSSN_1009957f8;
  *param_1 = local_80;
  param_1[1] = IStack_78;
  return;
}

