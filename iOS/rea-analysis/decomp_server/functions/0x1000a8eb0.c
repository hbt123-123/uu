// rea decompile_all
// name: FUN_1000a8eb0
// address: 0x1000a8eb0
// body: available
// range: 0x1000a8eb0-0x1000a9167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a8eb0(ID *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 local_b0 [8];
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined1 auStack_98 [8];
  ID local_90;
  char *pcStack_88;
  undefined *local_80;
  undefined8 uStack_78;
  ID local_70;
  ID IStack_68;
  
  local_90 = 0;
  pcStack_88 = (char *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x72);
  local_70 = local_90;
  IStack_68 = (ID)pcStack_88;
  __sSS6appendyySSF(0x100000000000003c,0x8000000100880cd0);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x97e69780e88cbcef,0xaa00000000003db6);
  puVar2 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  puVar4 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  puVar1 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar2 + 0x38) = puVar4;
  *(undefined **)(puVar2 + 0x40) = puVar1;
  *(undefined8 *)(puVar2 + 0x20) = param_2;
  uVar5 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  __sSS6appendyySSF(0x657268748cbcef73,0xab000000003d6461);
  pcVar6 = "currentThread";
  IVar3 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74();
  puVar4 = &DAT_100a76a18;
  local_90 = IVar3;
  pcStack_88 = pcVar6;
  local_80 = puVar2;
  uStack_78 = param_6;
  FUN_100004bb4(&DAT_100a76a18,&DAT_10080b4c0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_90,&local_70,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(param_6);
  _swift_bridgeObjectRelease(pcVar6);
  __sSS6appendyySSF(0x726854736f8cbcef,0xae003d6449646165);
  IVar3 = 0;
  FUN_10004003c(0,&DAT_100a76a20,&PTR__OBJC_CLASS___NSThread_100a65838);
  FUN_100399ba8();
  puVar2 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_90 = IVar3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x726f7272658cbcef,0xa90000000000003d);
  _swift_getErrorValue(param_5,auStack_98,local_b0);
  uVar5 = local_a0;
  __ss5ErrorP10FoundationE20localizedDescriptionSSvg(uStack_a8,local_a0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  param_1[3] = (ID)PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = IStack_68;
  return;
}

