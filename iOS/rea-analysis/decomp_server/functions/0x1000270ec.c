// rea decompile_all
// name: FUN_1000270ec
// address: 0x1000270ec
// body: available
// range: 0x1000270ec-0x1000272d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000270ec(undefined8 *param_1,ulong *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  undefined *puVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined *puVar10;
  ulong uVar11;
  ulong local_80;
  byte local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  uVar7 = *param_2;
  uVar3 = param_2[1];
  uVar11 = param_2[2];
  local_70 = 0;
  local_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x1f);
  uVar6 = uVar7;
  FUN_10044e04c(uVar7,uVar3,uVar11);
  puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar4 = PTR___ss5Int32VN_100995c78;
  local_80 = CONCAT44(local_80._4_4_,(int)uVar6);
  puVar8 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x3a6570797428,0xe600000000000000);
  uVar6 = uVar7;
  uVar9 = uVar3;
  FUN_10044eb58(uVar7,uVar3,uVar11);
  local_78 = (byte)uVar9 & 1;
  local_80 = uVar6;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_80,&local_70,&DAT_1009c0470,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x7972616d6972702c,0xe90000000000003a);
  uVar6 = uVar7;
  FUN_10044f23c(uVar7,uVar3,uVar11);
  bVar5 = (uVar6 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar5) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x3a6b636172742c,0xe700000000000000);
  FUN_10044ff18(uVar7,uVar3,uVar11);
  local_80 = CONCAT44(local_80._4_4_,(int)uVar7);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar10);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  *param_1 = local_70;
  param_1[1] = local_68;
  return;
}

