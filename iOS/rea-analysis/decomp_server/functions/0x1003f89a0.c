// rea decompile_all
// name: FUN_1003f89a0
// address: 0x1003f89a0
// body: available
// range: 0x1003f89a0-0x1003f8a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003f89a0(void)

{
  ulong uVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  byte *unaff_x20;
  undefined1 auVar9 [16];
  
  bVar2 = *unaff_x20;
  uVar8 = 0x80000001008afc70;
  puVar7 = (undefined1 *)0xd000000000000021;
  if (bVar2 != 4) {
    uVar8 = 0xea00000000007461;
    puVar7 = (undefined1 *)0x5f64657461647075;
  }
  uVar1 = 0x80000001008afc50;
  puVar5 = &DAT_d000000000000010;
  if (bVar2 != 3) {
    uVar1 = uVar8;
    puVar5 = puVar7;
  }
  puVar7 = (undefined1 *)0xd00000000000001e;
  pcVar3 = "log_sdk_fail_report";
  if (bVar2 != 1) {
    puVar7 = &DAT_d000000000000010;
    pcVar3 = "multi_instance_conflict_report";
  }
  pcVar4 = "original_version";
  puVar6 = &DAT_d000000000000013;
  if (bVar2 != 0) {
    pcVar4 = pcVar3;
    puVar6 = puVar7;
  }
  if (bVar2 < 3) {
    uVar1 = (ulong)pcVar4 | 0x8000000000000000;
    puVar5 = puVar6;
  }
  auVar9._8_8_ = uVar1;
  auVar9._0_8_ = puVar5;
  return auVar9;
}

