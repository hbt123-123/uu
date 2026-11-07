// rea decompile_all
// name: FUN_1000be388
// address: 0x1000be388
// body: available
// range: 0x1000be388-0x1000be47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1000be388(undefined8 param_1,undefined8 param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 *puVar4;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined1 local_48;
  
  local_48 = 7;
  puVar1 = &DAT_100a77068;
  local_58 = param_1;
  uStack_50 = param_2;
  FUN_100004bb4(&DAT_100a77068,&DAT_10080bdc8);
  puVar2 = &DAT_100a77070;
  FUN_10003f840(&DAT_100a77070,&DAT_100a77068,&DAT_10080bdc8,
                &TargetProtocolConformanceDescriptor_100820bb0);
  puVar3 = &DAT_100a77078;
  FUN_10003f840(&DAT_100a77078,&DAT_100a77068,&DAT_10080bdc8,
                &TargetProtocolConformanceDescriptor_100820bd8);
  _swift_bridgeObjectRetain(param_2);
  puVar4 = &local_58;
  FUN_10039e070(puVar4,puVar1,0,0,0,&DAT_1009b82f0,puVar1,&PTR_PTR_100a8bc30,puVar2,puVar3);
  _swift_bridgeObjectRelease(param_2);
  return puVar4;
}

