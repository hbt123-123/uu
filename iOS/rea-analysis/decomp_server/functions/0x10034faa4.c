// rea decompile_all
// name: FUN_10034faa4
// address: 0x10034faa4
// body: available
// range: 0x10034faa4-0x10034fb17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10034faa4(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar3 = *param_1;
  uVar4 = *param_2;
  uVar1 = 0;
  FUN_100277254(0);
  puVar2 = &DAT_100a87e48;
  FUN_100005c90(&DAT_100a87e48,FUN_100277254,&TargetProtocolConformanceDescriptor_1008166ac);
  __s14CoreFoundation9_CFObjectPAAE2eeoiySbx_xtFZ(uVar3,uVar4,uVar1,puVar2);
  return (uint)uVar3 & 1;
}

