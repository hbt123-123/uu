// rea decompile_all
// name: FUN_1000bccc8
// address: 0x1000bccc8
// body: available
// range: 0x1000bccc8-0x1000bcf7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000bccc8(undefined8 *param_1,undefined8 param_2,double param_3,double param_4,
                  undefined8 param_5,ID param_6,char param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  double dVar9;
  double dVar10;
  undefined8 local_b0;
  double dStack_a8;
  double local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  
  local_b0 = 0;
  dStack_a8 = -2.6815615859885194e+154;
  uVar8 = param_2;
  dVar9 = param_3;
  dVar10 = param_4;
  __ss11_StringGutsV4growyySiF(0x58);
  local_90 = local_b0;
  uStack_88 = dStack_a8;
  __sSS6appendyySSF(0xd000000000000023,0x8000000100883250);
  _objc_msgSend(param_6,"frame");
  uVar4 = 0;
  local_b0 = uVar8;
  dStack_a8 = dVar9;
  local_a0 = dVar10;
  uStack_98 = param_5;
  FUN_10000610c(0);
  puVar2 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar1 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_b0,&local_90,uVar4,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3d6f69746172202c,0xe800000000000000);
  puVar5 = &DAT_100a766e8;
  FUN_100004bb4(&DAT_100a766e8,&DAT_10080b1e0);
  puVar6 = puVar5;
  _swift_allocObject();
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  puVar3 = PTR___s12CoreGraphics7CGFloatVN_100996360;
  *(undefined **)(puVar6 + 0x38) = PTR___s12CoreGraphics7CGFloatVN_100996360;
  puVar7 = puVar6;
  FUN_1000c12e0();
  *(undefined **)(puVar6 + 0x40) = puVar7;
  *(undefined8 *)(puVar6 + 0x20) = param_2;
  uVar8 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(0x4b6567616d69202c,0xec0000003d646e69);
  local_b0 = CONCAT71(local_b0._1_7_,param_7);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_b0,&local_90,&DAT_10099b498,puVar1,puVar2);
  __sSS6appendyySSF(0x526567616d69202c,0xed00003d6f697461);
  _swift_allocObject(puVar5,0x48,7);
  *(undefined8 *)(puVar5 + 0x18) = 2;
  *(undefined8 *)(puVar5 + 0x10) = 1;
  uVar8 = *(undefined8 *)(&DAT_10080bf20 + (long)param_7 * 8);
  *(undefined **)(puVar5 + 0x38) = puVar3;
  *(undefined **)(puVar5 + 0x40) = puVar7;
  *(undefined8 *)(puVar5 + 0x20) = uVar8;
  uVar8 = 0xe400000000000000;
  __sSS10FoundationE6format_S2Sh_s7CVarArg_pdtcfC(0x66332e25,0xe400000000000000,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar8);
  __sSS6appendyySSF(0x6e696c616373202c,0xea00000000003d67);
  local_b0 = 3;
  if (ABS(param_3 - param_4) <= 0.1) {
    local_b0 = 1;
  }
  uVar8 = 0;
  FUN_100006000(0);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF(&local_b0,&local_90,uVar8,puVar1,puVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = local_90;
  param_1[1] = uStack_88;
  return;
}

