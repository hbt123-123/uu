// rea decompile_all
// name: FUN_10050fbdc
// address: 0x10050fbdc
// body: available
// range: 0x10050fbdc-0x10050fdcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050fbdc(undefined8 param_1,long *param_2,ulong param_3)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  undefined1 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar12 = *param_2;
  lVar9 = *(long *)(lVar12 + 0x50);
  lVar2 = 0;
  local_98 = param_1;
  __sSqMa(0,lVar9);
  lVar7 = *(long *)(lVar2 + -8);
  puVar10 = auStack_a0 + -(*(long *)(lVar7 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar13 = *(long *)(lVar9 + -8);
  lVar11 = (long)puVar10 - (*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar3 = *(long *)(lVar12 + 0x58);
  (**(code **)(param_3 + 0x10))();
  if (*(long *)(lVar3 + 0x10) != 0) {
    lVar4 = param_2[2];
    FUN_1003618e4(lVar4);
    if ((param_3 & 1) != 0) {
      FUN_1000b142c(*(long *)(lVar3 + 0x38) + lVar4 * 0x28,&local_90);
      goto LAB_10050fca4;
    }
  }
  local_70 = 0;
  uStack_88 = 0;
  local_90 = 0;
  uStack_78 = 0;
  uStack_80 = 0;
LAB_10050fca4:
  _swift_bridgeObjectRelease(lVar3);
  puVar5 = &DAT_100aaa288;
  FUN_100004bb4(&DAT_100aaa288,&DAT_100836090);
  puVar6 = puVar10;
  _swift_dynamicCast(puVar10,&local_90,puVar5,lVar9,6);
  bVar1 = ((ulong)puVar6 & 1) == 0;
  if (bVar1) {
    (**(code **)(lVar13 + 0x38))(puVar10,1,1,lVar9);
    (**(code **)(lVar7 + 8))(puVar10,lVar2);
    lVar2 = *(long *)(lVar12 + 0x60);
    uVar8 = local_98;
  }
  else {
    (**(code **)(lVar13 + 0x38))(puVar10,0,1,lVar9);
    (**(code **)(lVar13 + 0x20))(lVar11,puVar10,lVar9);
    uVar8 = local_98;
    lVar2 = *(long *)(lVar12 + 0x60);
    (**(code **)(lVar2 + 0x20))(local_98,lVar9,lVar2);
    (**(code **)(lVar13 + 8))(lVar11,lVar9);
  }
  lVar3 = 0;
  _swift_getAssociatedTypeWitness(0,lVar2,lVar9,0x100900cc4,&TargetProtocolRequirement_100900cdc);
  (**(code **)(*(long *)(lVar3 + -8) + 0x38))(uVar8,bVar1,1,lVar3);
  return;
}

