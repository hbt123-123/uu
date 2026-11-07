// rea decompile_all
// name: FUN_1003a5254
// address: 0x1003a5254
// body: available
// range: 0x1003a5254-0x1003a5357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003a5254(byte param_1)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  uVar6 = 0xeb00000000726568;
  puVar3 = (undefined1 *)0x746f5f7075706f74;
  if (param_1 != 5) {
    uVar6 = 0xe800000000000000;
    puVar3 = (undefined1 *)0x6b6e696c70656564;
  }
  uVar1 = 0xec000000706f705f;
  puVar4 = (undefined1 *)0x63705f7075706f74;
  if (param_1 != 3) {
    uVar1 = 0xeb00000000747261;
    puVar4 = (undefined1 *)0x74735f7075706f74;
  }
  if (param_1 < 5) {
    uVar6 = uVar1;
    puVar3 = puVar4;
  }
  pcVar2 = "";
  puVar4 = (undefined1 *)0xd000000000000012;
  if (param_1 != 1) {
    pcVar2 = "topup_conrtol_flow";
    puVar4 = &DAT_d000000000000013;
  }
  uVar1 = 0xed0000746e756f63;
  puVar5 = (undefined1 *)0x63615f7075706f74;
  if (param_1 != 0) {
    uVar1 = (ulong)pcVar2 | 0x8000000000000000;
    puVar5 = puVar4;
  }
  if (param_1 < 3) {
    uVar6 = uVar1;
    puVar3 = puVar5;
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = puVar3;
  return auVar7;
}

