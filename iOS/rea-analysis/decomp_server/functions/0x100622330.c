// rea decompile_all
// name: FUN_100622330
// address: 0x100622330
// body: available
// range: 0x100622330-0x10062269f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100622330(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined8 in_stack_00000020;
  undefined8 in_stack_00000028;
  undefined8 in_stack_00000030;
  undefined8 in_stack_00000038;
  undefined8 in_stack_00000040;
  undefined8 in_stack_00000048;
  undefined8 in_stack_00000050;
  undefined8 in_stack_00000058;
  undefined1 auStack_110 [8];
  undefined8 local_108;
  undefined1 *local_100;
  undefined8 local_f8;
  undefined8 local_f0;
  long local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  
  local_78 = in_stack_00000038;
  local_80 = in_stack_00000010;
  lVar5 = 0xff;
  local_e0 = in_stack_00000058;
  local_f8 = in_stack_00000030;
  local_108 = param_5;
  local_f0 = param_4;
  local_d0 = param_3;
  local_b8 = param_2;
  local_a8 = param_8;
  local_98 = param_1;
  local_88 = param_7;
  local_70 = param_6;
  _swift_getAssociatedTypeWitness();
  lVar6 = 0;
  local_e8 = lVar5;
  __sSqMa();
  lVar10 = *(long *)(*(long *)(lVar6 + -8) + 0x40);
  lVar6 = 0xff;
  local_c8 = in_stack_00000050;
  local_d8 = in_stack_00000028;
  local_100 = auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0);
  _swift_getAssociatedTypeWitness
            (0xff,in_stack_00000050,in_stack_00000028,0x100904f48,
             &TargetProtocolRequirement_100904f50);
  lVar5 = 0;
  __sSqMa(0,lVar6);
  lVar15 = (long)(auStack_110 + -(lVar10 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = 0xff;
  local_b0 = in_stack_00000048;
  local_c0 = in_stack_00000020;
  _swift_getAssociatedTypeWitness
            (0xff,in_stack_00000048,in_stack_00000020,0x100904f48,
             &TargetProtocolRequirement_100904f50);
  lVar5 = 0;
  __sSqMa(0,lVar10);
  lVar12 = lVar15 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0xff;
  local_90 = in_stack_00000040;
  local_a0 = in_stack_00000018;
  _swift_getAssociatedTypeWitness
            (0xff,in_stack_00000040,in_stack_00000018,0x100904f48,
             &TargetProtocolRequirement_100904f50);
  lVar5 = 0;
  __sSqMa(0,lVar7);
  uVar3 = local_78;
  uVar2 = local_80;
  lVar13 = lVar12 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0xff;
  _swift_getAssociatedTypeWitness
            (0xff,local_78,local_80,0x100904f48,&TargetProtocolRequirement_100904f50);
  lVar5 = 0;
  __sSqMa(0,lVar8);
  lVar14 = lVar13 - (*(long *)(*(long *)(lVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100617228(lVar14,uVar2,uVar3);
  lVar11 = *(long *)(lVar8 + -8);
  lVar5 = lVar14;
  (**(code **)(lVar11 + 0x30))(lVar14,1,lVar8);
  if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100622690);
    (*pcVar4)();
  }
  (**(code **)(lVar11 + 0x20))(local_98,lVar14,lVar8);
  FUN_100617228(lVar13,local_a0,local_90);
  lVar8 = *(long *)(lVar7 + -8);
  lVar5 = lVar13;
  (**(code **)(lVar8 + 0x30))(lVar13,1,lVar7);
  if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100622694);
    (*pcVar4)();
  }
  (**(code **)(lVar8 + 0x20))(local_b8,lVar13,lVar7);
  FUN_100617228(lVar12,local_c0,local_b0);
  lVar7 = *(long *)(lVar10 + -8);
  lVar5 = lVar12;
  (**(code **)(lVar7 + 0x30))(lVar12,1,lVar10);
  if ((int)lVar5 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100622698);
    (*pcVar4)();
  }
  (**(code **)(lVar7 + 0x20))(local_d0,lVar12,lVar10);
  FUN_100617228(lVar15,local_d8,local_c8);
  lVar10 = *(long *)(lVar6 + -8);
  lVar5 = lVar15;
  (**(code **)(lVar10 + 0x30))(lVar15,1,lVar6);
  if ((int)lVar5 != 1) {
    (**(code **)(lVar10 + 0x20))(local_f0,lVar15,lVar6);
    puVar1 = local_100;
    FUN_100617228(local_100,local_f8,local_e0);
    lVar5 = local_e8;
    lVar6 = *(long *)(local_e8 + -8);
    puVar9 = puVar1;
    (**(code **)(lVar6 + 0x30))(puVar1,1,local_e8);
    if ((int)puVar9 != 1) {
      (**(code **)(lVar6 + 0x20))(local_108,puVar1,lVar5);
      return;
    }
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x1006226a0);
    (*pcVar4)();
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x10062269c);
  (*pcVar4)();
}

