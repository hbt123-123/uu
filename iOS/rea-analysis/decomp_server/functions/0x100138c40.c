// rea decompile_all
// name: FUN_100138c40
// address: 0x100138c40
// body: available
// range: 0x100138c40-0x100138e37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100138c40(undefined8 *param_1,long param_2,long *param_3)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  uint uVar7;
  ulong local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_68 = 0;
  uStack_60 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x53);
  local_50 = local_68;
  uStack_48 = uStack_60;
  __sSS6appendyySSF(0x100000000000002c,0x80000001008901e0);
  lVar1 = _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList;
  _swift_beginAccess(param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockList,
                     &local_68,0,0);
  local_70 = *(ulong *)(*(long *)(param_2 + lVar1) + 0x10);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6382b1e681a6e82d,0xad00003a746e756f);
  local_70 = CONCAT35(local_70._5_3_,
                      *(undefined5 *)
                       (param_2 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount));
  puVar4 = &DAT_100a75ab0;
  FUN_100004bb4(&DAT_100a75ab0,&DAT_100809b40);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_70,&local_50,puVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x1000000000000014,0x8000000100890210);
  lVar1 = *param_3;
  uVar2 = (uint)((ulong)param_3[1] >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar7 == 0) {
      uVar6 = (ulong)param_3[1] >> 0x30 & 0xff;
    }
    else {
      iVar5 = (int)((ulong)lVar1 >> 0x20);
      if (SBORROW4(iVar5,(int)lVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100138e38);
        (*pcVar3)();
      }
      uVar6 = (ulong)(iVar5 - (int)lVar1);
    }
  }
  else {
    uVar6 = 0;
    if (uVar7 == 2) {
      uVar6 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
      if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100138dc8);
        (*pcVar3)();
      }
    }
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_70 = uVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

