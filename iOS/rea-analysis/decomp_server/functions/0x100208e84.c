// rea decompile_all
// name: FUN_100208e84
// address: 0x100208e84
// body: available
// range: 0x100208e84-0x1002091d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100208e84(undefined8 *param_1,undefined4 param_2,ulong param_3,undefined8 *param_4,
                  undefined1 param_5)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_68;
  undefined8 local_60;
  undefined8 uStack_58;
  
  local_60 = 0;
  uStack_58 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xc3);
  __sSS6appendyySSF(0x100000000000004a,0x80000001008a3770);
  local_68 = CONCAT44(local_68._4_4_,param_2);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar4 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_68 = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  __sSS6appendyySSF(*param_4,param_4[1]);
  __sSS6appendyySSF(0x6e556b736174202c,0xef3d444965757169);
  __sSS6appendyySSF(param_4[9],param_4[10]);
  __sSS6appendyySSF(0x7265646c6f66202c,0xed00003d656d614e);
  __sSS6appendyySSF(param_4[5],param_4[6]);
  __sSS6appendyySSF(0x4373656c6966202c,0xed00003d746e756f);
  local_68 = *(ulong *)(param_4[2] + 0x10);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x61447473696c202c,0xef3d657a69536174);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar4 = PTR___sSiN_100995968;
  lVar1 = param_4[7];
  uVar2 = (uint)((ulong)param_4[8] >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar8 = (ulong)param_4[8] >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)lVar1 >> 0x20);
      if (SBORROW4(iVar7,(int)lVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002091d8);
        (*pcVar3)();
      }
      uVar8 = (ulong)(iVar7 - (int)lVar1);
    }
  }
  else {
    uVar8 = 0;
    if (uVar9 == 2) {
      uVar8 = *(long *)(lVar1 + 0x18) - *(long *)(lVar1 + 0x10);
      if (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1002090c4);
        (*pcVar3)();
      }
    }
  }
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_68 = uVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x657461727473202c,0xeb000000003d7967);
  local_68 = param_4[3];
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008a3360);
  local_68 = CONCAT71(local_68._1_7_,param_5);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_60,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_60;
  param_1[1] = uStack_58;
  return;
}

