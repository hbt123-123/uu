// rea decompile_all
// name: FUN_1000a9624
// address: 0x1000a9624
// body: available
// range: 0x1000a9624-0x1000a9a4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000a9624(ulong *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ID param_5,long param_6,ulong param_7,long param_8,ulong param_9)

{
  uint uVar1;
  undefined *puVar2;
  code *pcVar3;
  ID IVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  int iVar10;
  ulong uVar11;
  uint uVar12;
  ulong local_a0;
  char *pcStack_98;
  undefined *local_90;
  long lStack_88;
  ulong local_80;
  ulong uStack_78;
  
  local_a0 = 0;
  pcStack_98 = (char *)0xe000000000000000;
  lVar9 = param_6;
  __ss11_StringGutsV4growyySiF(0x97);
  local_80 = local_a0;
  uStack_78 = (ulong)pcStack_98;
  __sSS6appendyySSF(0x100000000000003c,0x8000000100880c20);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x43746978658cbcef,0xac0000003d65646f);
  IVar4 = _objc_msgSend(param_5,"terminationStatus");
  local_a0 = CONCAT44(local_a0._4_4_,(int)IVar4);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x97e69780e88cbcef,0xaa00000000003db6);
  puVar5 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  _swift_allocObject();
  puVar6 = PTR___sSdN_1009958f0;
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  puVar2 = PTR___sSds7CVarArgsWP_100995920;
  *(undefined **)(puVar5 + 0x38) = puVar6;
  *(undefined **)(puVar5 + 0x40) = puVar2;
  *(undefined8 *)(puVar5 + 0x20) = param_2;
  uVar7 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar7);
  __sSS6appendyySSF(0x1000000000000010,0x8000000100880c60);
  uVar1 = (uint)(param_7 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      uVar11 = param_7 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)param_6 >> 0x20);
      if (SBORROW4(iVar10,(int)param_6)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a9a48);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)param_6);
    }
  }
  else {
    uVar11 = 0;
    if ((uVar12 == 2) &&
       (uVar11 = *(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10),
       SBORROW8(*(long *)(param_6 + 0x18),*(long *)(param_6 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a9808);
      (*pcVar3)();
    }
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_a0 = uVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x72656474738cbcef,0xaf3d736574794272);
  uVar1 = (uint)(param_9 >> 0x20);
  uVar12 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if (uVar12 == 0) {
      uVar11 = param_9 >> 0x30 & 0xff;
    }
    else {
      iVar10 = (int)((ulong)param_8 >> 0x20);
      if (SBORROW4(iVar10,(int)param_8)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a9a4c);
        (*pcVar3)();
      }
      uVar11 = (ulong)(iVar10 - (int)param_8);
    }
  }
  else if (uVar12 == 2) {
    uVar11 = *(long *)(param_8 + 0x18) - *(long *)(param_8 + 0x10);
    if (SBORROW8(*(long *)(param_8 + 0x18),*(long *)(param_8 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1000a98a0);
      (*pcVar3)();
    }
  }
  else {
    uVar11 = 0;
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_a0 = uVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x61657268748cbcef,0xaa00000000003d64);
  pcVar8 = "currentThread";
  IVar4 = NSThread::currentThread((ID)&_OBJC_CLASS___NSThread,"currentThread");
  FUN_100399c74();
  puVar6 = &DAT_100a76a18;
  local_a0 = IVar4;
  pcStack_98 = pcVar8;
  local_90 = puVar5;
  lStack_88 = lVar9;
  FUN_100004bb4(&DAT_100a76a18,&DAT_10080b4c0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_a0,&local_80,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  _swift_bridgeObjectRelease(lVar9);
  _swift_bridgeObjectRelease(pcVar8);
  __sSS6appendyySSF(0x726854736f8cbcef,0xae003d6449646165);
  uVar11 = 0;
  FUN_10004003c(0,&DAT_100a76a20,&PTR__OBJC_CLASS___NSThread_100a65838);
  FUN_100399ba8();
  puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  local_a0 = uVar11;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = (ulong)PTR___sSSN_1009957f8;
  *param_1 = local_80;
  param_1[1] = uStack_78;
  return;
}

