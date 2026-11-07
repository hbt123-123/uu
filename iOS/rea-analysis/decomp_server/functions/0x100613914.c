// rea decompile_all
// name: FUN_100613914
// address: 0x100613914
// body: available
// range: 0x100613914-0x1006139cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100613914(undefined8 *param_1,undefined8 *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  uStack_48 = *param_2;
  uVar1 = 0xff;
  local_70 = param_3;
  uStack_68 = param_4;
  local_60 = param_5;
  uStack_58 = param_6;
  local_50 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,param_6,param_4,0x100904f48,&TargetProtocolRequirement_100904f50);
  uVar2 = 0;
  __sSaMa(0,uVar1);
  puVar3 = PTR___sSayxGSTsMc_100995898;
  _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar2);
  pcVar4 = FUN_100614d20;
  __sSTsE7flatMapySay7ElementQyd__Gqd__ABQzKXEKSTRd__lF
            (FUN_100614d20,auStack_80,uVar2,uVar1,puVar3,param_7);
  *param_1 = pcVar4;
  return;
}

