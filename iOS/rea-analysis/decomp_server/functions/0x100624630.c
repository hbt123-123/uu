// rea decompile_all
// name: FUN_100624630
// address: 0x100624630
// body: available
// range: 0x100624630-0x100624793 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100624630(long *param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  undefined8 *param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  code *pcVar5;
  undefined8 uVar6;
  undefined1 auStack_c0 [16];
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1,auStack_68,0,0);
  if (*param_1 == 0) {
    _swift_beginAccess(param_5,auStack_80,0,0);
    uVar6 = *param_5;
    uVar1 = 0xff;
    local_b0 = param_6;
    uStack_a8 = param_7;
    local_a0 = param_8;
    local_88 = uVar6;
    _swift_getAssociatedTypeWitness
              (0xff,param_7,param_6,PTR___sStTL_100995a48,PTR___s7ElementStTl_100995700);
    uVar2 = 0;
    __sSaMa(0,uVar1);
    uVar3 = 0xff;
    _swift_getAssociatedTypeWitness
              (0xff,param_8,uVar1,0x100904f48,&TargetProtocolRequirement_100904f50);
    uVar1 = 0;
    FUN_100616300(0,uVar3);
    _swift_bridgeObjectRetain(uVar6);
    puVar4 = PTR___sSayxGSTsMc_100995898;
    _swift_getWitnessTable(PTR___sSayxGSTsMc_100995898,uVar2);
    pcVar5 = FUN_100627428;
    __sSTsE10compactMapySayqd__Gqd__Sg7ElementQzKXEKlF(FUN_100627428,auStack_c0,uVar2,uVar1,puVar4);
    _swift_bridgeObjectRelease(uVar6);
    (*param_3)(pcVar5);
    _swift_bridgeObjectRelease(pcVar5);
  }
  return;
}

