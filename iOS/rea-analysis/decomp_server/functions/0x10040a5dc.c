// rea decompile_all
// name: FUN_10040a5dc
// address: 0x10040a5dc
// body: available
// range: 0x10040a5dc-0x10040a67b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10040a5dc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  long unaff_x21;
  undefined8 uVar2;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  
  puVar1 = &local_70;
  uVar2 = param_4[3];
  FUN_10040bbe0();
  if (unaff_x21 == 0) {
    uStack_58 = param_4[1];
    local_60 = *param_4;
    FUN_1000a9ec8(&local_60);
    _swift_bridgeObjectRelease(uVar2);
    uStack_68 = param_4[5];
    local_70 = param_4[4];
  }
  else {
    uStack_38 = param_4[1];
    local_40 = *param_4;
    FUN_1000a9ec8(&local_40);
    _swift_bridgeObjectRelease(uVar2);
    uStack_48 = param_4[5];
    local_50 = param_4[4];
    puVar1 = &local_50;
  }
  FUN_1000a9ec8(puVar1);
  return param_1;
}

