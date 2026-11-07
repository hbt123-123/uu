// rea decompile_all
// name: FUN_1000a89fc
// address: 0x1000a89fc
// body: available
// range: 0x1000a89fc-0x1000a8c3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a89fc(ID *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  bool bVar3;
  ID IVar4;
  undefined *puVar5;
  char *pcVar6;
  ID local_80;
  char *pcStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  ID local_60;
  ID IStack_58;
  
  local_80 = 0;
  pcStack_78 = (char *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x6d);
  local_60 = local_80;
  IStack_58 = (ID)pcStack_78;
  __sSS6appendyySSF(0x100000000000003d,0x8000000100880d10);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x61657268748cbcef,0xaa00000000003d64);
  pcVar6 = "currentThread";
  IVar4 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74();
  puVar5 = &DAT_100a76a18;
  local_80 = IVar4;
  pcStack_78 = pcVar6;
  local_70 = param_4;
  uStack_68 = param_5;
  FUN_100004bb4(&DAT_100a76a18,&DAT_10080b4c0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_60,puVar5,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(param_5);
  _swift_bridgeObjectRelease(pcVar6);
  __sSS6appendyySSF(0x726854736f8cbcef,0xae003d6449646165);
  IVar4 = 0;
  FUN_10004003c(0,&DAT_100a76a20,&PTR__OBJC_CLASS___NSThread_100a65838);
  FUN_100399ba8();
  puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_80 = IVar4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x1000000000000010,0x8000000100880d50);
  IVar4 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
  bVar3 = (int)IVar4 == 0;
  uVar1 = 0x65757274;
  if (bVar3) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar3) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = (ID)PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = IStack_58;
  return;
}

