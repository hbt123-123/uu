// rea decompile_all
// name: FUN_100613414
// address: 0x100613414
// body: available
// range: 0x100613414-0x1006134df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100613414(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  code *pcVar4;
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  
  uVar1 = 0;
  local_70 = param_4;
  uStack_68 = param_5;
  local_60 = param_6;
  uStack_58 = param_2;
  local_50 = param_3;
  FUN_100614b6c(0,param_5);
  pcVar2 = FUN_100614dc0;
  FUN_100617350(FUN_100614dc0,auStack_80,param_4,uVar1,PTR___ss5NeverON_100995d08,param_6,
                PTR___ss5NeverOs5ErrorsWP_100995d10);
  pTVar3 = &TargetProtocolConformanceDescriptor_1008487f8;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008487f8,uVar1);
  pcVar4 = pcVar2;
  FUN_10061dd54(pcVar2,uVar1,pTVar3);
  _swift_bridgeObjectRelease(pcVar2);
  return pcVar4;
}

