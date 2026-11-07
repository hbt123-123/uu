// rea decompile_all
// name: FUN_1003130b4
// address: 0x1003130b4
// body: available
// range: 0x1003130b4-0x100313563 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003130b4(undefined1 *param_1,long param_2,long param_3,undefined8 param_4,long param_5,
                  long param_6,long *param_7)

{
  long *plVar1;
  long lVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  ulong uVar12;
  undefined8 uVar13;
  undefined1 *puVar14;
  undefined8 uVar15;
  long lVar16;
  ulong uVar17;
  code *pcVar18;
  long lVar19;
  undefined1 auStack_110 [8];
  ulong local_108;
  long local_100;
  long *local_f8;
  undefined8 local_f0;
  long lStack_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  long local_c0;
  long local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  long local_90;
  undefined8 local_88;
  undefined1 *local_80;
  
  uVar15 = *(undefined8 *)(*param_7 + 0x50);
  lVar2 = *(long *)(*param_7 + 0x58);
  uVar6 = 0xff;
  local_f8 = param_7;
  local_f0 = param_4;
  lStack_e8 = param_6;
  local_c8 = param_3;
  local_b0 = param_5;
  local_80 = param_1;
  _swift_getAssociatedTypeWitness
            (0xff,lVar2,uVar15,0x1008f97a8,&TargetProtocolRequirement_1008f97b8);
  lVar7 = 0;
  __sSqMa(0,uVar6);
  lVar19 = *(long *)(lVar7 + -8);
  puVar14 = auStack_110 + -(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_98 = *(long *)(uVar6 - 8);
  lVar16 = (long)puVar14 - (*(long *)(local_98 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar8 = 0;
  local_a0 = lVar7;
  local_90 = lVar16;
  __s10Foundation10URLRequestVMa();
  local_d8 = *(long *)(lVar8 + -8);
  lVar16 = lVar16 - (*(long *)(local_d8 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar7 = 0;
  local_e0 = lVar16;
  local_d0 = lVar8;
  FUN_100316f58(0,uVar15,lVar2);
  local_a8 = *(long *)(lVar7 + -8);
  uVar17 = *(long *)(local_a8 + 0x40) + 0xfU & 0xfffffffffffffff0;
  local_c0 = lVar16 - uVar17;
  local_b8 = local_c0 - uVar17;
  lVar8 = 0;
  local_88 = uVar15;
  FUN_100316ccc(0,uVar15,lVar2);
  if (*(long *)(param_2 + *(int *)(lVar8 + 0x28)) == 1) {
    local_100 = (long)*(int *)(lVar8 + 0x34);
    uVar17 = 0;
    __sSaMa(0,lVar7);
    puVar9 = PTR___sSayxGSlsMc_1009958b0;
    _swift_getWitnessTable(PTR___sSayxGSlsMc_1009958b0,uVar17);
    local_108 = uVar17;
    __sSlsE7isEmptySbvg(uVar17,puVar9);
    lVar5 = local_d0;
    lVar4 = local_d8;
    lVar16 = local_e0;
    if ((uVar17 & 1) != 0) goto LAB_100313268;
    (**(code **)(local_d8 + 0x10))(local_e0,local_c8,local_d0);
    lVar19 = local_b8;
    (**(code **)(lVar4 + 0x20))(local_b8,lVar16,lVar5);
    lVar4 = local_a8;
    lVar16 = local_c0;
    lVar8 = lStack_e8;
    uVar15 = local_f0;
    *(undefined8 *)(lVar19 + *(int *)(lVar7 + 0x24)) = local_f0;
    plVar1 = (long *)(lVar19 + *(int *)(lVar7 + 0x28));
    *plVar1 = local_b0;
    plVar1[1] = lStack_e8;
    (**(code **)(local_a8 + 0x10))(local_c0,lVar19,lVar7);
    _swift_retain(uVar15);
    _swift_retain(lVar8);
    __sSa6appendyyxnF(local_100,lVar16,local_108);
    (**(code **)(lVar4 + 8))(lVar19,lVar7);
    uVar15 = local_88;
LAB_1003134e4:
    uVar11 = 0;
    FUN_100314fe4(0,uVar15,lVar2);
    uVar15 = 2;
    puVar14 = local_80;
  }
  else {
LAB_100313268:
    lVar16 = local_a0;
    (**(code **)(lVar19 + 0x10))(puVar14,param_2,local_a0);
    lVar4 = local_98;
    puVar10 = puVar14;
    (**(code **)(local_98 + 0x30))(puVar14,1,uVar6);
    if ((int)puVar10 == 1) {
      (**(code **)(lVar19 + 8))(puVar14,lVar16);
      puVar14 = local_80;
      *local_80 = 0;
      uVar11 = 0;
      FUN_100314fe4(0,local_88,lVar2);
      uVar15 = 1;
      goto LAB_10031353c;
    }
    pcVar18 = *(code **)(lVar4 + 0x20);
    local_a0 = lVar7;
    (*pcVar18)(local_90,puVar14,uVar6);
    uVar15 = local_88;
    lVar7 = lVar2;
    _swift_getAssociatedConformanceWitness
              (lVar2,local_88,uVar6,0x1008f97a8,&TargetProtocolRequirement_1008f97b0);
    uVar17 = uVar6;
    (**(code **)(lVar7 + 8))(uVar6,lVar7);
    lVar5 = local_c8;
    lVar19 = local_d0;
    lVar16 = local_d8;
    lVar7 = local_e0;
    iVar3 = *(int *)(lVar8 + 0x28);
    uVar12 = *(ulong *)(param_2 + iVar3);
    if ((uVar17 & 1) == 0) {
      if (1 < uVar12) {
        FUN_100316e44();
        *(undefined8 *)(param_2 + iVar3) = 0;
      }
    }
    else if (uVar12 != 1) {
      local_c8 = lVar8;
      (**(code **)(local_d8 + 0x10))(local_e0,lVar5,local_d0);
      lVar5 = local_b8;
      (**(code **)(lVar16 + 0x20))(local_b8,lVar7,lVar19);
      lVar16 = local_a0;
      lVar8 = local_c0;
      lVar7 = lStack_e8;
      uVar11 = local_f0;
      *(undefined8 *)(lVar5 + *(int *)(local_a0 + 0x24)) = local_f0;
      plVar1 = (long *)(lVar5 + *(int *)(local_a0 + 0x28));
      *plVar1 = local_b0;
      plVar1[1] = lStack_e8;
      (**(code **)(local_a8 + 0x10))(local_c0,lVar5,local_a0);
      local_b0 = (long)*(int *)(local_c8 + 0x34);
      uVar13 = 0;
      __sSaMa(0,lVar16);
      _swift_retain(uVar11);
      _swift_retain(lVar7);
      __sSa6appendyyxnF(local_b0,lVar8,uVar13);
      lVar7 = local_90;
      FUN_100313564(local_90,uVar11,param_2);
      (**(code **)(local_a8 + 8))(lVar5,lVar16);
      (**(code **)(lVar4 + 8))(lVar7,uVar6);
      goto LAB_1003134e4;
    }
    puVar14 = local_80;
    (*pcVar18)(local_80,local_90,uVar6);
    uVar11 = 0;
    FUN_100314fe4(0,uVar15,lVar2);
    uVar15 = 0;
  }
LAB_10031353c:
  _swift_storeEnumTagMultiPayload(puVar14,uVar11,uVar15);
  return;
}

