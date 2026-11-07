// rea decompile_all
// name: FUN_100620154
// address: 0x100620154
// body: available
// range: 0x100620154-0x1006201ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100620154(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined1 auStack_60 [16];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_38;
  
  uVar1 = 0;
  local_50 = param_2;
  uStack_48 = param_3;
  local_38 = param_1;
  __sSaMa(0);
  uVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,param_3,param_2,0x100904f48,&TargetProtocolRequirement_100904f50);
  puVar3 = PTR___sSayxGSlsMc_1009958b0;
  _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar1);
  FUN_100620314(FUN_1006277cc,auStack_60,uVar1,uVar2,PTR___ss5NeverON_100995d08,puVar3,
                PTR___ss5NeverOs5ErrorsWP_100995d10);
  return;
}

