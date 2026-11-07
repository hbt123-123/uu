// rea decompile_all
// name: FUN_100209b80
// address: 0x100209b80
// body: available
// range: 0x100209b80-0x100209e87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100209b80(undefined8 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                  ulong param_5,undefined4 *param_6,undefined1 param_7)

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
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x9a);
  __sSS6appendyySSF(0x1000000000000045,0x80000001008a3930);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_78._0_4_ = param_2;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x64496b736174202c,0xe90000000000003d);
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  local_78._0_4_ = param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6e49656c6966202c,0xec0000003d786564);
  local_78 = CONCAT44(local_78._4_4_,param_4);
  puVar5 = puVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x736575716572202c,0xec0000003d644974);
  puVar5 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  local_78 = param_5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x496b636f6c62202c,0xea00000000003d64);
  local_78 = CONCAT44(local_78._4_4_,*param_6);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x4c6b636f6c62202c,0xeb000000003d6e65);
  lVar1 = *(long *)(param_6 + 2);
  uVar2 = (uint)(*(ulong *)(param_6 + 4) >> 0x20);
  uVar9 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar8 = *(ulong *)(param_6 + 4) >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)lVar1 >> 0x20);
      if (SBORROW4(iVar7,(int)lVar1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100209e88);
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
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100209dc8);
        (*pcVar3)();
      }
    }
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_78 = uVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0xd000000000000011,0x80000001008a3360);
  local_78 = CONCAT71(local_78._1_7_,param_7);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,&DAT_10099e260,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

