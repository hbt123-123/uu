// rea decompile_all
// name: FUN_1003b353c
// address: 0x1003b353c
// body: available
// range: 0x1003b353c-0x1003b36db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003b353c(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  ulong uVar4;
  char *pcVar5;
  char *pcVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ulong uVar9;
  undefined1 *puVar10;
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  
  if (5 < param_1) {
    pcVar5 = "report_server_address";
    puVar10 = (undefined1 *)0xd000000000000017;
    if (param_1 != 10) {
      pcVar5 = "streamer_retry_delta_ms";
      puVar10 = (undefined1 *)0xd00000000000001b;
    }
    pcVar6 = "lta";
    puVar7 = (undefined1 *)0xd000000000000015;
    if (param_1 != 9) {
      pcVar6 = pcVar5;
      puVar7 = puVar10;
    }
    uVar9 = 0xec0000006e656b6f;
    puVar10 = (undefined1 *)0x745f74726f706572;
    if (param_1 != 7) {
      uVar9 = 0xea00000000006c72;
      puVar10 = (undefined1 *)0x755f74726f706572;
    }
    uVar4 = 0x80000001008af850;
    puVar8 = &DAT_d000000000000013;
    if (param_1 != 6) {
      uVar4 = uVar9;
      puVar8 = puVar10;
    }
    uVar9 = (ulong)pcVar6 | 0x8000000000000000;
    if (param_1 < 9) {
      uVar9 = uVar4;
      puVar7 = puVar8;
    }
    auVar12._8_8_ = uVar9;
    auVar12._0_8_ = puVar7;
    return auVar12;
  }
  puVar10 = (undefined1 *)0x6e696c616e676973;
  uVar1 = 0xee007473696c5f67;
  if (param_1 != 4) {
    puVar10 = (undefined1 *)0xd000000000000015;
    uVar1 = 0x80000001008af830;
  }
  uVar3 = 0xeb00000000656d61;
  puVar7 = (undefined1 *)0x6e5f656369766564;
  if (param_1 != 3) {
    uVar3 = uVar1;
    puVar7 = puVar10;
  }
  puVar10 = (undefined1 *)0x6e656b6f74;
  if (param_1 != 1) {
    puVar10 = (undefined1 *)0x64695f6572616873;
  }
  uVar1 = 0xe500000000000000;
  if (param_1 != 1) {
    uVar1 = 0xe800000000000000;
  }
  uVar2 = 0x80000001008af7f0;
  puVar8 = &DAT_d000000000000010;
  if (param_1 != 0) {
    uVar2 = uVar1;
    puVar8 = puVar10;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    puVar7 = puVar8;
  }
  auVar11._8_8_ = uVar3;
  auVar11._0_8_ = puVar7;
  return auVar11;
}

