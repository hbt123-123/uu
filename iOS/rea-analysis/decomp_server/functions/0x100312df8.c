// rea decompile_all
// name: FUN_100312df8
// address: 0x100312df8
// body: available
// range: 0x100312df8-0x1003130b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100312df8(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 uVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined1 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  undefined1 *puVar14;
  code *pcVar15;
  long *unaff_x20;
  long alStack_120 [4];
  long local_100;
  long local_f8;
  long local_f0;
  long lStack_e8;
  long local_e0;
  undefined8 *local_d8;
  undefined *local_d0;
  undefined8 local_c8;
  code *pcStack_c0;
  long local_b8;
  undefined1 auStack_b0 [16];
  undefined8 local_a0;
  undefined8 uStack_98;
  code *local_90;
  undefined8 uStack_88;
  
  lVar13 = *unaff_x20;
  puVar5 = &DAT_100a84680;
  local_b8 = param_2;
  FUN_100004bb4(&DAT_100a84680,&DAT_100818f90);
  puVar10 = (undefined8 *)
            ((long)alStack_120 -
            (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  lVar6 = 0;
  local_d8 = puVar10;
  local_d0 = puVar5;
  __s10Foundation10URLRequestVMa();
  local_e0 = *(long *)(lVar6 + -8);
  lVar11 = (long)puVar10 - (*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(lVar13 + 0x50);
  lVar13 = *(long *)(lVar13 + 0x58);
  lVar7 = 0;
  local_100 = lVar11;
  local_f8 = lVar6;
  _swift_getAssociatedTypeWitness(0,lVar13,uVar1,0x1008f97a8,&TargetProtocolRequirement_1008f97b8);
  local_f0 = *(long *)(lVar7 + -8);
  lVar11 = lVar11 - (*(long *)(local_f0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  alStack_120[1] = uVar1;
  alStack_120[2] = lVar11;
  lStack_e8 = lVar7;
  FUN_100314fe4(0,uVar1,lVar13);
  lVar6 = *(long *)(lVar8 + -8);
  uVar12 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar14 = (undefined1 *)(lVar11 - uVar12);
  lVar7 = (long)puVar14 - uVar12;
  uStack_98 = local_b8;
  alStack_120[3] = param_1;
  local_c8 = param_4;
  pcStack_c0 = param_3;
  local_a0 = param_1;
  local_90 = param_3;
  uStack_88 = param_4;
  FUN_1002c6c70(lVar7,FUN_100314ff0,auStack_b0,lVar8);
  local_b8 = lVar6;
  (**(code **)(lVar6 + 0x10))(puVar14,lVar7,lVar8);
  puVar9 = puVar14;
  _swift_getEnumCaseMultiPayload(puVar14,lVar8);
  lVar6 = alStack_120[2];
  if ((int)puVar9 == 0) {
    (**(code **)(local_f0 + 0x20))(alStack_120[2],puVar14,lStack_e8);
    lVar3 = local_f8;
    lVar11 = local_100;
    pcVar15 = *(code **)(local_e0 + 0x10);
    (*pcVar15)(local_100,alStack_120[3],local_f8);
    (**(code **)(lVar13 + 0x18))(lVar6,lVar11,alStack_120[1],lVar13);
    puVar10 = local_d8;
    (*pcVar15)(local_d8,lVar11,lVar3);
    _swift_storeEnumTagMultiPayload(puVar10,local_d0,0);
    (*pcStack_c0)(puVar10);
    FUN_100315050(puVar10);
    (**(code **)(local_e0 + 8))(lVar11,lVar3);
    (**(code **)(local_f0 + 8))(lVar6,lStack_e8);
  }
  else if ((int)puVar9 == 1) {
    uVar2 = *puVar14;
    FUN_100315010();
    puVar5 = &DAT_1009b01b8;
    _swift_allocError(&DAT_1009b01b8,puVar9,0,0);
    *puVar9 = uVar2;
    puVar4 = local_d0;
    puVar10 = local_d8;
    *local_d8 = puVar5;
    _swift_storeEnumTagMultiPayload(puVar10,puVar4,1);
    (*pcStack_c0)(puVar10);
    FUN_100315050(puVar10);
  }
  (**(code **)(local_b8 + 8))(lVar7,lVar8);
  return;
}

