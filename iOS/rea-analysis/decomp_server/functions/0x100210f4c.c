// rea decompile_all
// name: FUN_100210f4c
// address: 0x100210f4c
// body: available
// range: 0x100210f4c-0x100211237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100210f4c(undefined8 *param_1,undefined8 *param_2,ulong param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,undefined1 param_7)

{
  undefined8 uVar1;
  ulong uVar2;
  long lVar3;
  uint uVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  ulong uVar10;
  int iVar11;
  uint uVar12;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0xc6);
  __sSS6appendyySSF(0x100000000000004a,0x80000001008a5010);
  uVar10 = (ulong)param_2[8] >> 0x3c;
  uVar6 = 0;
  if (uVar10 < 0xf) {
    uVar6 = (undefined4)param_2[6];
  }
  uVar1 = 0;
  if (uVar10 < 0xf) {
    uVar1 = param_2[7];
  }
  uVar2 = 0xc000000000000000;
  if (uVar10 < 0xf) {
    uVar2 = param_2[8];
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  local_78 = CONCAT44(local_78._4_4_,uVar6);
  puVar7 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar7 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_78 = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x3d68746170202c,0xe700000000000000);
  __sSS6appendyySSF(*param_2,param_2[1]);
  __sSS6appendyySSF(0xd000000000000016,0x80000001008a5060);
  puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar7 = PTR___sSiN_100995968;
  lVar3 = param_2[2];
  uVar4 = (uint)((ulong)param_2[3] >> 0x20);
  uVar12 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar12 == 0) {
      uVar10 = (ulong)param_2[3] >> 0x30 & 0xff;
    }
    else {
      iVar11 = (int)((ulong)lVar3 >> 0x20);
      if (SBORROW4(iVar11,(int)lVar3)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x100211238);
        (*pcVar5)();
      }
      uVar10 = (ulong)(iVar11 - (int)lVar3);
    }
  }
  else {
    uVar10 = 0;
    if (uVar12 == 2) {
      uVar10 = *(long *)(lVar3 + 0x18) - *(long *)(lVar3 + 0x10);
      if (SBORROW8(*(long *)(lVar3 + 0x18),*(long *)(lVar3 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1002110fc);
        (*pcVar5)();
      }
    }
  }
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_78 = uVar10;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(&DAT_d000000000000018,0x80000001008a5080);
  local_78 = param_4;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar7,puVar9);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar9);
  __sSS6appendyySSF(0xd00000000000001b,0x80000001008a50a0);
  __sSS6appendyySSF(param_5,param_6);
  __sSS6appendyySSF(0xd000000000000012,0x80000001008a50c0);
  local_78 = CONCAT71(local_78._1_7_,param_7);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

