// rea decompile_all
// name: FUN_10054e1ac
// address: 0x10054e1ac
// body: available
// range: 0x10054e1ac-0x10054e2e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10054e1ac(long param_1)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  byte bVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  local_40 = 0;
  uStack_38 = 0xe000000000000000;
  bVar5 = *(byte *)(param_1 + 0x10);
  pcVar2 = "JSON encoding error";
  if (bVar5 != 2) {
    pcVar2 = "C99D01E10InternPool";
  }
  pcVar1 = "Stream decoding error";
  if (bVar5 != 0) {
    pcVar1 = "JSON decoding error";
  }
  puVar6 = &DAT_d000000000000013;
  if (bVar5 < 2) {
    pcVar2 = pcVar1;
    puVar6 = (undefined1 *)0xd000000000000015;
  }
  __sSS6appendyySSF(puVar6,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __sSS6appendyySSF(0x2074612820,0xe500000000000000);
  uStack_60 = *(undefined8 *)(param_1 + 0x30);
  local_68 = *(undefined8 *)(param_1 + 0x28);
  uStack_50 = *(undefined8 *)(param_1 + 0x40);
  local_58 = *(undefined8 *)(param_1 + 0x38);
  local_48 = *(undefined8 *)(param_1 + 0x48);
  __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
            (&local_68,&local_40,&DAT_1009d17f0,PTR___ss26DefaultStringInterpolationVN_100995bf0,
             PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_100995bf8);
  __sSS6appendyySSF(0x203a29,0xe300000000000000);
  uVar3 = *(undefined8 *)(param_1 + 0x18);
  uVar4 = *(undefined8 *)(param_1 + 0x20);
  _swift_bridgeObjectRetain(uVar4);
  __sSS6appendyySSF(uVar3,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  auVar7._8_8_ = uStack_38;
  auVar7._0_8_ = local_40;
  return auVar7;
}

