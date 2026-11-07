// rea decompile_all
// name: FUN_1001170ec
// address: 0x1001170ec
// body: available
// range: 0x1001170ec-0x1001171ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001170ec(undefined8 param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  undefined1 local_51;
  undefined8 local_50;
  undefined8 uStack_48;
  
  local_50 = 0;
  uStack_48 = 0xe000000000000000;
  __sSS6appendyySSF(0x28,0xe100000000000000);
  puVar5 = PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8;
  puVar4 = PTR___ss26DefaultStringInterpolationVN_100995bf0;
  __sSd5write2toyxz_ts16TextOutputStreamRzlF
            (param_1,&local_50,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  local_51 = (undefined1)param_2;
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_51,&local_50,&DAT_10099da20,puVar4,puVar5);
  __sSS6appendyySSF(0x3d6e4f73692c,0xe600000000000000);
  bVar6 = (param_2 & 0x100) != 0;
  uVar1 = 0x65736c6166;
  if (bVar6) {
    uVar1 = 0x65757274;
  }
  uVar2 = 0xe500000000000000;
  if (bVar6) {
    uVar2 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x29,0xe100000000000000);
  auVar3._8_8_ = uStack_48;
  auVar3._0_8_ = local_50;
  return auVar3;
}

