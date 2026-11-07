// rea decompile_all
// name: FUN_10015a8f8
// address: 0x10015a8f8
// body: available
// range: 0x10015a8f8-0x10015abeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015a8f8(undefined8 *param_1,long param_2,undefined4 *param_3,long param_4,long param_5,
                  long param_6,ulong param_7)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  uint uVar4;
  code *pcVar5;
  undefined *puVar6;
  int iVar7;
  ulong uVar8;
  uint uVar9;
  ulong local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x80);
  __sSS6appendyySSF(0x1000000000000041,0x80000001008950c0);
  uVar8 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
  local_78 = 0;
  if (uVar8 < 0xf) {
    local_78 = *(ulong *)(param_2 + 0xa8);
  }
  uVar2 = 0;
  if (uVar8 < 0xf) {
    uVar2 = *(undefined8 *)(param_2 + 0xb0);
  }
  uVar1 = 0xc000000000000000;
  if (uVar8 < 0xf) {
    uVar1 = *(ulong *)(param_2 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar2,uVar1);
  puVar6 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x4974616d726f662d,0xea00000000003a44);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  local_78._0_4_ = *param_3;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x654b6b636f6c622d,0xea00000000003a79);
  uVar2 = *(undefined8 *)(param_4 + 0x10);
  uVar3 = *(undefined8 *)(param_4 + 0x18);
  _swift_bridgeObjectRetain(uVar3);
  __sSS6appendyySSF(uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x6f436b636f6c622d,0xec0000003a746e75);
  local_78 = CONCAT44(local_78._4_4_,*(undefined4 *)(param_4 + 0x20));
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a8b9ee5bbb1e72d,0xa800000000000000);
  local_78 = *(ulong *)(param_5 + 0x18);
  puVar6 = &DAT_100a762d0;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_78,&local_70,puVar6,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0xe9ae8de6b095e62d,0xab000000003a8f87);
  uVar4 = (uint)(param_7 >> 0x20);
  uVar9 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar9 == 0) {
      uVar8 = param_7 >> 0x30 & 0xff;
    }
    else {
      iVar7 = (int)((ulong)param_6 >> 0x20);
      if (SBORROW4(iVar7,(int)param_6)) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10015abec);
        (*pcVar5)();
      }
      uVar8 = (ulong)(iVar7 - (int)param_6);
    }
  }
  else {
    uVar8 = 0;
    if ((uVar9 == 2) &&
       (uVar8 = *(long *)(param_6 + 0x18) - *(long *)(param_6 + 0x10),
       SBORROW8(*(long *)(param_6 + 0x18),*(long *)(param_6 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10015ab74);
      (*pcVar5)();
    }
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  local_78 = uVar8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_70;
  param_1[1] = uStack_68;
  return;
}

