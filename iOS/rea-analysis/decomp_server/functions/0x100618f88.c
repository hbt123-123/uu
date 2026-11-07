// rea decompile_all
// name: FUN_100618f88
// address: 0x100618f88
// body: available
// range: 0x100618f88-0x100619207 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100618f88(code *param_1,undefined8 param_2,undefined8 param_3,long *param_4,long param_5,
                  undefined8 param_6)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  code *pcVar8;
  long *plVar9;
  long lVar10;
  undefined8 *puVar11;
  long lVar12;
  long lVar13;
  long local_a0 [4];
  long local_80;
  code *local_78;
  long local_70;
  
  lVar10 = *(long *)(*param_4 + 0x50);
  lVar2 = 0;
  local_a0[0] = param_5;
  local_a0[3] = param_6;
  local_78 = param_1;
  FUN_100616300(0,lVar10);
  local_70 = *(long *)(lVar2 + -8);
  puVar11 = (undefined8 *)
            ((long)local_a0 - (*(long *)(local_70 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar3 = 0;
  __sSqMa(0,lVar10);
  lVar12 = *(long *)(lVar3 + -8);
  lVar13 = (long)puVar11 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_a0[2] = *(long *)(lVar10 + -8);
  pcVar7 = (code *)(lVar13 - (*(long *)(local_a0[2] + 0x40) + 0xfU & 0xfffffffffffffff0));
  local_a0[1] = param_3;
  local_80 = lVar10;
  (*local_78)(lVar13,param_3);
  lVar6 = local_80;
  lVar1 = local_a0[3];
  lVar10 = local_a0[2];
  lVar4 = lVar13;
  local_78 = (code *)puVar11;
  (**(code **)(local_a0[2] + 0x30))(lVar13,1,local_80);
  if ((int)lVar4 == 1) {
    (**(code **)(lVar12 + 8))(lVar13,lVar3);
    FUN_10060d02c();
    puVar5 = &DAT_1009df040;
    _swift_allocError(&DAT_1009df040,lVar13,0,0);
    lVar10 = 0;
    _swift_getAssociatedTypeWitness
              (0,lVar1,local_a0[0],0x100904f48,&TargetProtocolRequirement_100904f50);
    *(long *)(lVar13 + 0x18) = lVar10;
    FUN_1000efc08(lVar13);
    (**(code **)(*(long *)(lVar10 + -8) + 0x10))();
    *(long *)(lVar13 + 0x20) = lVar6;
    *(undefined1 *)(lVar13 + 0x28) = 1;
    _swift_willThrow();
    pcVar7 = local_78;
    plVar9 = (long *)param_4[2];
    *(undefined **)local_78 = puVar5;
    _swift_storeEnumTagMultiPayload(pcVar7,lVar2,1);
    pcVar8 = *(code **)(*plVar9 + 0x68);
    _swift_errorRetain(puVar5);
    (*pcVar8)(pcVar7);
    _swift_errorRelease(puVar5);
    pcVar8 = *(code **)(local_70 + 8);
    lVar6 = lVar2;
  }
  else {
    (**(code **)(lVar10 + 0x20))(pcVar7,lVar13,lVar6);
    pcVar8 = local_78;
    plVar9 = (long *)param_4[2];
    (**(code **)(lVar10 + 0x10))(local_78,pcVar7,lVar6);
    _swift_storeEnumTagMultiPayload(pcVar8,lVar2,0);
    (**(code **)(*plVar9 + 0x68))(pcVar8);
    (**(code **)(local_70 + 8))(pcVar8,lVar2);
    pcVar8 = *(code **)(lVar10 + 8);
  }
  (*pcVar8)(pcVar7,lVar6);
  return;
}

