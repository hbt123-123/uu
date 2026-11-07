// rea decompile_all
// name: FUN_100623130
// address: 0x100623130
// body: available
// range: 0x100623130-0x100623287 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100623130(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  code *pcVar6;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  code *local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1,auStack_68,0,0);
  if (*param_1 == 0) {
    _swift_beginAccess(param_4,auStack_80,0,0);
    pcVar6 = (code *)*param_4;
    uVar1 = 0xff;
    local_b0 = param_5;
    uStack_a8 = param_6;
    local_a0 = param_7;
    local_88 = pcVar6;
    _swift_getAssociatedTypeWitness
              (0xff,param_6,param_5,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar2 = 0;
    __sSaMa(0,uVar1);
    uVar3 = 0;
    _swift_getAssociatedTypeWitness
              (0,param_7,uVar1,0x100904f48,&TargetProtocolRequirement_100904f50);
    _swift_bridgeObjectRetain(pcVar6);
    puVar4 = PTR___sSayxGSTsMc_100995898;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar2);
    pcVar5 = FUN_10062769c;
    __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF(FUN_10062769c,auStack_c0,uVar2,uVar3,puVar4);
    _swift_bridgeObjectRelease(pcVar6);
    local_88 = pcVar5;
    FUN_10061630c(&local_88);
    _swift_bridgeObjectRelease(pcVar5);
  }
  return;
}

