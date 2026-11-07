// rea decompile_all
// name: FUN_10061a818
// address: 0x10061a818
// body: available
// range: 0x10061a818-0x10061a90f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10061a818(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                    undefined8 param_5,undefined8 param_6,code *param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined *puVar2;
  code *pcVar3;
  long unaff_x21;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  code *pcStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined1 local_48 [8];
  
  uVar1 = 0;
  local_80 = param_4;
  uStack_78 = param_5;
  local_70 = param_6;
  pcStack_68 = param_7;
  local_60 = param_8;
  uStack_58 = param_2;
  local_50 = param_3;
  _swift_getAssociatedTypeWitness
            (0,param_6,param_4,0x100904f48,&TargetProtocolRequirement_100904f50);
  puVar2 = &DAT_100aaffb8;
  FUN_100004bb4(&DAT_100aaffb8,&DAT_100848630);
  pcVar3 = FUN_10061bf68;
  FUN_100617350(FUN_10061bf68,auStack_90,uVar1,param_5,puVar2,param_8,PTR___ss5ErrorWS_100995c48,
                local_48);
  if (unaff_x21 == 0) {
    param_7 = pcVar3;
    FUN_10061dd54();
    _swift_bridgeObjectRelease(pcVar3);
  }
  return param_7;
}

