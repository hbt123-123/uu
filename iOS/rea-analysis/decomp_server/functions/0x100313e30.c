// rea decompile_all
// name: FUN_100313e30
// address: 0x100313e30
// body: available
// range: 0x100313e30-0x100313fef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100313e30(long param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  bool bVar2;
  long lVar3;
  long lVar4;
  undefined1 *puVar5;
  code *pcVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined1 *puVar10;
  undefined1 auStack_70 [8];
  long local_68;
  
  lVar3 = 0xff;
  local_68 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,param_4,param_3,0x1008f97a8,&TargetProtocolRequirement_1008f97b8);
  lVar4 = 0;
  __sSqMa(0,lVar3);
  lVar7 = *(long *)(lVar4 + -8);
  puVar10 = auStack_70 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = *(long *)(lVar3 + -8);
  lVar9 = (long)puVar10 - (*(long *)(lVar8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(lVar7 + 0x10))(puVar10,param_2,lVar4);
  puVar5 = puVar10;
  (**(code **)(lVar8 + 0x30))(puVar10,1,lVar3);
  bVar2 = (int)puVar5 != 1;
  if (bVar2) {
    pcVar6 = *(code **)(lVar8 + 0x20);
    (*pcVar6)(lVar9,puVar10,lVar3);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,lVar3,PTR___sSiN_100995968,0,0);
    lVar4 = local_68;
    iVar1 = *(int *)(lVar7 + 0x30);
    (*pcVar6)(local_68,lVar9,lVar3);
    lVar3 = 0;
    FUN_100316ccc(0,param_3,param_4);
    *(undefined8 *)(lVar4 + iVar1) = *(undefined8 *)(param_2 + *(int *)(lVar3 + 0x24));
    pcVar6 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
  }
  else {
    (**(code **)(lVar7 + 8))(puVar10,lVar4);
    lVar7 = 0;
    _swift_getTupleTypeMetadata2(0,lVar3,PTR___sSiN_100995968,0,0);
    pcVar6 = *(code **)(*(long *)(lVar7 + -8) + 0x38);
    lVar4 = local_68;
  }
  (*pcVar6)(lVar4,!bVar2,1,lVar7);
  return;
}

