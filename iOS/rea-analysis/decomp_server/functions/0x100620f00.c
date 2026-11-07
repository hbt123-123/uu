// rea decompile_all
// name: FUN_100620f00
// address: 0x100620f00
// body: available
// range: 0x100620f00-0x10062108b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100620f00(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0xff;
  local_70 = param_2;
  local_68 = param_4;
  _swift_getAssociatedTypeWitness
            (0xff,param_8,param_6,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar7 = (long)&local_70 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_7,param_5,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  __sSqMa(0,lVar4);
  lVar6 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(lVar6,param_5,param_7);
  lVar5 = *(long *)(lVar4 + -8);
  lVar3 = lVar6;
  (**(code **)(lVar5 + 0x30))(lVar6,1,lVar4);
  if ((int)lVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100621088);
    (*pcVar1)();
  }
  (**(code **)(lVar5 + 0x20))(param_1,lVar6,lVar4);
  FUN_100617228(lVar7,param_6,param_8);
  lVar4 = *(long *)(lVar2 + -8);
  lVar3 = lVar7;
  (**(code **)(lVar4 + 0x30))(lVar7,1,lVar2);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar4 + 0x20))(local_70,lVar7,lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10062108c);
  (*pcVar1)();
}

