// rea decompile_all
// name: FUN_10061d918
// address: 0x10061d918
// body: available
// range: 0x10061d918-0x10061db87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10061d918(undefined8 param_1,long *param_2,long *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  undefined *puVar4;
  TargetProtocolConformanceDescriptor *pTVar5;
  ulong uVar6;
  long lVar7;
  code *pcVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  long lVar14;
  long *local_80;
  undefined1 auStack_78 [24];
  
  lVar12 = *(long *)(*param_2 + 0x50);
  lVar7 = *(long *)(lVar12 + -8);
  puVar13 = auStack_78 + (-8 - (*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar1 = 0;
  local_80 = param_3;
  FUN_100616300(0,lVar12);
  lVar11 = *(long *)(lVar1 + -8);
  uVar6 = *(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar10 = (undefined8 *)(puVar13 + -uVar6);
  lVar14 = (long)puVar10 - uVar6;
  (**(code **)(lVar11 + 0x10))(lVar14,param_1,lVar1);
  lVar2 = lVar14;
  _swift_getEnumCaseMultiPayload(lVar14,lVar1);
  if ((int)lVar2 == 1) {
    pcVar8 = *(code **)(lVar11 + 8);
    (*pcVar8)(lVar14,lVar1);
    uVar6 = 0;
    FUN_100616218(0,lVar12);
    pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar6);
    FUN_10061a0c8(uVar6,pTVar5);
    plVar9 = local_80;
    if ((uVar6 & 1) != 0) {
      plVar3 = local_80;
      _swift_beginAccess(local_80,auStack_78,1,0);
      lVar7 = *plVar9;
      lVar2 = lVar7 + -1;
      if (SBORROW8(lVar7,1)) {
                    /* WARNING: Does not return */
        pcVar8 = (code *)SoftwareBreakpoint(1,0x10061db88);
        (*pcVar8)();
      }
      *plVar9 = lVar2;
      if (lVar2 == 0) {
        plVar9 = (long *)param_2[2];
        FUN_10060d02c();
        puVar4 = &DAT_1009df040;
        _swift_allocError(&DAT_1009df040,plVar3,0,0);
        *plVar3 = 5;
        plVar3[2] = 0;
        plVar3[1] = 0;
        plVar3[4] = 0;
        plVar3[3] = 0;
        *(undefined1 *)(plVar3 + 5) = 2;
        *puVar10 = puVar4;
        _swift_storeEnumTagMultiPayload(puVar10,lVar1,1);
        (**(code **)(*plVar9 + 0x68))(puVar10);
        (*pcVar8)(puVar10,lVar1);
      }
    }
  }
  else {
    (**(code **)(lVar7 + 0x20))(puVar13,lVar14,lVar12);
    uVar6 = 0;
    FUN_100616218(0,lVar12);
    pTVar5 = &TargetProtocolConformanceDescriptor_1008488a0;
    _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1008488a0,uVar6);
    FUN_10061a0c8(uVar6,pTVar5);
    plVar9 = local_80;
    if ((uVar6 & 1) != 0) {
      _swift_beginAccess(local_80,auStack_78,1,0);
      *plVar9 = 0;
      plVar9 = (long *)param_2[2];
      (**(code **)(lVar7 + 0x10))(puVar10,puVar13,lVar12);
      _swift_storeEnumTagMultiPayload(puVar10,lVar1,0);
      (**(code **)(*plVar9 + 0x68))(puVar10);
      (**(code **)(lVar11 + 8))(puVar10,lVar1);
    }
    (**(code **)(lVar7 + 8))(puVar13,lVar12);
  }
  return;
}

