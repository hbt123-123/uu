// rea decompile_all
// name: FUN_10019303c
// address: 0x10019303c
// body: available
// range: 0x10019303c-0x1001932cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019303c(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined *puVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined *puVar5;
  ulong uVar6;
  long lVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  ulong local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x70);
  __sSS6appendyySSF(0x1000000000000037,0x80000001008990b0);
  local_60 = CONCAT44(local_60._4_4_,*(undefined4 *)(param_2 + 0x14));
  puVar5 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x654b6b636f6c622d,0xea00000000003a79);
  uStack_58 = *(undefined8 *)(param_2 + 0x28);
  local_60 = *(ulong *)(param_2 + 0x20);
  puVar5 = &DAT_100a75b50;
  FUN_100004bb4(&DAT_100a75b50,&DAT_100809be0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,puVar5,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x6f436b636f6c622d,0xec0000003a746e75);
  local_60 = *(ulong *)(param_2 + 0x70);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008990f0);
  uVar9 = *(ulong *)(param_2 + 0x68);
  if (uVar9 >> 0x3c < 0xf) {
    lVar7 = *(long *)(param_2 + 0x60);
    uVar1 = (uint)(uVar9 >> 0x20);
    uVar10 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if (uVar10 == 0) {
        uVar6 = uVar9 >> 0x30 & 0xff;
      }
      else {
        iVar8 = (int)((ulong)lVar7 >> 0x20);
        if (SBORROW4(iVar8,(int)lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1001932cc);
          (*pcVar4)();
        }
        uVar6 = (ulong)(iVar8 - (int)lVar7);
      }
      goto LAB_1001931b4;
    }
    if (uVar10 == 2) {
      uVar6 = *(long *)(lVar7 + 0x18) - *(long *)(lVar7 + 0x10);
      if (SBORROW8(*(long *)(lVar7 + 0x18),*(long *)(lVar7 + 0x10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1001932b4);
        (*pcVar4)();
      }
      goto LAB_1001931b4;
    }
  }
  uVar6 = 0;
LAB_1001931b4:
  uStack_58 = CONCAT71(uStack_58._1_7_,0xe < uVar9 >> 0x3c);
  puVar5 = &DAT_100a7c340;
  local_60 = uVar6;
  FUN_100004bb4(&DAT_100a7c340,&DAT_100810278);
  puVar3 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar2 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_60,&local_50,puVar5,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x6570795463616d2d,0xe90000000000003a);
  local_60 = *(ulong *)(param_2 + 0x58);
  puVar5 = &DAT_100a762d0;
  FUN_100004bb4(&DAT_100a762d0,&DAT_10080aac0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_60,&local_50,puVar5,puVar2,puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_50;
  param_1[1] = uStack_48;
  return;
}

