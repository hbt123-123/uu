// rea decompile_all
// name: FUN_1001f0078
// address: 0x1001f0078
// body: available
// range: 0x1001f0078-0x1001f0317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001f0078(ID *param_1,long param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined4 uVar3;
  bool bVar4;
  ID IVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  char *pcVar9;
  ID local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ID local_60;
  ID IStack_58;
  
  local_80 = 0;
  pcStack_78 = (char *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x9c);
  local_60 = local_80;
  IStack_58 = (ID)pcStack_78;
  __sSS6appendyySSF(0x1000000000000040,0x80000001008a1600);
  puVar8 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar6 = PTR___ss6UInt32VN_100995dc0;
  uVar3 = *(undefined4 *)(param_2 + 0x10);
  puVar7 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_80._0_4_ = uVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x726f6e67698cbcef,0xab000000003d6465);
  bVar4 = (param_3 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x100000000000002f,0x80000001008a1650);
  local_80 = CONCAT44(local_80._4_4_,uVar3);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x61657268748cbcef,0xaa00000000003d64);
  pcVar9 = "currentThread";
  IVar5 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74();
  puVar6 = &DAT_100a76a18;
  local_80 = IVar5;
  pcStack_78 = pcVar9;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_100004bb4(&DAT_100a76a18,&DAT_10080b4c0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_60,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(pcVar9);
  __sSS6appendyySSF(0x726854736f8cbcef,0xae003d6449646165);
  IVar5 = 0;
  FUN_10004003c(0,&DAT_100a76a20,&PTR__OBJC_CLASS___NSThread_100a65838);
  FUN_100399ba8();
  puVar6 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_80 = IVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = (ID)PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = IStack_58;
  return;
}

