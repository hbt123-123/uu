// rea decompile_all
// name: FUN_1003f9d58
// address: 0x1003f9d58
// body: available
// range: 0x1003f9d58-0x1003f9e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f9d58(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar7 = 0x80000001008afc70;
  puVar6 = (undefined1 *)0xd000000000000021;
  if (param_1 != 4) {
    uVar7 = 0xea00000000007461;
    puVar6 = (undefined1 *)0x5f64657461647075;
  }
  uVar1 = 0x80000001008afc50;
  puVar4 = &DAT_d000000000000010;
  if (param_1 != 3) {
    uVar1 = uVar7;
    puVar4 = puVar6;
  }
  puVar6 = (undefined1 *)0xd00000000000001e;
  pcVar2 = "log_sdk_fail_report";
  if (param_1 != 1) {
    puVar6 = &DAT_d000000000000010;
    pcVar2 = "multi_instance_conflict_report";
  }
  pcVar3 = "original_version";
  puVar5 = &DAT_d000000000000013;
  if (param_1 != 0) {
    pcVar3 = pcVar2;
    puVar5 = puVar6;
  }
  if (param_1 < 3) {
    uVar1 = (ulong)pcVar3 | 0x8000000000000000;
    puVar4 = puVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,puVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

