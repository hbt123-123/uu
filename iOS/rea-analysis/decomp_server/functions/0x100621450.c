// rea decompile_all
// name: FUN_100621450
// address: 0x100621450
// body: available
// range: 0x100621450-0x100621663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100621450(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  
  lVar2 = 0xff;
  local_90 = param_9;
  uStack_88 = param_12;
  local_a0 = param_3;
  local_98 = param_2;
  local_80 = param_6;
  local_78 = param_1;
  local_70 = param_5;
  local_68 = param_4;
  _swift_getAssociatedTypeWitness();
  lVar3 = 0;
  __sSqMa(0,lVar2);
  lVar8 = (long)&local_a0 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar4 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_11,param_8,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  __sSqMa(0,lVar4);
  lVar7 = lVar8 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar5 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,param_10,param_7,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar3 = 0;
  __sSqMa(0,lVar5);
  lVar9 = lVar7 - (*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(lVar9,param_7,param_10);
  lVar6 = *(long *)(lVar5 + -8);
  lVar3 = lVar9;
  (**(code **)(lVar6 + 0x30))(lVar9,1,lVar5);
  if ((int)lVar3 == 1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10062165c);
    (*pcVar1)();
  }
  (**(code **)(lVar6 + 0x20))(local_78,lVar9,lVar5);
  FUN_100617228(lVar7,param_8,param_11);
  lVar5 = *(long *)(lVar4 + -8);
  lVar3 = lVar7;
  (**(code **)(lVar5 + 0x30))(lVar7,1,lVar4);
  if ((int)lVar3 != 1) {
    (**(code **)(lVar5 + 0x20))(local_98,lVar7,lVar4);
    FUN_100617228(lVar8,local_90,uStack_88);
    lVar4 = *(long *)(lVar2 + -8);
    lVar3 = lVar8;
    (**(code **)(lVar4 + 0x30))(lVar8,1,lVar2);
    if ((int)lVar3 != 1) {
      (**(code **)(lVar4 + 0x20))(local_a0,lVar8,lVar2);
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100621664);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100621660);
  (*pcVar1)();
}

