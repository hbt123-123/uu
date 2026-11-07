// rea decompile_all
// name: FUN_10026c9d4
// address: 0x10026c9d4
// body: available
// range: 0x10026c9d4-0x10026ca4f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10026c9d4(void)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auVar3 [16];
  undefined1 auStack_80 [40];
  undefined1 auStack_58 [24];
  undefined8 local_40;
  long lStack_38;
  
  FUN_10026c920();
  FUN_1000a0074(auStack_80,auStack_58);
  FUN_10003f030(auStack_58,local_40);
  uVar1 = local_40;
  lVar2 = lStack_38;
  (**(code **)(lStack_38 + 0x18))(local_40,lStack_38);
  FUN_10003f094(auStack_58);
  auVar3._8_8_ = lVar2;
  auVar3._0_8_ = uVar1;
  return auVar3;
}

